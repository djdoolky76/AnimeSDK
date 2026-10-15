#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CMKLCKLAEPI;
namespace System { class Object; }

#define CMKLCKLAEPI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E103C90)
#define CMKLCKLAEPI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E103CD0)
#define CMKLCKLAEPI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E103CE0)

	class CMKLCKLAEPI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E810);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMKLCKLAEPI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMKLCKLAEPI___C_CTOR_OFFSET))(this);
		}

		::CMKLCKLAEPI* __cctor_b__28_0()
		{
			return ((::CMKLCKLAEPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMKLCKLAEPI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
