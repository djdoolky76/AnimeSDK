#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ConstellationEffectGroup_ConstellationAnchor;
namespace UnityEngine { class GameObject; }

#define CONSTELLATIONEFFECTGROUP_GODNOHNNEDA_CTOR_OFFSET UNITYSDK_OFFSET(0xDFA99A0)
#define CONSTELLATIONEFFECTGROUP_GODNOHNNEDA_IGHHHOJGNAH_OFFSET UNITYSDK_OFFSET(0xDFA99B0)
#define CONSTELLATIONEFFECTGROUP_GODNOHNNEDA_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xDFA9500)

inline static constexpr unsigned int ConstellationEffectGroup_GODNOHNNEDA_TypeDefinitionIndex = 47331;

	class ConstellationEffectGroup_GODNOHNNEDA : public ::System::Object
	{
	public:
		::ConstellationEffectGroup_ConstellationAnchor* OEOOFDAGECM; // 0x10
		::UnityEngine::GameObject* NCKJLELFNMM; // 0x18
		::UnityEngine::Vector3 NIHLNAFJGLE; // 0x20
		::System::Single JJBOJONHNHJ; // 0x2C
		::UnityEngine::Vector3 PGJJCGGBCKK; // 0x30
		::System::Single JODPHBJFOPL; // 0x3C
		::UnityEngine::Vector3 DLKMKNFJLIK; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTELLATIONEFFECTGROUP_GODNOHNNEDA_CTOR_OFFSET))(this);
		}

		::System::Void IGHHHOJGNAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTELLATIONEFFECTGROUP_GODNOHNNEDA_IGHHHOJGNAH_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTELLATIONEFFECTGROUP_GODNOHNNEDA_PAGKOAEOLKA_OFFSET))(this);
		}

	};
