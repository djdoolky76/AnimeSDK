#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NBJLLEBFGPD.h"
namespace System { class Nullable; }

#define JHOLNAGBJJG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB953A0)
#define JHOLNAGBJJG_GET_CREATORID_OFFSET UNITYSDK_OFFSET(0x1CB95500)
#define JHOLNAGBJJG_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1CB954E0)
#define JHOLNAGBJJG_SET_CREATORID_OFFSET UNITYSDK_OFFSET(0x1CB95510)
#define JHOLNAGBJJG_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1CB954F0)

inline static constexpr unsigned int JHOLNAGBJJG_TypeDefinitionIndex = 41941;

	class JHOLNAGBJJG : public ::NBJLLEBFGPD
	{
	public:
		::System::Single _Value_k__BackingField; // 0x18
		::System::Nullable* _CreatorID_k__BackingField; // 0x1C
		::System::Void _ctor(::System::Single a1, ::System::Nullable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Nullable*))((::PBYTE)hIl2Cpp + JHOLNAGBJJG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single get_Value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOLNAGBJJG_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JHOLNAGBJJG_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Nullable* get_CreatorID()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOLNAGBJJG_GET_CREATORID_OFFSET))(this);
		}

		::System::Void set_CreatorID(::System::Nullable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + JHOLNAGBJJG_SET_CREATORID_OFFSET))(this, a1);
		}

	};
