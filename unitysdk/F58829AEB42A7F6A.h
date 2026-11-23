#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define F58829AEB42A7F6A_ED9309D2909DE4C8_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define F58829AEB42A7F6A_F087F9197CFB77E4_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define F58829AEB42A7F6A__CTOR_OFFSET UNITYSDK_OFFSET(0x2759260)

inline static constexpr unsigned int F58829AEB42A7F6A_TypeDefinitionIndex = 14452;

class F58829AEB42A7F6A : public ::System::Attribute
{
public:
	::System::String* B585389977B29072; // 0x10

	::System::Void ED9309D2909DE4C8(::System::String* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F58829AEB42A7F6A_ED9309D2909DE4C8_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::String* F087F9197CFB77E4()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + F58829AEB42A7F6A_F087F9197CFB77E4_OFFSET))(this);
	}

	::System::Void _ctor(::System::String* A30706FCE5AF29B5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F58829AEB42A7F6A__CTOR_OFFSET))(this, A30706FCE5AF29B5);
	}
};
