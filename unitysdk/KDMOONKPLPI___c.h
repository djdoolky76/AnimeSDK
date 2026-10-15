#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDMOONKPLPI;
namespace System { class Object; }

#define KDMOONKPLPI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E805CA0)
#define KDMOONKPLPI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E805CE0)
#define KDMOONKPLPI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E805CF0)

	class KDMOONKPLPI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDMOONKPLPI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMOONKPLPI___C_CTOR_OFFSET))(this);
		}

		::KDMOONKPLPI* __cctor_b__28_0()
		{
			return ((::KDMOONKPLPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMOONKPLPI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
