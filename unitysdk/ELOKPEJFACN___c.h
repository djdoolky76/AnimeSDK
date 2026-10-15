#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELOKPEJFACN;
namespace System { class Object; }

#define ELOKPEJFACN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2ABF10)
#define ELOKPEJFACN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2ABF50)
#define ELOKPEJFACN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E2ABF60)

inline static constexpr unsigned int ELOKPEJFACN___c_TypeDefinitionIndex = 34230;

	class ELOKPEJFACN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x524B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELOKPEJFACN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOKPEJFACN___C_CTOR_OFFSET))(this);
		}

		::ELOKPEJFACN* __cctor_b__28_0()
		{
			return ((::ELOKPEJFACN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOKPEJFACN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
