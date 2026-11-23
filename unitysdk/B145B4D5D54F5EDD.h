#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/F2340254D32A7AE7.h"

namespace System { class String; }

#define B145B4D5D54F5EDD__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B145B4D5D54F5EDD_TypeDefinitionIndex = 874;

class B145B4D5D54F5EDD : public ::E379DE61A548837D
{
public:
	::System::String* A4B22767FFD7678A; // 0x38
	::F2340254D32A7AE7 F3A3B58B3B0C63A8; // 0x40
	::F2340254D32A7AE7 FC063592A0EB498A; // 0x44
	::System::Int32 FF49DAB3CDC0F786; // 0x48
	::System::Boolean A26CB23425B2EC74; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B145B4D5D54F5EDD__CTOR_OFFSET))(this);
	}
};
