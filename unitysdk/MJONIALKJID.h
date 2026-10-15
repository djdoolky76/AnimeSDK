#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define MJONIALKJID_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1B6550)

	class MJONIALKJID : public ::System::Attribute
	{
	public:
		::System::String* JIDLKIHJLFL; // 0x10
		::System::String* MIFJNPKACOB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJONIALKJID_CTOR_OFFSET))(this);
		}

	};
