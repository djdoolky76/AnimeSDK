#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MapRotation/HideNpcState.h"
#include "unitysdk/RPG/Client/MapRotation/LogicVisibleState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class MapNpcDef; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define PEBBBNOOCFO_DEKEDBPNOEG_CLEAR_OFFSET UNITYSDK_OFFSET(0xC0323C0)
#define PEBBBNOOCFO_DEKEDBPNOEG_CTOR_OFFSET UNITYSDK_OFFSET(0xC02C8D0)
#define PEBBBNOOCFO_DEKEDBPNOEG_HOLGGDMLIDM_OFFSET UNITYSDK_OFFSET(0xC02A0E0)
#define PEBBBNOOCFO_DEKEDBPNOEG_LAKDAHKGACO_OFFSET UNITYSDK_OFFSET(0xC02F480)
#define PEBBBNOOCFO_DEKEDBPNOEG_LHFELGIDOKE_OFFSET UNITYSDK_OFFSET(0xC02EE10)
#define PEBBBNOOCFO_DEKEDBPNOEG_LIAHPODKDMH_OFFSET UNITYSDK_OFFSET(0xC02C8E0)
#define PEBBBNOOCFO_DEKEDBPNOEG_NEHLNJGGPLN_OFFSET UNITYSDK_OFFSET(0xC02CA10)
#define PEBBBNOOCFO_DEKEDBPNOEG_PMFDEGIBJPH_OFFSET UNITYSDK_OFFSET(0xC02F560)

inline static constexpr unsigned int PEBBBNOOCFO_DEKEDBPNOEG_TypeDefinitionIndex = 60604;

	class PEBBBNOOCFO_DEKEDBPNOEG : public ::System::Object
	{
	public:
		::System::String* JLCLCMGLKKG; // 0x10
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18
		::RPG::Client::MapNpcDef* ODOBMHNHNEB; // 0x20
		::System::String* POECNOICAHL; // 0x28
		::RPG::Client::MapRotation::LogicVisibleState LPKPKFLDBGM; // 0x30
		::System::UInt32 GJPPHJMHBPF; // 0x34
		::RPG::Client::MapRotation::HideNpcState KDMKOHIAOBJ; // 0x38
		::System::Int32 PNOPMIDGGKD; // 0x3C
		::System::Boolean OCEMLKIOEEH; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_DEKEDBPNOEG_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_DEKEDBPNOEG_CLEAR_OFFSET))(this);
		}

		::System::Boolean HOLGGDMLIDM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_DEKEDBPNOEG_HOLGGDMLIDM_OFFSET))(this);
		}

		::System::Void LAKDAHKGACO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_DEKEDBPNOEG_LAKDAHKGACO_OFFSET))(this);
		}

		::System::Void PMFDEGIBJPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_DEKEDBPNOEG_PMFDEGIBJPH_OFFSET))(this);
		}

		::System::Void NEHLNJGGPLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_DEKEDBPNOEG_NEHLNJGGPLN_OFFSET))(this);
		}

		::System::Void LHFELGIDOKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_DEKEDBPNOEG_LHFELGIDOKE_OFFSET))(this);
		}

		::System::Void LIAHPODKDMH(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_DEKEDBPNOEG_LIAHPODKDMH_OFFSET))(this, a1, a2);
		}

	};
