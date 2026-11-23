#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define FCBCC51A88484923__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FCBCC51A88484923_TypeDefinitionIndex = 875;

class FCBCC51A88484923 : public ::E379DE61A548837D
{
public:
	::System::String* EE1F6B2D64076FFA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBCC51A88484923__CTOR_OFFSET))(this);
	}
};
