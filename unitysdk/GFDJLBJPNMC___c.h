#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFDJLBJPNMC;
namespace System { class Object; }

#define GFDJLBJPNMC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E466D30)
#define GFDJLBJPNMC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E466D70)
#define GFDJLBJPNMC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E466D80)

	class GFDJLBJPNMC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13790);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFDJLBJPNMC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDJLBJPNMC___C_CTOR_OFFSET))(this);
		}

		::GFDJLBJPNMC* __cctor_b__23_0()
		{
			return ((::GFDJLBJPNMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDJLBJPNMC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
