#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define JNLFJMBAKKA_KACOKHHHDMB_CTOR_OFFSET UNITYSDK_OFFSET(0x1A0D2F60)
#define JNLFJMBAKKA_KACOKHHHDMB_GET_CHIPID_OFFSET UNITYSDK_OFFSET(0x1A0D2F10)
#define JNLFJMBAKKA_KACOKHHHDMB_GET_TARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x1A0D2F30)
#define JNLFJMBAKKA_KACOKHHHDMB_SET_CHIPID_OFFSET UNITYSDK_OFFSET(0x1A0D2F20)
#define JNLFJMBAKKA_KACOKHHHDMB_SET_TARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x1A0D2F50)

inline static constexpr unsigned int JNLFJMBAKKA_KACOKHHHDMB_TypeDefinitionIndex = 82307;

	class JNLFJMBAKKA_KACOKHHHDMB
	{
	public:
		::System::UInt32 _ChipID_k__BackingField; // 0x20
		::System::Nullable_1<::UnityEngine::Vector2Int> _TargetPosition_k__BackingField; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLFJMBAKKA_KACOKHHHDMB_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ChipID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLFJMBAKKA_KACOKHHHDMB_GET_CHIPID_OFFSET))(this);
		}

		::System::Void set_ChipID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JNLFJMBAKKA_KACOKHHHDMB_SET_CHIPID_OFFSET))(this, a1);
		}

		::System::Nullable_1<::UnityEngine::Vector2Int> get_TargetPosition()
		{
			return ((::System::Nullable_1<::UnityEngine::Vector2Int>(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLFJMBAKKA_KACOKHHHDMB_GET_TARGETPOSITION_OFFSET))(this);
		}

		::System::Void set_TargetPosition(::System::Nullable_1<::UnityEngine::Vector2Int> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector2Int>))((::PBYTE)hIl2Cpp + JNLFJMBAKKA_KACOKHHHDMB_SET_TARGETPOSITION_OFFSET))(this, a1);
		}

	};
