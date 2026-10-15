#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOIOKCDLNHE;
namespace System { class Object; }

#define MOIOKCDLNHE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAAC090)
#define MOIOKCDLNHE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAAC0D0)
#define MOIOKCDLNHE___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1EAAC0E0)

inline static constexpr unsigned int MOIOKCDLNHE___c_TypeDefinitionIndex = 27466;

	class MOIOKCDLNHE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A860);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOIOKCDLNHE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIOKCDLNHE___C_CTOR_OFFSET))(this);
		}

		::MOIOKCDLNHE* __cctor_b__53_0()
		{
			return ((::MOIOKCDLNHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIOKCDLNHE___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
