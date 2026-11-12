#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEANOEFPPKN;
namespace System { class Object; }

#define EEANOEFPPKN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F562B50)
#define EEANOEFPPKN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F562B90)
#define EEANOEFPPKN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F562BA0)

inline static constexpr unsigned int EEANOEFPPKN___c_TypeDefinitionIndex = 32814;

	class EEANOEFPPKN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51110);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEANOEFPPKN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEANOEFPPKN___C_CTOR_OFFSET))(this);
		}

		::EEANOEFPPKN* __cctor_b__28_0()
		{
			return ((::EEANOEFPPKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEANOEFPPKN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
