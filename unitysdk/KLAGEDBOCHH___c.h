#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLAGEDBOCHH;
namespace System { class Object; }

#define KLAGEDBOCHH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E882A80)
#define KLAGEDBOCHH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E882AC0)
#define KLAGEDBOCHH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E882AD0)

	class KLAGEDBOCHH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1FAA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLAGEDBOCHH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAGEDBOCHH___C_CTOR_OFFSET))(this);
		}

		::KLAGEDBOCHH* __cctor_b__28_0()
		{
			return ((::KLAGEDBOCHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAGEDBOCHH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
