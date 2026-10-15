#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKCPHOMPACI;
namespace System { class Object; }

#define BKCPHOMPACI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF22340)
#define BKCPHOMPACI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF22380)
#define BKCPHOMPACI___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DF22390)

inline static constexpr unsigned int BKCPHOMPACI___c_TypeDefinitionIndex = 31383;

	class BKCPHOMPACI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A2B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKCPHOMPACI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCPHOMPACI___C_CTOR_OFFSET))(this);
		}

		::BKCPHOMPACI* __cctor_b__18_0()
		{
			return ((::BKCPHOMPACI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCPHOMPACI___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
