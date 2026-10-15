#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGFGINEFBBK;
namespace System { class Object; }

#define FGFGINEFBBK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E37C030)
#define FGFGINEFBBK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E37C070)
#define FGFGINEFBBK___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E37C080)

	class FGFGINEFBBK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E400);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGFGINEFBBK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFGINEFBBK___C_CTOR_OFFSET))(this);
		}

		::FGFGINEFBBK* __cctor_b__48_0()
		{
			return ((::FGFGINEFBBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFGINEFBBK___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
