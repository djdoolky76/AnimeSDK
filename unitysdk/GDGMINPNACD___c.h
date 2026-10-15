#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDGMINPNACD;
namespace System { class Object; }

#define GDGMINPNACD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E41CF80)
#define GDGMINPNACD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E41CFC0)
#define GDGMINPNACD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E41CFD0)

inline static constexpr unsigned int GDGMINPNACD___c_TypeDefinitionIndex = 33985;

	class GDGMINPNACD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xFF00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDGMINPNACD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGMINPNACD___C_CTOR_OFFSET))(this);
		}

		::GDGMINPNACD* __cctor_b__33_0()
		{
			return ((::GDGMINPNACD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGMINPNACD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
