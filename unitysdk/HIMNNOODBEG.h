#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/BattleTargetStatus.h"
namespace UnityEngine { class Transform; }

#define HIMNNOODBEG_CTOR_OFFSET UNITYSDK_OFFSET(0x15CF9360)
#define HIMNNOODBEG_EDIAINOHBOG_OFFSET UNITYSDK_OFFSET(0x15CF92F0)
#define HIMNNOODBEG_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x15CF9110)
#define HIMNNOODBEG_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x15CF9150)
#define HIMNNOODBEG__ONBIND_OFFSET UNITYSDK_OFFSET(0x15CF8FF0)

	class HIMNNOODBEG : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* OPNILHIOKLG; // 0x60
		::UnityEngine::Transform* HNALEMBOBFE; // 0x68
		::RPG::Client::BattleTargetStatus LODNGAGNLCB; // 0x70
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMNNOODBEG_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMNNOODBEG__ONBIND_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMNNOODBEG_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::RPG::Client::BattleTargetStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleTargetStatus))((::PBYTE)hIl2Cpp + HIMNNOODBEG_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void EDIAINOHBOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMNNOODBEG_EDIAINOHBOG_OFFSET))(this);
		}

	};
