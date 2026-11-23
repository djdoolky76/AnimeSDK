#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_E758FCEA47C8F0F3_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_E758FCEA47C8F0F3__CTOR_OFFSET UNITYSDK_OFFSET(0x2936D40)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int DialogHandler_E758FCEA47C8F0F3_TypeDefinitionIndex = 19409;

	class DialogHandler_E758FCEA47C8F0F3 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_E758FCEA47C8F0F3__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Boolean FF57B1197A305C49, ::System::String* E3FD2832E464ABF9, ::System::String* EFC170A1ECF07DEE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_E758FCEA47C8F0F3_INVOKE_OFFSET))(this, FF57B1197A305C49, E3FD2832E464ABF9, EFC170A1ECF07DEE);
		}
	};
}
