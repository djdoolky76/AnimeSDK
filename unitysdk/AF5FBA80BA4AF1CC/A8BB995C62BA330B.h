#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define AF5FBA80BA4AF1CC_A8BB995C62BA330B_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define AF5FBA80BA4AF1CC_A8BB995C62BA330B__CTOR_OFFSET UNITYSDK_OFFSET(0x2911C70)

namespace AF5FBA80BA4AF1CC
{
	inline static constexpr unsigned int A8BB995C62BA330B_TypeDefinitionIndex = 15114;

	class A8BB995C62BA330B : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AF5FBA80BA4AF1CC_A8BB995C62BA330B__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::Il2CppArray<::System::String*>* Invoke(::System::String* E937D4885DAA1AE8)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AF5FBA80BA4AF1CC_A8BB995C62BA330B_INVOKE_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
