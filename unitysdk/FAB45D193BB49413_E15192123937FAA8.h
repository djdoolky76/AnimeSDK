#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define FAB45D193BB49413_E15192123937FAA8_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define FAB45D193BB49413_E15192123937FAA8__CTOR_OFFSET UNITYSDK_OFFSET(0x29BE330)

inline static constexpr unsigned int FAB45D193BB49413_E15192123937FAA8_TypeDefinitionIndex = 10717;

class FAB45D193BB49413_E15192123937FAA8 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FAB45D193BB49413_E15192123937FAA8__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::IntPtr B26E941DDF04371F)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + FAB45D193BB49413_E15192123937FAA8_INVOKE_OFFSET))(this, B26E941DDF04371F);
	}
};
