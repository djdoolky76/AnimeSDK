#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GANDCEDCLDL;
namespace System { class Object; }

#define GANDCEDCLDL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E422E10)
#define GANDCEDCLDL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E422E40)
#define GANDCEDCLDL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E422E50)

inline static constexpr unsigned int GANDCEDCLDL___c_TypeDefinitionIndex = 25478;

	class GANDCEDCLDL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC6A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GANDCEDCLDL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GANDCEDCLDL___C_CTOR_OFFSET))(this);
		}

		::GANDCEDCLDL* __cctor_b__33_0()
		{
			return ((::GANDCEDCLDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GANDCEDCLDL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
