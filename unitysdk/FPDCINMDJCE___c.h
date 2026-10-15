#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPDCINMDJCE;
namespace System { class Object; }

#define FPDCINMDJCE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E407310)
#define FPDCINMDJCE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E407350)
#define FPDCINMDJCE___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1E407360)

	class FPDCINMDJCE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66780);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPDCINMDJCE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPDCINMDJCE___C_CTOR_OFFSET))(this);
		}

		::FPDCINMDJCE* __cctor_b__58_0()
		{
			return ((::FPDCINMDJCE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPDCINMDJCE___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
