#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define GMANGALFFPB_CTOR_OFFSET UNITYSDK_OFFSET(0x15ABE540)

inline static constexpr unsigned int GMANGALFFPB_TypeDefinitionIndex = 71486;

	class GMANGALFFPB : public ::System::Object
	{
	public:
		::System::String* HGLIFJGHADE; // 0x10
		::System::String* LNGDBLEKGHG; // 0x18
		::System::String* NOFHFKNDBAO; // 0x20
		::System::String* JDNCMNDINEF; // 0x28
		::System::String* PHFKFBLIBKG; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMANGALFFPB_CTOR_OFFSET))(this);
		}

	};
