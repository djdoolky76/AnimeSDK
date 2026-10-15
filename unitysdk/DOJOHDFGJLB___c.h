#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DOJOHDFGJLB;
namespace System { class Object; }

#define DOJOHDFGJLB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2046C0)
#define DOJOHDFGJLB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E204700)
#define DOJOHDFGJLB___C___CCTOR_B__52_0_OFFSET UNITYSDK_OFFSET(0x1E204710)

	class DOJOHDFGJLB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x421D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOJOHDFGJLB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOJOHDFGJLB___C_CTOR_OFFSET))(this);
		}

		::DOJOHDFGJLB* __cctor_b__52_0()
		{
			return ((::DOJOHDFGJLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOJOHDFGJLB___C___CCTOR_B__52_0_OFFSET))(this);
		}

	};
