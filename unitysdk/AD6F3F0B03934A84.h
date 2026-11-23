#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define AD6F3F0B03934A84__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int AD6F3F0B03934A84_TypeDefinitionIndex = 1237;

class AD6F3F0B03934A84 : public ::E379DE61A548837D
{
public:
	::System::Int32 BB574549244B9909; // 0x38
	::System::Byte _padding0[0x4];
	::System::String* B2A204654E0BBFC6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AD6F3F0B03934A84__CTOR_OFFSET))(this);
	}
};
