#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HHNAMDCALND;
namespace System { class Object; }

#define HHNAMDCALND___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E58C5F0)
#define HHNAMDCALND___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E58C630)
#define HHNAMDCALND___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E58C640)

	class HHNAMDCALND___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3B0E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHNAMDCALND___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNAMDCALND___C_CTOR_OFFSET))(this);
		}

		::HHNAMDCALND* __cctor_b__43_0()
		{
			return ((::HHNAMDCALND*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNAMDCALND___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
