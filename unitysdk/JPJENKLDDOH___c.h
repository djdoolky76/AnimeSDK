#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPJENKLDDOH;
namespace System { class Object; }

#define JPJENKLDDOH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7D70D0)
#define JPJENKLDDOH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D7110)
#define JPJENKLDDOH___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E7D7120)

	class JPJENKLDDOH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xBFB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPJENKLDDOH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJENKLDDOH___C_CTOR_OFFSET))(this);
		}

		::JPJENKLDDOH* __cctor_b__48_0()
		{
			return ((::JPJENKLDDOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJENKLDDOH___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
