#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PDHBDPNPMPI;
namespace System { class Object; }

#define PDHBDPNPMPI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF0F6F0)
#define PDHBDPNPMPI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF0F730)
#define PDHBDPNPMPI___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DF0F740)

inline static constexpr unsigned int PDHBDPNPMPI___c_TypeDefinitionIndex = 34024;

	class PDHBDPNPMPI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36D70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDHBDPNPMPI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDHBDPNPMPI___C_CTOR_OFFSET))(this);
		}

		::PDHBDPNPMPI* __cctor_b__18_0()
		{
			return ((::PDHBDPNPMPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDHBDPNPMPI___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
