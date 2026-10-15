#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace R3 { class Observable; }
namespace System { class String; }

#define HIDDJGKBEBC_CTOR_OFFSET UNITYSDK_OFFSET(0x15CE0DB0)
#define HIDDJGKBEBC_GET_DESC_OFFSET UNITYSDK_OFFSET(0x15CE0DA0)
#define HIDDJGKBEBC_GET_ICON_OFFSET UNITYSDK_OFFSET(0x15CE0D90)

	class HIDDJGKBEBC : public ::System::Object
	{
	public:
		::R3::Observable* _Icon_k__BackingField; // 0x10
		::R3::Observable* _Desc_k__BackingField; // 0x18
		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HIDDJGKBEBC_CTOR_OFFSET))(this, a1, a2);
		}

		::R3::Observable* get_Icon()
		{
			return ((::R3::Observable*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDDJGKBEBC_GET_ICON_OFFSET))(this);
		}

		::R3::Observable* get_Desc()
		{
			return ((::R3::Observable*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDDJGKBEBC_GET_DESC_OFFSET))(this);
		}

	};
