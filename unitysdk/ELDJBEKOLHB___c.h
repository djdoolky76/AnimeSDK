#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELDJBEKOLHB;
namespace System { class Object; }

#define ELDJBEKOLHB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2CD590)
#define ELDJBEKOLHB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2CD5D0)
#define ELDJBEKOLHB___C___CCTOR_B__108_0_OFFSET UNITYSDK_OFFSET(0x1E2CD5E0)

	class ELDJBEKOLHB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4FFB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELDJBEKOLHB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELDJBEKOLHB___C_CTOR_OFFSET))(this);
		}

		::ELDJBEKOLHB* __cctor_b__108_0()
		{
			return ((::ELDJBEKOLHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELDJBEKOLHB___C___CCTOR_B__108_0_OFFSET))(this);
		}

	};
