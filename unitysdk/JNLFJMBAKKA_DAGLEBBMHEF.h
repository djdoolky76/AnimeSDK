#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define JNLFJMBAKKA_DAGLEBBMHEF_CTOR_OFFSET UNITYSDK_OFFSET(0xB285220)
#define JNLFJMBAKKA_DAGLEBBMHEF_GET_CHIPID_OFFSET UNITYSDK_OFFSET(0xB2851E0)
#define JNLFJMBAKKA_DAGLEBBMHEF_GET_TARGETPOSITION_OFFSET UNITYSDK_OFFSET(0xB285200)
#define JNLFJMBAKKA_DAGLEBBMHEF_SET_CHIPID_OFFSET UNITYSDK_OFFSET(0xB2851F0)
#define JNLFJMBAKKA_DAGLEBBMHEF_SET_TARGETPOSITION_OFFSET UNITYSDK_OFFSET(0xB285210)

inline static constexpr unsigned int JNLFJMBAKKA_DAGLEBBMHEF_TypeDefinitionIndex = 79532;

	class JNLFJMBAKKA_DAGLEBBMHEF
	{
	public:
		::System::UInt32 _ChipID_k__BackingField; // 0x20
		::UnityEngine::Vector2Int _TargetPosition_k__BackingField; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLFJMBAKKA_DAGLEBBMHEF_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ChipID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLFJMBAKKA_DAGLEBBMHEF_GET_CHIPID_OFFSET))(this);
		}

		::System::Void set_ChipID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JNLFJMBAKKA_DAGLEBBMHEF_SET_CHIPID_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2Int get_TargetPosition()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLFJMBAKKA_DAGLEBBMHEF_GET_TARGETPOSITION_OFFSET))(this);
		}

		::System::Void set_TargetPosition(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + JNLFJMBAKKA_DAGLEBBMHEF_SET_TARGETPOSITION_OFFSET))(this, a1);
		}

	};
