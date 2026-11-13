#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJHNHHCMKMF;
namespace System { class Object; }

#define DJHNHHCMKMF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB30120)
#define DJHNHHCMKMF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB30160)
#define DJHNHHCMKMF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FB30170)

inline static constexpr unsigned int DJHNHHCMKMF___c_TypeDefinitionIndex = 27909;

	class DJHNHHCMKMF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C6A0);
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
