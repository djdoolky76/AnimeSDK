#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define FA0FB4840586622A_A640C42CA99A025D_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define FA0FB4840586622A_A640C42CA99A025D__CTOR_OFFSET UNITYSDK_OFFSET(0x2284E60)

namespace FA0FB4840586622A
{
	inline static constexpr unsigned int A640C42CA99A025D_TypeDefinitionIndex = 7018;

	class A640C42CA99A025D : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FA0FB4840586622A_A640C42CA99A025D__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Int32 E1C9D5D57F5AB79E, ::System::String* B6018BB9F7294B44)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + FA0FB4840586622A_A640C42CA99A025D_INVOKE_OFFSET))(this, E1C9D5D57F5AB79E, B6018BB9F7294B44);
		}
	};
}
