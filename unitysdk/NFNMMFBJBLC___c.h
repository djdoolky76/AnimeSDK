#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NFNMMFBJBLC;
namespace System { class Object; }

#define NFNMMFBJBLC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EADAE60)
#define NFNMMFBJBLC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EADAEA0)
#define NFNMMFBJBLC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EADAEB0)

inline static constexpr unsigned int NFNMMFBJBLC___c_TypeDefinitionIndex = 33096;

	class NFNMMFBJBLC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x63600);
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
