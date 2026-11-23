#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define B69E71CBEB247DFA_AAF9341DBCE6C7C3_OFFSET UNITYSDK_OFFSET(0x165A480)
#define B69E71CBEB247DFA_F015981C31EC0CC0_OFFSET UNITYSDK_OFFSET(0x165A410)
#define B69E71CBEB247DFA__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B69E71CBEB247DFA_TypeDefinitionIndex = 412;

class B69E71CBEB247DFA : public ::E379DE61A548837D
{
public:
	::System::String* E5B324D4E91F5B5E; // 0x38

	::System::String* F015981C31EC0CC0()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + B69E71CBEB247DFA_F015981C31EC0CC0_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B69E71CBEB247DFA__CTOR_OFFSET))(this);
	}

	::System::Void AAF9341DBCE6C7C3(::System::String* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + B69E71CBEB247DFA_AAF9341DBCE6C7C3_OFFSET))(this, E937D4885DAA1AE8);
	}
};
