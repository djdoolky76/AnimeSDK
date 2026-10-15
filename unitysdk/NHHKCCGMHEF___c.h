#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHHKCCGMHEF;
namespace System { class Object; }

#define NHHKCCGMHEF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB1DF00)
#define NHHKCCGMHEF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB1DF40)
#define NHHKCCGMHEF___C___CCTOR_B__52_0_OFFSET UNITYSDK_OFFSET(0x1EB1DF50)

	class NHHKCCGMHEF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60490);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHHKCCGMHEF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHHKCCGMHEF___C_CTOR_OFFSET))(this);
		}

		::NHHKCCGMHEF* __cctor_b__52_0()
		{
			return ((::NHHKCCGMHEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHHKCCGMHEF___C___CCTOR_B__52_0_OFFSET))(this);
		}

	};
