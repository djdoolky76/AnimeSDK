#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OPLFDAGPBEI;
namespace System { class Object; }

#define OPLFDAGPBEI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEE5DC0)
#define OPLFDAGPBEI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEE5E00)
#define OPLFDAGPBEI___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DEE5E10)

	class OPLFDAGPBEI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30AE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPLFDAGPBEI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPLFDAGPBEI___C_CTOR_OFFSET))(this);
		}

		::OPLFDAGPBEI* __cctor_b__38_0()
		{
			return ((::OPLFDAGPBEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPLFDAGPBEI___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
