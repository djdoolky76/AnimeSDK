#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define F618C589E0BC6E87__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F618C589E0BC6E87_TypeDefinitionIndex = 1819;

class F618C589E0BC6E87 : public ::E379DE61A548837D
{
public:
	::System::String* BDC20FC2CCCC737B; // 0x38
	::System::Single E7D46847035E0B9A; // 0x40
	::System::Single B76F9D7FB1D3C5B7; // 0x44
	::System::Single A57360559707552F; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F618C589E0BC6E87__CTOR_OFFSET))(this);
	}
};
