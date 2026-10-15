#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHABPBGINDK;
namespace System { class Object; }

#define FHABPBGINDK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3859F0)
#define FHABPBGINDK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E385A30)
#define FHABPBGINDK___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E385A40)

	class FHABPBGINDK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EEE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHABPBGINDK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHABPBGINDK___C_CTOR_OFFSET))(this);
		}

		::FHABPBGINDK* __cctor_b__38_0()
		{
			return ((::FHABPBGINDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHABPBGINDK___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
