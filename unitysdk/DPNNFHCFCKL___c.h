#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPNNFHCFCKL;
namespace System { class Object; }

#define DPNNFHCFCKL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4FE740)
#define DPNNFHCFCKL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4FE780)
#define DPNNFHCFCKL___C___CCTOR_B__63_0_OFFSET UNITYSDK_OFFSET(0x1F4FE790)

inline static constexpr unsigned int DPNNFHCFCKL___c_TypeDefinitionIndex = 27340;

	class DPNNFHCFCKL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42E30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPNNFHCFCKL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNNFHCFCKL___C_CTOR_OFFSET))(this);
		}

		::DPNNFHCFCKL* __cctor_b__63_0()
		{
			return ((::DPNNFHCFCKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNNFHCFCKL___C___CCTOR_B__63_0_OFFSET))(this);
		}

	};
