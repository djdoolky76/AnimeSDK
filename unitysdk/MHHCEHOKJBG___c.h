#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHHCEHOKJBG;
namespace System { class Object; }

#define MHHCEHOKJBG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA32320)
#define MHHCEHOKJBG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA32360)
#define MHHCEHOKJBG___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EA32370)

	class MHHCEHOKJBG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51A90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHHCEHOKJBG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHCEHOKJBG___C_CTOR_OFFSET))(this);
		}

		::MHHCEHOKJBG* __cctor_b__38_0()
		{
			return ((::MHHCEHOKJBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHCEHOKJBG___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
