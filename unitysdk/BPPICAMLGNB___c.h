#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPPICAMLGNB;
namespace System { class Object; }

#define BPPICAMLGNB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0529E0)
#define BPPICAMLGNB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E052A20)
#define BPPICAMLGNB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E052A30)

	class BPPICAMLGNB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55C90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPPICAMLGNB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPPICAMLGNB___C_CTOR_OFFSET))(this);
		}

		::BPPICAMLGNB* __cctor_b__28_0()
		{
			return ((::BPPICAMLGNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPPICAMLGNB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
