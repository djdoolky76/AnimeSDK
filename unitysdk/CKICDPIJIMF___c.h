#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKICDPIJIMF;
namespace System { class Object; }

#define CKICDPIJIMF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0EAF00)
#define CKICDPIJIMF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0EAF40)
#define CKICDPIJIMF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E0EAF50)

	class CKICDPIJIMF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B2C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKICDPIJIMF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKICDPIJIMF___C_CTOR_OFFSET))(this);
		}

		::CKICDPIJIMF* __cctor_b__23_0()
		{
			return ((::CKICDPIJIMF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKICDPIJIMF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
