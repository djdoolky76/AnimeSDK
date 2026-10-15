#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IEFFGOMNLNA;
namespace System { class Object; }

#define IEFFGOMNLNA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6387F0)
#define IEFFGOMNLNA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E638830)
#define IEFFGOMNLNA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E638840)

	class IEFFGOMNLNA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x481C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEFFGOMNLNA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEFFGOMNLNA___C_CTOR_OFFSET))(this);
		}

		::IEFFGOMNLNA* __cctor_b__23_0()
		{
			return ((::IEFFGOMNLNA*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEFFGOMNLNA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
