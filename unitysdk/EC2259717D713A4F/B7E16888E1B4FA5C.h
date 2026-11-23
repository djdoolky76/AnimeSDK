#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define EC2259717D713A4F_B7E16888E1B4FA5C_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define EC2259717D713A4F_B7E16888E1B4FA5C__CTOR_OFFSET UNITYSDK_OFFSET(0x38E2F50)

namespace EC2259717D713A4F
{
	inline static constexpr unsigned int B7E16888E1B4FA5C_TypeDefinitionIndex = 14754;

	class B7E16888E1B4FA5C : public ::System::MulticastDelegate
	{
	public:
		::System::Int32 Invoke(::Il2CppArray<::System::String*>* F511FAFA17D0D19A)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EC2259717D713A4F_B7E16888E1B4FA5C_INVOKE_OFFSET))(this, F511FAFA17D0D19A);
		}

		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EC2259717D713A4F_B7E16888E1B4FA5C__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}
	};
}
