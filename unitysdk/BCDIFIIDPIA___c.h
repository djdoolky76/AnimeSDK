#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCDIFIIDPIA;
namespace System { class Object; }

#define BCDIFIIDPIA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E907440)
#define BCDIFIIDPIA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E907480)
#define BCDIFIIDPIA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E907490)

	class BCDIFIIDPIA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3B730);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCDIFIIDPIA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCDIFIIDPIA___C_CTOR_OFFSET))(this);
		}

		::BCDIFIIDPIA* __cctor_b__23_0()
		{
			return ((::BCDIFIIDPIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCDIFIIDPIA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
