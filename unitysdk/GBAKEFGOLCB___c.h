#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBAKEFGOLCB;
namespace System { class Object; }

#define GBAKEFGOLCB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4274D0)
#define GBAKEFGOLCB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E427510)
#define GBAKEFGOLCB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E427520)

	class GBAKEFGOLCB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xCAA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBAKEFGOLCB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBAKEFGOLCB___C_CTOR_OFFSET))(this);
		}

		::GBAKEFGOLCB* __cctor_b__28_0()
		{
			return ((::GBAKEFGOLCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBAKEFGOLCB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
