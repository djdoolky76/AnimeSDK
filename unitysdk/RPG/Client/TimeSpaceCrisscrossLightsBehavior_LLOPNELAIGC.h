#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
namespace RPG::CustomRP { class CustomAdditionalLightData; }
namespace UnityEngine { class Light; }

#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_LLOPNELAIGC_CTOR_OFFSET UNITYSDK_OFFSET(0xE294000)
#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_LLOPNELAIGC_MILOJPIDFBJ_OFFSET UNITYSDK_OFFSET(0xE298F70)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeSpaceCrisscrossLightsBehavior_LLOPNELAIGC_TypeDefinitionIndex = 70230;

	class TimeSpaceCrisscrossLightsBehavior_LLOPNELAIGC : public ::System::Object
	{
	public:
		::UnityEngine::Light* LFMEKFKILBC; // 0x10
		::RPG::CustomRP::CustomAdditionalLightData* OHPGEHKFABM; // 0x18
		::System::Single EIGMMFGILLJ; // 0x20
		::UnityEngine::Bounds DCCKCNLNKDG; // 0x24
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
