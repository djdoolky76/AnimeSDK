#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/BattleTargetStatus.h"
namespace UnityEngine { class Transform; }

#define PDIIHJJNNEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1AAE5800)
#define PDIIHJJNNEF_EDIAINOHBOG_OFFSET UNITYSDK_OFFSET(0x1AAE5780)
#define PDIIHJJNNEF_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1AAE5640)
#define PDIIHJJNNEF__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x1AAE5600)
#define PDIIHJJNNEF__ONBIND_OFFSET UNITYSDK_OFFSET(0x1AAE54A0)

inline static constexpr unsigned int PDIIHJJNNEF_TypeDefinitionIndex = 73865;

	class PDIIHJJNNEF : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* PCAEEEKLOJM; // 0x60
		::UnityEngine::Transform* KPJPDALFIIN; // 0x68
		::UnityEngine::Transform* HNALEMBOBFE; // 0x70
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

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDIIHJJNNEF__INITVARONCE_OFFSET))(this);
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
