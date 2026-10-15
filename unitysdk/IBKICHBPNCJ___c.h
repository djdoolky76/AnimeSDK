#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBKICHBPNCJ;
namespace System { class Object; }

#define IBKICHBPNCJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E61ABF0)
#define IBKICHBPNCJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E61AC30)
#define IBKICHBPNCJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E61AC40)

	class IBKICHBPNCJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x421C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBKICHBPNCJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBKICHBPNCJ___C_CTOR_OFFSET))(this);
		}

		::IBKICHBPNCJ* __cctor_b__33_0()
		{
			return ((::IBKICHBPNCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBKICHBPNCJ___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
