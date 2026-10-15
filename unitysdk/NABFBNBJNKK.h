#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define NABFBNBJNKK_CTOR_OFFSET UNITYSDK_OFFSET(0xBA52CC0)
#define NABFBNBJNKK_GET_CANFOCUS_OFFSET UNITYSDK_OFFSET(0xBA52CB0)
#define NABFBNBJNKK_GET_LABEL_OFFSET UNITYSDK_OFFSET(0xBA52CA0)

	class NABFBNBJNKK : public ::System::Object
	{
	public:
		::System::String* _Label_k__BackingField; // 0x10
		::System::Boolean _CanFocus_k__BackingField; // 0x18
		::System::Void _ctor(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + NABFBNBJNKK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* get_Label()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NABFBNBJNKK_GET_LABEL_OFFSET))(this);
		}

		::System::Boolean get_CanFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NABFBNBJNKK_GET_CANFOCUS_OFFSET))(this);
		}

	};
