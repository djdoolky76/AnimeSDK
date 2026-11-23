#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { template <typename T> class Func_1; }

#define A0F28B7671C52743_E3FE62F611C12A98_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define A0F28B7671C52743_E3FE62F611C12A98__CTOR_OFFSET UNITYSDK_OFFSET(0x20F9B00)

inline static constexpr unsigned int A0F28B7671C52743_E3FE62F611C12A98_TypeDefinitionIndex = 12797;

class A0F28B7671C52743_E3FE62F611C12A98 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A0F28B7671C52743_E3FE62F611C12A98__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Object* B8334CB64332323A, ::System::Func_1<::System::Boolean>* E2A5F664113FF4C7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + A0F28B7671C52743_E3FE62F611C12A98_INVOKE_OFFSET))(this, B8334CB64332323A, E2A5F664113FF4C7);
	}
};
