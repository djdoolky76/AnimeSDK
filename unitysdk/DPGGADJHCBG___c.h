#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPGGADJHCBG;
namespace System { class Object; }

#define DPGGADJHCBG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E20EDD0)
#define DPGGADJHCBG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E20EE10)
#define DPGGADJHCBG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E20EE20)

	class DPGGADJHCBG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45390);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPGGADJHCBG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGGADJHCBG___C_CTOR_OFFSET))(this);
		}

		::DPGGADJHCBG* __cctor_b__23_0()
		{
			return ((::DPGGADJHCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGGADJHCBG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
