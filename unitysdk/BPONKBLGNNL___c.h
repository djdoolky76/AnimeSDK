#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPONKBLGNNL;
namespace System { class Object; }

#define BPONKBLGNNL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E051E30)
#define BPONKBLGNNL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E051E70)
#define BPONKBLGNNL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E051E80)

	class BPONKBLGNNL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55C20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPONKBLGNNL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPONKBLGNNL___C_CTOR_OFFSET))(this);
		}

		::BPONKBLGNNL* __cctor_b__28_0()
		{
			return ((::BPONKBLGNNL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPONKBLGNNL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
