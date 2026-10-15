#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APDMIIEDMLI_CFHOMFLPNNO;

#define APDMIIEDMLI_CCTOR_OFFSET UNITYSDK_OFFSET(0x15BA7030)
#define APDMIIEDMLI_CTOR_OFFSET UNITYSDK_OFFSET(0x15BA7020)

	class APDMIIEDMLI : public ::System::Object
	{
	public:
		static ::APDMIIEDMLI_CFHOMFLPNNO** StaticGet_IBLOPKIDEBE()
		{
			return (::APDMIIEDMLI_CFHOMFLPNNO**)UnitySDK::FromName("", "APDMIIEDMLI")->GetStaticField(0x1B00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APDMIIEDMLI_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APDMIIEDMLI_CCTOR_OFFSET))();
		}

	};
