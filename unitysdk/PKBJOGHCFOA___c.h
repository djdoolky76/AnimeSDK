#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PKBJOGHCFOA;
namespace System { class Object; }

#define PKBJOGHCFOA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF86DF0)
#define PKBJOGHCFOA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF86E30)
#define PKBJOGHCFOA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DF86E40)

	class PKBJOGHCFOA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x483F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKBJOGHCFOA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBJOGHCFOA___C_CTOR_OFFSET))(this);
		}

		::PKBJOGHCFOA* __cctor_b__33_0()
		{
			return ((::PKBJOGHCFOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBJOGHCFOA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
