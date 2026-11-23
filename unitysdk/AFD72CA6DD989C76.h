#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define AFD72CA6DD989C76__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int AFD72CA6DD989C76_TypeDefinitionIndex = 1460;

class AFD72CA6DD989C76 : public ::E379DE61A548837D
{
public:
	::System::String* EDF310C4AD388A5F; // 0x38
	::System::Single AC5842347601DAB9; // 0x40
	::System::Boolean F99436309E56DB07; // 0x44
	::System::Byte _padding0[0x3];
	::System::Single ABA1F1E096C1F5F8; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFD72CA6DD989C76__CTOR_OFFSET))(this);
	}
};
