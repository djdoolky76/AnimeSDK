#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NFNMMFBJBLC;
namespace System { class Object; }

#define NFNMMFBJBLC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB084F0)
#define NFNMMFBJBLC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB08530)
#define NFNMMFBJBLC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EB08540)

	class NFNMMFBJBLC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5ED80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFNMMFBJBLC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNMMFBJBLC___C_CTOR_OFFSET))(this);
		}

		::NFNMMFBJBLC* __cctor_b__28_0()
		{
			return ((::NFNMMFBJBLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNMMFBJBLC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
