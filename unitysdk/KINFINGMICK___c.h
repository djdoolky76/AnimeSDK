#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KINFINGMICK;
namespace System { class Object; }

#define KINFINGMICK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E864590)
#define KINFINGMICK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8645D0)
#define KINFINGMICK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E8645E0)

	class KINFINGMICK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B790);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KINFINGMICK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KINFINGMICK___C_CTOR_OFFSET))(this);
		}

		::KINFINGMICK* __cctor_b__28_0()
		{
			return ((::KINFINGMICK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KINFINGMICK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
