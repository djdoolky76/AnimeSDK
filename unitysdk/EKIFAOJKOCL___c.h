#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKIFAOJKOCL;
namespace System { class Object; }

#define EKIFAOJKOCL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2C4500)
#define EKIFAOJKOCL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2C4530)
#define EKIFAOJKOCL___C___CCTOR_B__32_0_OFFSET UNITYSDK_OFFSET(0x1E2C4540)

	class EKIFAOJKOCL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D9B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKIFAOJKOCL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKIFAOJKOCL___C_CTOR_OFFSET))(this);
		}

		::EKIFAOJKOCL* __cctor_b__32_0()
		{
			return ((::EKIFAOJKOCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKIFAOJKOCL___C___CCTOR_B__32_0_OFFSET))(this);
		}

	};
