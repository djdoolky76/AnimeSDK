#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELLHFEAIKFG;
namespace System { class Object; }

#define ELLHFEAIKFG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2D6320)
#define ELLHFEAIKFG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2D6350)
#define ELLHFEAIKFG___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E2D6360)

	class ELLHFEAIKFG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x516A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELLHFEAIKFG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELLHFEAIKFG___C_CTOR_OFFSET))(this);
		}

		::ELLHFEAIKFG* __cctor_b__38_0()
		{
			return ((::ELLHFEAIKFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELLHFEAIKFG___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
