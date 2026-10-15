#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLINBGJOMJO;
namespace System { class Object; }

#define NLINBGJOMJO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB380F0)
#define NLINBGJOMJO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB38120)
#define NLINBGJOMJO___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1EB38130)

inline static constexpr unsigned int NLINBGJOMJO___c_TypeDefinitionIndex = 33902;

	class NLINBGJOMJO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69DE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLINBGJOMJO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLINBGJOMJO___C_CTOR_OFFSET))(this);
		}

		::NLINBGJOMJO* __cctor_b__53_0()
		{
			return ((::NLINBGJOMJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLINBGJOMJO___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
