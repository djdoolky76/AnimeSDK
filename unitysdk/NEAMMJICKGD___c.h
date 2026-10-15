#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEAMMJICKGD;
namespace System { class Object; }

#define NEAMMJICKGD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAEF480)
#define NEAMMJICKGD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAEF4C0)
#define NEAMMJICKGD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EAEF4D0)

	class NEAMMJICKGD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DA20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEAMMJICKGD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEAMMJICKGD___C_CTOR_OFFSET))(this);
		}

		::NEAMMJICKGD* __cctor_b__28_0()
		{
			return ((::NEAMMJICKGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEAMMJICKGD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
