#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICMGDJBDFEA;
namespace System { class Object; }

#define ICMGDJBDFEA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6258A0)
#define ICMGDJBDFEA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6258E0)
#define ICMGDJBDFEA___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E6258F0)

	class ICMGDJBDFEA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x450A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICMGDJBDFEA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICMGDJBDFEA___C_CTOR_OFFSET))(this);
		}

		::ICMGDJBDFEA* __cctor_b__43_0()
		{
			return ((::ICMGDJBDFEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICMGDJBDFEA___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
