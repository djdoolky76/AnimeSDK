#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHDPILMCJNP;
namespace System { class Object; }

#define CHDPILMCJNP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F393340)
#define CHDPILMCJNP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F393380)
#define CHDPILMCJNP___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F393390)

inline static constexpr unsigned int CHDPILMCJNP___c_TypeDefinitionIndex = 33975;

	class CHDPILMCJNP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF890);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHDPILMCJNP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHDPILMCJNP___C_CTOR_OFFSET))(this);
		}

		::CHDPILMCJNP* __cctor_b__18_0()
		{
			return ((::CHDPILMCJNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHDPILMCJNP___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
