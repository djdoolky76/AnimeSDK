#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELOFLNEAHPD;
namespace System { class Object; }

#define ELOFLNEAHPD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2D89C0)
#define ELOFLNEAHPD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2D8A00)
#define ELOFLNEAHPD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E2D8A10)

	class ELOFLNEAHPD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51BB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELOFLNEAHPD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOFLNEAHPD___C_CTOR_OFFSET))(this);
		}

		::ELOFLNEAHPD* __cctor_b__28_0()
		{
			return ((::ELOFLNEAHPD*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOFLNEAHPD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
