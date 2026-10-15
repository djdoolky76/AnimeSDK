#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JNEBIKHBHOB;
namespace System { class Object; }

#define JNEBIKHBHOB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7956D0)
#define JNEBIKHBHOB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E795710)
#define JNEBIKHBHOB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E795720)

	class JNEBIKHBHOB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6C700);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNEBIKHBHOB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEBIKHBHOB___C_CTOR_OFFSET))(this);
		}

		::JNEBIKHBHOB* __cctor_b__23_0()
		{
			return ((::JNEBIKHBHOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEBIKHBHOB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
