#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIIKHMMDHKP;
namespace System { class Object; }

#define KIIKHMMDHKP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E85B780)
#define KIIKHMMDHKP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E85B7C0)
#define KIIKHMMDHKP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E85B7D0)

	class KIIKHMMDHKP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A2F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIIKHMMDHKP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIIKHMMDHKP___C_CTOR_OFFSET))(this);
		}

		::KIIKHMMDHKP* __cctor_b__23_0()
		{
			return ((::KIIKHMMDHKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIIKHMMDHKP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
