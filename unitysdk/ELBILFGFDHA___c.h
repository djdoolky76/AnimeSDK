#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELBILFGFDHA;
namespace System { class Object; }

#define ELBILFGFDHA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2C8E10)
#define ELBILFGFDHA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2C8E50)
#define ELBILFGFDHA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E2C8E60)

	class ELBILFGFDHA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E1A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELBILFGFDHA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBILFGFDHA___C_CTOR_OFFSET))(this);
		}

		::ELBILFGFDHA* __cctor_b__33_0()
		{
			return ((::ELBILFGFDHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBILFGFDHA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
