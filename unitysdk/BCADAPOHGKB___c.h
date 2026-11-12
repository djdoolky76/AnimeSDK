#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCADAPOHGKB;
namespace System { class Object; }

#define BCADAPOHGKB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBC7080)
#define BCADAPOHGKB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBC70B0)
#define BCADAPOHGKB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FBC70C0)

inline static constexpr unsigned int BCADAPOHGKB___c_TypeDefinitionIndex = 27315;

	class BCADAPOHGKB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x433A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCADAPOHGKB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCADAPOHGKB___C_CTOR_OFFSET))(this);
		}

		::BCADAPOHGKB* __cctor_b__33_0()
		{
			return ((::BCADAPOHGKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCADAPOHGKB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
