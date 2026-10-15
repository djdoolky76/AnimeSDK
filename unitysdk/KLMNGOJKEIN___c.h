#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLMNGOJKEIN;
namespace System { class Object; }

#define KLMNGOJKEIN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E892570)
#define KLMNGOJKEIN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8925B0)
#define KLMNGOJKEIN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E8925C0)

	class KLMNGOJKEIN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x218E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLMNGOJKEIN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMNGOJKEIN___C_CTOR_OFFSET))(this);
		}

		::KLMNGOJKEIN* __cctor_b__28_0()
		{
			return ((::KLMNGOJKEIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMNGOJKEIN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
