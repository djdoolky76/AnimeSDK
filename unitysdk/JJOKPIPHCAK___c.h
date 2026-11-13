#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJOKPIPHCAK;
namespace System { class Object; }

#define JJOKPIPHCAK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF36D80)
#define JJOKPIPHCAK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF36DC0)
#define JJOKPIPHCAK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FF36DD0)

inline static constexpr unsigned int JJOKPIPHCAK___c_TypeDefinitionIndex = 35491;

	class JJOKPIPHCAK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x61DA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJOKPIPHCAK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOKPIPHCAK___C_CTOR_OFFSET))(this);
		}

		::JJOKPIPHCAK* __cctor_b__23_0()
		{
			return ((::JJOKPIPHCAK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOKPIPHCAK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
