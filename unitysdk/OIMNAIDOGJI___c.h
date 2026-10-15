#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OIMNAIDOGJI;
namespace System { class Object; }

#define OIMNAIDOGJI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE75970)
#define OIMNAIDOGJI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE759B0)
#define OIMNAIDOGJI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DE759C0)

	class OIMNAIDOGJI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E0C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIMNAIDOGJI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMNAIDOGJI___C_CTOR_OFFSET))(this);
		}

		::OIMNAIDOGJI* __cctor_b__28_0()
		{
			return ((::OIMNAIDOGJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMNAIDOGJI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
