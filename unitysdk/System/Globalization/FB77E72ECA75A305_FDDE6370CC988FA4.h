#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/F03196E727097981.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_GLOBALIZATION_FB77E72ECA75A305_FDDE6370CC988FA4__CTOR_OFFSET UNITYSDK_OFFSET(0x3BF27F0)

namespace System::Globalization
{
	inline static constexpr unsigned int FB77E72ECA75A305_FDDE6370CC988FA4_TypeDefinitionIndex = 11235;

	class FB77E72ECA75A305_FDDE6370CC988FA4 : public ::System::Object
	{
	public:
		::System::String* B2C7221F53EACA5D; // 0x10
		::System::F03196E727097981 F66119E66C35ABE9; // 0x18
		::System::Int32 A48DF15CB8474C0E; // 0x1C

		::System::Void _ctor(::System::String* B2C7221F53EACA5D, ::System::F03196E727097981 F66119E66C35ABE9, ::System::Int32 A48DF15CB8474C0E)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::F03196E727097981, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FB77E72ECA75A305_FDDE6370CC988FA4__CTOR_OFFSET))(this, B2C7221F53EACA5D, F66119E66C35ABE9, A48DF15CB8474C0E);
		}
	};
}
