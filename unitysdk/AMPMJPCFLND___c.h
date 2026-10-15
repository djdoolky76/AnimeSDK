#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMPMJPCFLND;
namespace System { class Object; }

#define AMPMJPCFLND___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E527B60)
#define AMPMJPCFLND___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E527BA0)
#define AMPMJPCFLND___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E527BB0)

	class AMPMJPCFLND___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMPMJPCFLND___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMPMJPCFLND___C_CTOR_OFFSET))(this);
		}

		::AMPMJPCFLND* __cctor_b__28_0()
		{
			return ((::AMPMJPCFLND*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMPMJPCFLND___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
