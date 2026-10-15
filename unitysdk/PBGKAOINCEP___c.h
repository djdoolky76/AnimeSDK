#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PBGKAOINCEP;
namespace System { class Object; }

#define PBGKAOINCEP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEF5CF0)
#define PBGKAOINCEP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEF5D30)
#define PBGKAOINCEP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DEF5D40)

	class PBGKAOINCEP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33470);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBGKAOINCEP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBGKAOINCEP___C_CTOR_OFFSET))(this);
		}

		::PBGKAOINCEP* __cctor_b__28_0()
		{
			return ((::PBGKAOINCEP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBGKAOINCEP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
