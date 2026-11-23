#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_BB9EF4E83D590FEC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_BB9EF4E83D590FEC__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF6400)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int DialogHandler_BB9EF4E83D590FEC_TypeDefinitionIndex = 19410;

	class DialogHandler_BB9EF4E83D590FEC : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_BB9EF4E83D590FEC__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Int32 BD666547EBD6738C)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DIALOGHANDLER_BB9EF4E83D590FEC_INVOKE_OFFSET))(this, BD666547EBD6738C);
		}
	};
}
