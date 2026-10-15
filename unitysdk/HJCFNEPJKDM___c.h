#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJCFNEPJKDM;
namespace System { class Object; }

#define HJCFNEPJKDM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5A4780)
#define HJCFNEPJKDM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A47C0)
#define HJCFNEPJKDM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E5A47D0)

	class HJCFNEPJKDM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F2E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJCFNEPJKDM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCFNEPJKDM___C_CTOR_OFFSET))(this);
		}

		::HJCFNEPJKDM* __cctor_b__23_0()
		{
			return ((::HJCFNEPJKDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCFNEPJKDM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
