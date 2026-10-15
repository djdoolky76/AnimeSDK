#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NBJLLEBFGPD.h"
#include "unitysdk/System/Nullable_1.h"

#define JHOLNAGBJJG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB670B0)
#define JHOLNAGBJJG_GET_CREATORID_OFFSET UNITYSDK_OFFSET(0x1CB67210)
#define JHOLNAGBJJG_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1CB671F0)
#define JHOLNAGBJJG_SET_CREATORID_OFFSET UNITYSDK_OFFSET(0x1CB67220)
#define JHOLNAGBJJG_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1CB67200)

inline static constexpr unsigned int JHOLNAGBJJG_TypeDefinitionIndex = 41941;

	class JHOLNAGBJJG : public ::NBJLLEBFGPD
	{
	public:
		::System::Single _Value_k__BackingField; // 0x18
		::System::Nullable_1<::System::Int32> _CreatorID_k__BackingField; // 0x1C
		::System::Void _ctor(::System::Single a1, ::System::Nullable_1<::System::Int32> a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + JHOLNAGBJJG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single get_Value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOLNAGBJJG_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JHOLNAGBJJG_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Int32> get_CreatorID()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOLNAGBJJG_GET_CREATORID_OFFSET))(this);
		}

		::System::Void set_CreatorID(::System::Nullable_1<::System::Int32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + JHOLNAGBJJG_SET_CREATORID_OFFSET))(this, a1);
		}

	};
