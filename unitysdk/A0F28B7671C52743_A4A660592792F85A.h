#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define A0F28B7671C52743_A4A660592792F85A_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define A0F28B7671C52743_A4A660592792F85A__CTOR_OFFSET UNITYSDK_OFFSET(0x32B6460)

inline static constexpr unsigned int A0F28B7671C52743_A4A660592792F85A_TypeDefinitionIndex = 12804;

class A0F28B7671C52743_A4A660592792F85A : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A0F28B7671C52743_A4A660592792F85A__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Object* B8334CB64332323A, ::System::Int32 A288CB28FC2A6DA3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + A0F28B7671C52743_A4A660592792F85A_INVOKE_OFFSET))(this, B8334CB64332323A, A288CB28FC2A6DA3);
	}
};
