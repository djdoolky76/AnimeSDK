#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/BattleTargetStatus.h"
namespace UnityEngine { class Transform; }

#define PDIIHJJNNEF_CTOR_OFFSET UNITYSDK_OFFSET(0xC0144A0)
#define PDIIHJJNNEF_EDIAINOHBOG_OFFSET UNITYSDK_OFFSET(0xC014420)
#define PDIIHJJNNEF_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xC0142A0)
#define PDIIHJJNNEF_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xC0142E0)
#define PDIIHJJNNEF__ONBIND_OFFSET UNITYSDK_OFFSET(0xC014140)

	class PDIIHJJNNEF : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* PCAEEEKLOJM; // 0x60
		::UnityEngine::Transform* HNALEMBOBFE; // 0x68
		::UnityEngine::Transform* KPJPDALFIIN; // 0x70
		::RPG::Client::BattleTargetStatus LODNGAGNLCB; // 0x78
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDIIHJJNNEF_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDIIHJJNNEF__ONBIND_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDIIHJJNNEF_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::RPG::Client::BattleTargetStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleTargetStatus))((::PBYTE)hIl2Cpp + PDIIHJJNNEF_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void EDIAINOHBOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDIIHJJNNEF_EDIAINOHBOG_OFFSET))(this);
		}

	};
