#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class E8C1635F85E9BC30;
namespace System { class Object; }

#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_FB20BEF60397E786_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_FB20BEF60397E786__CTOR_OFFSET UNITYSDK_OFFSET(0x20F9B00)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int DSAManaged_FB20BEF60397E786_TypeDefinitionIndex = 11421;

	class DSAManaged_FB20BEF60397E786 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_FB20BEF60397E786__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Object* AD0CAFBAFB8B01EA, ::E8C1635F85E9BC30* A5FB7225DA5C5A9B)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::E8C1635F85E9BC30*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_DSAMANAGED_FB20BEF60397E786_INVOKE_OFFSET))(this, AD0CAFBAFB8B01EA, A5FB7225DA5C5A9B);
		}
	};
}
