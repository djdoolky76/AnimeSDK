#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCGIDEKLGAJ_ForceKillMarkPanelType.h"
#include "unitysdk/System/Object.h"
class HKJDDODAIAE;
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define DCGIDEKLGAJ_DDFBFNLFODJ_CTOR_OFFSET UNITYSDK_OFFSET(0xE23EF10)

inline static constexpr unsigned int DCGIDEKLGAJ_DDFBFNLFODJ_TypeDefinitionIndex = 71680;

	class DCGIDEKLGAJ_DDFBFNLFODJ : public ::System::Object
	{
	public:
		::UnityEngine::Transform* DHIPFJBEJPI; // 0x10
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18
		::HKJDDODAIAE* ALFPNBPHAPK; // 0x20
		::DCGIDEKLGAJ_ForceKillMarkPanelType OPDIIFPICPB; // 0x28
		::System::Void _ctor(::HKJDDODAIAE* a1, ::DCGIDEKLGAJ_ForceKillMarkPanelType a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::HKJDDODAIAE*, ::DCGIDEKLGAJ_ForceKillMarkPanelType, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + DCGIDEKLGAJ_DDFBFNLFODJ_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
