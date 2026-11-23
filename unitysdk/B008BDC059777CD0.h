#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define B008BDC059777CD0__CTOR_OFFSET UNITYSDK_OFFSET(0x197ADD0)

inline static constexpr unsigned int B008BDC059777CD0_TypeDefinitionIndex = 1632;

class B008BDC059777CD0 : public ::E379DE61A548837D
{
public:
	::System::String* A57671D407CD14C4; // 0x38
	::System::String* E15C284FA47E14CD; // 0x40
	::System::Single B3A3BC28DDF11033; // 0x48
	::System::Single E56F37E6E8FACA15; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B008BDC059777CD0__CTOR_OFFSET))(this);
	}
};
