#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define OGLGJAFCELK_CTOR_OFFSET UNITYSDK_OFFSET(0xBE59EE0)
#define OGLGJAFCELK_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xBE59EC0)
#define OGLGJAFCELK_GET_REASON_OFFSET UNITYSDK_OFFSET(0xBE59EA0)
#define OGLGJAFCELK_SET_COUNT_OFFSET UNITYSDK_OFFSET(0xBE59ED0)
#define OGLGJAFCELK_SET_REASON_OFFSET UNITYSDK_OFFSET(0xBE59EB0)

inline static constexpr unsigned int OGLGJAFCELK_TypeDefinitionIndex = 77847;

	class OGLGJAFCELK : public ::System::Object
	{
	public:
		::System::String* _Reason_k__BackingField; // 0x10
		::System::Int64 _Count_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGLGJAFCELK_CTOR_OFFSET))(this);
		}

		::System::String* get_Reason()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGLGJAFCELK_GET_REASON_OFFSET))(this);
		}

		::System::Void set_Reason(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OGLGJAFCELK_SET_REASON_OFFSET))(this, a1);
		}

		::System::Int64 get_Count()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + OGLGJAFCELK_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_Count(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + OGLGJAFCELK_SET_COUNT_OFFSET))(this, a1);
		}

	};
