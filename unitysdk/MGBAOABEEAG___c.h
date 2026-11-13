#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGBAOABEEAG;
namespace System { class Object; }

#define MGBAOABEEAG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB1A980)
#define MGBAOABEEAG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB1A9C0)
#define MGBAOABEEAG___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1FB1A9D0)

inline static constexpr unsigned int MGBAOABEEAG___c_TypeDefinitionIndex = 25656;

	class MGBAOABEEAG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x504B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGBAOABEEAG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBAOABEEAG___C_CTOR_OFFSET))(this);
		}

		::MGBAOABEEAG* __cctor_b__43_0()
		{
			return ((::MGBAOABEEAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBAOABEEAG___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
