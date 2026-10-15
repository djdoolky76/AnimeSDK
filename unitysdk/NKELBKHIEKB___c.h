#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NKELBKHIEKB;
namespace System { class Object; }

#define NKELBKHIEKB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB58870)
#define NKELBKHIEKB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB588A0)
#define NKELBKHIEKB___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1EB588B0)

inline static constexpr unsigned int NKELBKHIEKB___c_TypeDefinitionIndex = 25300;

	class NKELBKHIEKB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x660E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKELBKHIEKB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKELBKHIEKB___C_CTOR_OFFSET))(this);
		}

		::NKELBKHIEKB* __cctor_b__58_0()
		{
			return ((::NKELBKHIEKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKELBKHIEKB___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
