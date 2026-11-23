#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define B579C2A3034EC437_A16C8ED92C989C9B_OFFSET UNITYSDK_OFFSET(0x3A7D360)
#define B579C2A3034EC437_E145E69EE157AFC5_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define B579C2A3034EC437_ED3E274C3E012A28_OFFSET UNITYSDK_OFFSET(0x3A7D680)
#define B579C2A3034EC437__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B579C2A3034EC437_TypeDefinitionIndex = 11920;

class B579C2A3034EC437 : public ::System::Object
{
public:
	::System::Action* EA3AE7A7BB6AB34C; // 0x10

	::System::Action* E145E69EE157AFC5()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + B579C2A3034EC437_E145E69EE157AFC5_OFFSET))(this);
	}

	::System::Void A16C8ED92C989C9B(::System::String* B083BE7841B347C4, ::System::Single B431FFDFE9D1D5B1, ::System::Boolean E2C4E8B47FED2C5D)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + B579C2A3034EC437_A16C8ED92C989C9B_OFFSET))(this, B083BE7841B347C4, B431FFDFE9D1D5B1, E2C4E8B47FED2C5D);
	}

	::System::Void ED3E274C3E012A28()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B579C2A3034EC437_ED3E274C3E012A28_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B579C2A3034EC437__CTOR_OFFSET))(this);
	}
};
