#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EC5A64A1B2C9997F;
namespace System { class String; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }
template <typename T> class B9AD838F58A93F2A;

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_B1E7FF4247954F9D_BF36BC2A054AE1CF_OFFSET UNITYSDK_OFFSET(0x43FE320)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_B1E7FF4247954F9D_FB4BA5E6FAEB2ECE_OFFSET UNITYSDK_OFFSET(0x43FE1B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_B1E7FF4247954F9D__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_B1E7FF4247954F9D_TypeDefinitionIndex = 19381;

	class Browser_B1E7FF4247954F9D : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* A544919C800E2923; // 0x10
		::System::Int32 F5AEFA05C9F71B82; // 0x18
		::System::Byte _padding0[0x4];
		::B9AD838F58A93F2A<::EC5A64A1B2C9997F*>* B3B69FB6A8FBF946; // 0x20
		::System::String* F8821E4710639440; // 0x28
		::System::String* AECB6FB250F26E28; // 0x30
		::System::Boolean A6B5840567522F01; // 0x38
		::System::Byte _padding1[0x3];
		::System::Int32 BCCC5EF00D9F90C5; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_B1E7FF4247954F9D__CTOR_OFFSET))(this);
		}

		::System::Void FB4BA5E6FAEB2ECE(::EC5A64A1B2C9997F* E6A305882BEE348D, ::System::Boolean F6FD017FE6192BB1)
		{
			return ((::System::Void(*)(::PVOID, ::EC5A64A1B2C9997F*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_B1E7FF4247954F9D_FB4BA5E6FAEB2ECE_OFFSET))(this, E6A305882BEE348D, F6FD017FE6192BB1);
		}

		::System::Void BF36BC2A054AE1CF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_B1E7FF4247954F9D_BF36BC2A054AE1CF_OFFSET))(this);
		}
	};
}
