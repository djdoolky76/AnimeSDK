#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class EC5A64A1B2C9997F;
namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_B73A1325894D861C_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_B73A1325894D861C__CTOR_OFFSET UNITYSDK_OFFSET(0x3A00A00)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_B73A1325894D861C_TypeDefinitionIndex = 19364;

	class Browser_B73A1325894D861C : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_B73A1325894D861C__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::EC5A64A1B2C9997F* E937D4885DAA1AE8, ::System::Boolean F6FD017FE6192BB1)
		{
			return ((::System::Void(*)(::PVOID, ::EC5A64A1B2C9997F*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_B73A1325894D861C_INVOKE_OFFSET))(this, E937D4885DAA1AE8, F6FD017FE6192BB1);
		}
	};
}
