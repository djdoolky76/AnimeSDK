#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OEMOIGDNPNP;
namespace System { class Object; }

#define OEMOIGDNPNP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB64330)
#define OEMOIGDNPNP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB64370)
#define OEMOIGDNPNP___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1FB64380)

inline static constexpr unsigned int OEMOIGDNPNP___c_TypeDefinitionIndex = 25967;

	class OEMOIGDNPNP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10070);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEMOIGDNPNP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMOIGDNPNP___C_CTOR_OFFSET))(this);
		}

		::OEMOIGDNPNP* __cctor_b__38_0()
		{
			return ((::OEMOIGDNPNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMOIGDNPNP___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
