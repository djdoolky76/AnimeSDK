#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJIKKAKAIHK;
namespace System { class Object; }

#define PJIKKAKAIHK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF7B240)
#define PJIKKAKAIHK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF7B280)
#define PJIKKAKAIHK___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1DF7B290)

	class PJIKKAKAIHK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46770);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJIKKAKAIHK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJIKKAKAIHK___C_CTOR_OFFSET))(this);
		}

		::PJIKKAKAIHK* __cctor_b__48_0()
		{
			return ((::PJIKKAKAIHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJIKKAKAIHK___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
