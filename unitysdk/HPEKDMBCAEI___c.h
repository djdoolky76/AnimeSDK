#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPEKDMBCAEI;
namespace System { class Object; }

#define HPEKDMBCAEI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5F4890)
#define HPEKDMBCAEI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F48D0)
#define HPEKDMBCAEI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E5F48E0)

	class HPEKDMBCAEI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50460);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPEKDMBCAEI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPEKDMBCAEI___C_CTOR_OFFSET))(this);
		}

		::HPEKDMBCAEI* __cctor_b__23_0()
		{
			return ((::HPEKDMBCAEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPEKDMBCAEI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
