#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OPLFJCHFNCG;
namespace System { class Object; }

#define OPLFJCHFNCG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEE6930)
#define OPLFJCHFNCG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEE6970)
#define OPLFJCHFNCG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DEE6980)

	class OPLFJCHFNCG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30CA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPLFJCHFNCG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPLFJCHFNCG___C_CTOR_OFFSET))(this);
		}

		::OPLFJCHFNCG* __cctor_b__23_0()
		{
			return ((::OPLFJCHFNCG*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPLFJCHFNCG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
