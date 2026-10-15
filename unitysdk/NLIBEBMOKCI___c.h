#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLIBEBMOKCI;
namespace System { class Object; }

#define NLIBEBMOKCI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB64A40)
#define NLIBEBMOKCI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB64A80)
#define NLIBEBMOKCI___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EB64A90)

	class NLIBEBMOKCI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x697C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLIBEBMOKCI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLIBEBMOKCI___C_CTOR_OFFSET))(this);
		}

		::NLIBEBMOKCI* __cctor_b__38_0()
		{
			return ((::NLIBEBMOKCI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLIBEBMOKCI___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
