#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OIJOHMLIEII;
namespace System { class Object; }

#define OIJOHMLIEII___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE72410)
#define OIJOHMLIEII___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE72440)
#define OIJOHMLIEII___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DE72450)

	class OIJOHMLIEII___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D250);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIJOHMLIEII___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJOHMLIEII___C_CTOR_OFFSET))(this);
		}

		::OIJOHMLIEII* __cctor_b__28_0()
		{
			return ((::OIJOHMLIEII*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJOHMLIEII___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
