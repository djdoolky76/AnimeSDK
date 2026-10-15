#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOEBBIDAKJD;
namespace System { class Object; }

#define EOEBBIDAKJD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2F9460)
#define EOEBBIDAKJD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2F94A0)
#define EOEBBIDAKJD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E2F94B0)

	class EOEBBIDAKJD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54AF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOEBBIDAKJD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOEBBIDAKJD___C_CTOR_OFFSET))(this);
		}

		::EOEBBIDAKJD* __cctor_b__28_0()
		{
			return ((::EOEBBIDAKJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOEBBIDAKJD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
