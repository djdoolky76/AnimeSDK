#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDJDKPMKDJD;
namespace System { class Object; }

#define NDJDKPMKDJD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAE84A0)
#define NDJDKPMKDJD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAE84E0)
#define NDJDKPMKDJD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EAE84F0)

	class NDJDKPMKDJD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D620);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDJDKPMKDJD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDJDKPMKDJD___C_CTOR_OFFSET))(this);
		}

		::NDJDKPMKDJD* __cctor_b__33_0()
		{
			return ((::NDJDKPMKDJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDJDKPMKDJD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
