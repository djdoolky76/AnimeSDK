#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class POFOGBPDEHB;
namespace System { class Object; }

#define POFOGBPDEHB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFCABB0)
#define POFOGBPDEHB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFCABF0)
#define POFOGBPDEHB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DFCAC00)

	class POFOGBPDEHB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x434D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POFOGBPDEHB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POFOGBPDEHB___C_CTOR_OFFSET))(this);
		}

		::POFOGBPDEHB* __cctor_b__28_0()
		{
			return ((::POFOGBPDEHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + POFOGBPDEHB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
