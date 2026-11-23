#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define A0F28B7671C52743_B7429CEC9304BA90_INVOKE_OFFSET UNITYSDK_OFFSET(0x39FF2E0)
#define A0F28B7671C52743_B7429CEC9304BA90__CTOR_OFFSET UNITYSDK_OFFSET(0x3A00B20)

inline static constexpr unsigned int A0F28B7671C52743_B7429CEC9304BA90_TypeDefinitionIndex = 12794;

class A0F28B7671C52743_B7429CEC9304BA90 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A0F28B7671C52743_B7429CEC9304BA90__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Object* B8334CB64332323A, ::System::Boolean FBF3AC291087F95C, ::System::Boolean B288BEEB26D402BC, ::System::Boolean A8330B7BA057D508)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + A0F28B7671C52743_B7429CEC9304BA90_INVOKE_OFFSET))(this, B8334CB64332323A, FBF3AC291087F95C, B288BEEB26D402BC, A8330B7BA057D508);
	}
};
