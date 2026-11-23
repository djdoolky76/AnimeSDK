#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_B97FAE9F49EC8025_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7C20)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_B97FAE9F49EC8025__CTOR_OFFSET UNITYSDK_OFFSET(0x2A00700)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_B97FAE9F49EC8025_TypeDefinitionIndex = 19545;

	class BrowserNative_B97FAE9F49EC8025 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_B97FAE9F49EC8025__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Int32 F5AEFA05C9F71B82, ::System::Boolean A2BB3D0632668169, ::System::String* E3FD2832E464ABF9, ::System::String* EFC170A1ECF07DEE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_B97FAE9F49EC8025_INVOKE_OFFSET))(this, F5AEFA05C9F71B82, A2BB3D0632668169, E3FD2832E464ABF9, EFC170A1ECF07DEE);
		}
	};
}
