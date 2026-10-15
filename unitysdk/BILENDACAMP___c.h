#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BILENDACAMP;
namespace System { class Object; }

#define BILENDACAMP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE051A0)
#define BILENDACAMP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE051D0)
#define BILENDACAMP___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DE051E0)

	class BILENDACAMP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48900);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BILENDACAMP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILENDACAMP___C_CTOR_OFFSET))(this);
		}

		::BILENDACAMP* __cctor_b__18_0()
		{
			return ((::BILENDACAMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + BILENDACAMP___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
