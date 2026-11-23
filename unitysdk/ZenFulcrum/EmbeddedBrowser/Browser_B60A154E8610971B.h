#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EC5A64A1B2C9997F;
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }
template <typename T> class B9AD838F58A93F2A;

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_B60A154E8610971B_A658D5002FE3728A_OFFSET UNITYSDK_OFFSET(0x43FE360)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_B60A154E8610971B__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_B60A154E8610971B_TypeDefinitionIndex = 19382;

	class Browser_B60A154E8610971B : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* A544919C800E2923; // 0x10
		::System::Int32 F5AEFA05C9F71B82; // 0x18
		::System::Byte _padding0[0x4];
		::B9AD838F58A93F2A<::EC5A64A1B2C9997F*>* B3B69FB6A8FBF946; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_B60A154E8610971B__CTOR_OFFSET))(this);
		}

		::System::Void A658D5002FE3728A(::EC5A64A1B2C9997F* E6A305882BEE348D, ::System::Boolean F6FD017FE6192BB1)
		{
			return ((::System::Void(*)(::PVOID, ::EC5A64A1B2C9997F*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_B60A154E8610971B_A658D5002FE3728A_OFFSET))(this, E6A305882BEE348D, F6FD017FE6192BB1);
		}
	};
}
