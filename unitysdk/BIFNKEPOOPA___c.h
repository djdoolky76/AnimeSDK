#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BIFNKEPOOPA;
namespace System { class Object; }

#define BIFNKEPOOPA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE01A00)
#define BIFNKEPOOPA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE01A40)
#define BIFNKEPOOPA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DE01A50)

	class BIFNKEPOOPA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48270);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIFNKEPOOPA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIFNKEPOOPA___C_CTOR_OFFSET))(this);
		}

		::BIFNKEPOOPA* __cctor_b__33_0()
		{
			return ((::BIFNKEPOOPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIFNKEPOOPA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
