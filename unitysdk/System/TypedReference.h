#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E2DE926113CB084F.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class RuntimeType; }
namespace System::Reflection { class FieldInfo; }

#define SYSTEM_TYPEDREFERENCE_A7E2B16F62245FA5_OFFSET UNITYSDK_OFFSET(0x3D0F900)
#define SYSTEM_TYPEDREFERENCE_AE1A0863005E0599_OFFSET UNITYSDK_OFFSET(0x3D0F2B0)
#define SYSTEM_TYPEDREFERENCE_AE1F43AB0E08A59A_OFFSET UNITYSDK_OFFSET(0x3D0F340)
#define SYSTEM_TYPEDREFERENCE_B7FC434FB6E7B69C_OFFSET UNITYSDK_OFFSET(0x3D0F350)
#define SYSTEM_TYPEDREFERENCE_E7483E7CBF06BCFD_OFFSET UNITYSDK_OFFSET(0x3D0F250)
#define SYSTEM_TYPEDREFERENCE_F38AC5ACDF623B93_OFFSET UNITYSDK_OFFSET(0x3D0F950)

namespace System
{
	inline static constexpr unsigned int TypedReference_TypeDefinitionIndex = 10781;

	struct alignas(4) TypedReference
	{
		::E2DE926113CB084F F90267B6A9827A79; // 0x10
		::System::IntPtr EBF25B8A59BACBA3; // 0x18
		::System::IntPtr Type; // 0x20

		::System::Boolean E7483E7CBF06BCFD(::System::Object* E1B624472530B0E4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPEDREFERENCE_E7483E7CBF06BCFD_OFFSET))(this, E1B624472530B0E4);
		}

		::System::Boolean F38AC5ACDF623B93()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPEDREFERENCE_F38AC5ACDF623B93_OFFSET))(this);
		}

		/*
		static ::System::Void A7E2B16F62245FA5(::System::TypedReference F249A74E7BFBE1A7, ::System::Object* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::System::TypedReference, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPEDREFERENCE_A7E2B16F62245FA5_OFFSET))(F249A74E7BFBE1A7, E937D4885DAA1AE8);
		}
		*/

		static ::System::Void AE1F43AB0E08A59A(::PVOID E82293C0814051A5, ::System::Object* F249A74E7BFBE1A7, ::Il2CppArray<::System::IntPtr>* FEB1D0F3296D3E31, ::System::RuntimeType* A5DDE0FDD3A0F88F)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::IntPtr>*, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_TYPEDREFERENCE_AE1F43AB0E08A59A_OFFSET))(E82293C0814051A5, F249A74E7BFBE1A7, FEB1D0F3296D3E31, A5DDE0FDD3A0F88F);
		}

		/*
		static ::System::TypedReference B7FC434FB6E7B69C(::System::Object* F249A74E7BFBE1A7, ::Il2CppArray<::System::Reflection::FieldInfo*>* FEB1D0F3296D3E31)
		{
			return ((::System::TypedReference(*)(::System::Object*, ::Il2CppArray<::System::Reflection::FieldInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPEDREFERENCE_B7FC434FB6E7B69C_OFFSET))(F249A74E7BFBE1A7, FEB1D0F3296D3E31);
		}
		*/

		::System::Int32 AE1A0863005E0599()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPEDREFERENCE_AE1A0863005E0599_OFFSET))(this);
		}
	};
}
