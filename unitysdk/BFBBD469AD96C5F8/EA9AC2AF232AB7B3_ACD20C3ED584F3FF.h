#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define BFBBD469AD96C5F8_EA9AC2AF232AB7B3_ACD20C3ED584F3FF_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define BFBBD469AD96C5F8_EA9AC2AF232AB7B3_ACD20C3ED584F3FF__CTOR_OFFSET UNITYSDK_OFFSET(0x29BE330)

namespace BFBBD469AD96C5F8
{
	inline static constexpr unsigned int EA9AC2AF232AB7B3_ACD20C3ED584F3FF_TypeDefinitionIndex = 19232;

	class EA9AC2AF232AB7B3_ACD20C3ED584F3FF : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BFBBD469AD96C5F8_EA9AC2AF232AB7B3_ACD20C3ED584F3FF__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::IntPtr EAC10461772517B1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + BFBBD469AD96C5F8_EA9AC2AF232AB7B3_ACD20C3ED584F3FF_INVOKE_OFFSET))(this, EAC10461772517B1);
		}
	};
}
