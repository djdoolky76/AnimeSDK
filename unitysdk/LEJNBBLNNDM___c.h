#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LEJNBBLNNDM;
namespace System { class Object; }

#define LEJNBBLNNDM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E935920)
#define LEJNBBLNNDM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E935960)
#define LEJNBBLNNDM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E935970)

	class LEJNBBLNNDM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x39470);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEJNBBLNNDM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJNBBLNNDM___C_CTOR_OFFSET))(this);
		}

		::LEJNBBLNNDM* __cctor_b__28_0()
		{
			return ((::LEJNBBLNNDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJNBBLNNDM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
