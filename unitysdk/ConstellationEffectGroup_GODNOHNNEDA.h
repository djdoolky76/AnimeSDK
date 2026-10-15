#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ConstellationEffectGroup_ConstellationAnchor;
namespace UnityEngine { class GameObject; }

#define CONSTELLATIONEFFECTGROUP_GODNOHNNEDA_CTOR_OFFSET UNITYSDK_OFFSET(0xDFB3680)
#define CONSTELLATIONEFFECTGROUP_GODNOHNNEDA_IGHHHOJGNAH_OFFSET UNITYSDK_OFFSET(0xDFB3690)
#define CONSTELLATIONEFFECTGROUP_GODNOHNNEDA_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xDFB31E0)

	class ConstellationEffectGroup_GODNOHNNEDA : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* NCKJLELFNMM; // 0x10
		::ConstellationEffectGroup_ConstellationAnchor* OEOOFDAGECM; // 0x18
		::System::Single JODPHBJFOPL; // 0x20
		::UnityEngine::Vector3 PGJJCGGBCKK; // 0x24
		::System::Single JJBOJONHNHJ; // 0x30
		::UnityEngine::Vector3 NIHLNAFJGLE; // 0x34
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
