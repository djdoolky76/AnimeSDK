#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
namespace RPG::CustomRP { class CustomAdditionalLightData; }
namespace UnityEngine { class Light; }

#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_LLOPNELAIGC_CTOR_OFFSET UNITYSDK_OFFSET(0xE29EE20)
#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_LLOPNELAIGC_MILOJPIDFBJ_OFFSET UNITYSDK_OFFSET(0xE2A3D90)

namespace RPG::Client
{
	class TimeSpaceCrisscrossLightsBehavior_LLOPNELAIGC : public ::System::Object
	{
	public:
		::RPG::CustomRP::CustomAdditionalLightData* OHPGEHKFABM; // 0x10
		::UnityEngine::Light* LFMEKFKILBC; // 0x18
		::UnityEngine::Bounds DCCKCNLNKDG; // 0x20
		::System::Single EIGMMFGILLJ; // 0x38
		::System::Boolean ELLLBPMKMCE; // 0x3C
		::System::Void _ctor(::UnityEngine::Light* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_LLOPNELAIGC_CTOR_OFFSET))(this, a1);
		}

		::System::Void MILOJPIDFBJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_LLOPNELAIGC_MILOJPIDFBJ_OFFSET))(this, a1);
		}

	};
}
