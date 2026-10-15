#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJHJCIAPADP;
namespace System { class Object; }

#define JJHJCIAPADP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E75C750)
#define JJHJCIAPADP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E75C790)
#define JJHJCIAPADP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E75C7A0)

	class JJHJCIAPADP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65180);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJHJCIAPADP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJHJCIAPADP___C_CTOR_OFFSET))(this);
		}

		::JJHJCIAPADP* __cctor_b__28_0()
		{
			return ((::JJHJCIAPADP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJHJCIAPADP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
