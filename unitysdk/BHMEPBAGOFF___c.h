#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHMEPBAGOFF;
namespace System { class Object; }

#define BHMEPBAGOFF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDFB580)
#define BHMEPBAGOFF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDFB5C0)
#define BHMEPBAGOFF___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1DDFB5D0)

	class BHMEPBAGOFF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46C90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHMEPBAGOFF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMEPBAGOFF___C_CTOR_OFFSET))(this);
		}

		::BHMEPBAGOFF* __cctor_b__53_0()
		{
			return ((::BHMEPBAGOFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMEPBAGOFF___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
