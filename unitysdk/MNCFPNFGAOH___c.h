#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNCFPNFGAOH;
namespace System { class Object; }

#define MNCFPNFGAOH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA91FB0)
#define MNCFPNFGAOH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA91FF0)
#define MNCFPNFGAOH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA92000)

	class MNCFPNFGAOH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59850);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNCFPNFGAOH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCFPNFGAOH___C_CTOR_OFFSET))(this);
		}

		::MNCFPNFGAOH* __cctor_b__23_0()
		{
			return ((::MNCFPNFGAOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCFPNFGAOH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
