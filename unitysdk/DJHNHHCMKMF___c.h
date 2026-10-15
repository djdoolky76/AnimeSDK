#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJHNHHCMKMF;
namespace System { class Object; }

#define DJHNHHCMKMF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1C9B60)
#define DJHNHHCMKMF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C9BA0)
#define DJHNHHCMKMF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1C9BB0)

	class DJHNHHCMKMF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37EB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJHNHHCMKMF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJHNHHCMKMF___C_CTOR_OFFSET))(this);
		}

		::DJHNHHCMKMF* __cctor_b__28_0()
		{
			return ((::DJHNHHCMKMF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJHNHHCMKMF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
