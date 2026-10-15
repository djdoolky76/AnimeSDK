#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAMDILFLLCL;
namespace System { class Object; }

#define AAMDILFLLCL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDBFBC0)
#define AAMDILFLLCL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDBFC00)
#define AAMDILFLLCL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DDBFC10)

inline static constexpr unsigned int AAMDILFLLCL___c_TypeDefinitionIndex = 30151;

	class AAMDILFLLCL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x375B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAMDILFLLCL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAMDILFLLCL___C_CTOR_OFFSET))(this);
		}

		::AAMDILFLLCL* __cctor_b__23_0()
		{
			return ((::AAMDILFLLCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAMDILFLLCL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
