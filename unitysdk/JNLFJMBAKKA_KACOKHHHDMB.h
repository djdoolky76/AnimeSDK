#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
namespace System { class Nullable; }

#define JNLFJMBAKKA_KACOKHHHDMB_CTOR_OFFSET UNITYSDK_OFFSET(0xB28BC20)
#define JNLFJMBAKKA_KACOKHHHDMB_GET_CHIPID_OFFSET UNITYSDK_OFFSET(0xB28BBD0)
#define JNLFJMBAKKA_KACOKHHHDMB_GET_TARGETPOSITION_OFFSET UNITYSDK_OFFSET(0xB28BBF0)
#define JNLFJMBAKKA_KACOKHHHDMB_SET_CHIPID_OFFSET UNITYSDK_OFFSET(0xB28BBE0)
#define JNLFJMBAKKA_KACOKHHHDMB_SET_TARGETPOSITION_OFFSET UNITYSDK_OFFSET(0xB28BC10)

	class JNLFJMBAKKA_KACOKHHHDMB
	{
	public:
		::System::UInt32 _ChipID_k__BackingField; // 0x20
		::System::Nullable* _TargetPosition_k__BackingField; // 0x24
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

		::System::Nullable* get_TargetPosition()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLFJMBAKKA_KACOKHHHDMB_GET_TARGETPOSITION_OFFSET))(this);
		}

		::System::Void set_TargetPosition(::System::Nullable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + JNLFJMBAKKA_KACOKHHHDMB_SET_TARGETPOSITION_OFFSET))(this, a1);
		}

	};
