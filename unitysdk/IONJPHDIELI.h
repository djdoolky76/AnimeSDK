#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define IONJPHDIELI_FHDJDIIPGGP_OFFSET UNITYSDK_OFFSET(0x1943F120)
#define IONJPHDIELI__CTOR_OFFSET UNITYSDK_OFFSET(0x1943F190)

inline static constexpr unsigned int IONJPHDIELI_TypeDefinitionIndex = 49205;

class IONJPHDIELI : public ::System::Object
{
public:
	::System::String* MGEDBKBHJPM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IONJPHDIELI__CTOR_OFFSET))(this);
	}

	::System::String* FHDJDIIPGGP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IONJPHDIELI_FHDJDIIPGGP_OFFSET))(this);
	}
};
