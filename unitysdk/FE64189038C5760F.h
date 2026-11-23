#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define FE64189038C5760F__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FE64189038C5760F_TypeDefinitionIndex = 3431;

class FE64189038C5760F : public ::E379DE61A548837D
{
public:
	::System::Int32 BB574549244B9909; // 0x38
	::System::Boolean FFA3A26F9BE03A17; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FE64189038C5760F__CTOR_OFFSET))(this);
	}
};
