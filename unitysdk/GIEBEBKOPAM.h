#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define GIEBEBKOPAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C421500)
#define GIEBEBKOPAM_GET_PARAMETERNAME_OFFSET UNITYSDK_OFFSET(0x1C421510)

	class GIEBEBKOPAM : public ::System::Attribute
	{
	public:
		::System::String* _ParameterName_k__BackingField; // 0x10
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GIEBEBKOPAM_CTOR_OFFSET))(this, a1);
		}

		::System::String* get_ParameterName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIEBEBKOPAM_GET_PARAMETERNAME_OFFSET))(this);
		}

	};
