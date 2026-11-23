#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_VALUETYPE_A402545B5AC11919_OFFSET UNITYSDK_OFFSET(0x3D148B0)
#define SYSTEM_VALUETYPE_AE1A0863005E0599_OFFSET UNITYSDK_OFFSET(0x3D14A90)
#define SYSTEM_VALUETYPE_BA096817AE40A0BD_OFFSET UNITYSDK_OFFSET(0x3D14B30)
#define SYSTEM_VALUETYPE_E7483E7CBF06BCFD_OFFSET UNITYSDK_OFFSET(0x3C3E9B0)
#define SYSTEM_VALUETYPE_E80B9F472EEFDF74_OFFSET UNITYSDK_OFFSET(0x3D14B50)
#define SYSTEM_VALUETYPE_FA83E55A9362386D_OFFSET UNITYSDK_OFFSET(0x3D14B40)
#define SYSTEM_VALUETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB8060)

namespace System
{
	inline static constexpr unsigned int ValueType_TypeDefinitionIndex = 10854;

	class ValueType : public ::System::Object
	{
	public:
		static ::System::Boolean BA096817AE40A0BD(::System::Object* BBBAFF842A7A53C3, ::System::Object* FEE8210404C6EADC, ::Il2CppArray<::System::Object*>*& AA5F55683EDC9AE0)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Object*, ::Il2CppArray<::System::Object*>*&))((::PBYTE)hIl2Cpp + SYSTEM_VALUETYPE_BA096817AE40A0BD_OFFSET))(BBBAFF842A7A53C3, FEE8210404C6EADC, AA5F55683EDC9AE0);
		}

		::System::String* E80B9F472EEFDF74()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETYPE_E80B9F472EEFDF74_OFFSET))(this);
		}

		::System::Boolean E7483E7CBF06BCFD(::System::Object* A86A90C31A146E9C)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_VALUETYPE_E7483E7CBF06BCFD_OFFSET))(this, A86A90C31A146E9C);
		}

		::System::Int32 AE1A0863005E0599()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETYPE_AE1A0863005E0599_OFFSET))(this);
		}

		static ::System::Int32 FA83E55A9362386D(::System::Object* E1B624472530B0E4, ::Il2CppArray<::System::Object*>*& AA5F55683EDC9AE0)
		{
			return ((::System::Int32(*)(::System::Object*, ::Il2CppArray<::System::Object*>*&))((::PBYTE)hIl2Cpp + SYSTEM_VALUETYPE_FA83E55A9362386D_OFFSET))(E1B624472530B0E4, AA5F55683EDC9AE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Boolean A402545B5AC11919(::System::Object* BBBAFF842A7A53C3, ::System::Object* FEE8210404C6EADC)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_VALUETYPE_A402545B5AC11919_OFFSET))(BBBAFF842A7A53C3, FEE8210404C6EADC);
		}
	};
}
