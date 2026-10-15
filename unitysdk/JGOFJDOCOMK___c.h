#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGOFJDOCOMK;
namespace System { class Object; }

#define JGOFJDOCOMK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E73F130)
#define JGOFJDOCOMK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E73F170)
#define JGOFJDOCOMK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E73F180)

	class JGOFJDOCOMK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60E20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGOFJDOCOMK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGOFJDOCOMK___C_CTOR_OFFSET))(this);
		}

		::JGOFJDOCOMK* __cctor_b__23_0()
		{
			return ((::JGOFJDOCOMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGOFJDOCOMK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
