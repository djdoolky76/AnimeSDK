#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCPHBDPJCLK;
namespace System { class Object; }

#define FCPHBDPJCLK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2052D5C0)
#define FCPHBDPJCLK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2052D600)
#define FCPHBDPJCLK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x2052D610)

inline static constexpr unsigned int FCPHBDPJCLK___c_TypeDefinitionIndex = 30593;

	class FCPHBDPJCLK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x471F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCPHBDPJCLK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPHBDPJCLK___C_CTOR_OFFSET))(this);
		}

		::FCPHBDPJCLK* __cctor_b__23_0()
		{
			return ((::FCPHBDPJCLK*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPHBDPJCLK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
