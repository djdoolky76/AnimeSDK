#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JILJOLKDALE;
namespace System { class Object; }

#define JILJOLKDALE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7515C0)
#define JILJOLKDALE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7515F0)
#define JILJOLKDALE___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E751600)

	class JILJOLKDALE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64A40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JILJOLKDALE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JILJOLKDALE___C_CTOR_OFFSET))(this);
		}

		::JILJOLKDALE* __cctor_b__53_0()
		{
			return ((::JILJOLKDALE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JILJOLKDALE___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
