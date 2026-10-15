#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPCNFDBKAEE;
namespace System { class Object; }

#define EPCNFDBKAEE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E307700)
#define EPCNFDBKAEE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E307740)
#define EPCNFDBKAEE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E307750)

	class EPCNFDBKAEE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55950);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPCNFDBKAEE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCNFDBKAEE___C_CTOR_OFFSET))(this);
		}

		::EPCNFDBKAEE* __cctor_b__23_0()
		{
			return ((::EPCNFDBKAEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCNFDBKAEE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
