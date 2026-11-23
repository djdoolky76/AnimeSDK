#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define B86039D68B93722C_A7BC39EF7FE715FC_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define B86039D68B93722C_E7817BCFCBAE1FBB_OFFSET UNITYSDK_OFFSET(0x1873260)
#define B86039D68B93722C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C2D120)
#define B86039D68B93722C__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3C2D150)
#define B86039D68B93722C__CTOR_OFFSET UNITYSDK_OFFSET(0x3C2D1A0)

inline static constexpr unsigned int B86039D68B93722C_TypeDefinitionIndex = 11518;

class B86039D68B93722C : public ::System::Attribute
{
public:
	::System::String* F1289A4B0D19E3B3; // 0x10
	::System::Boolean F10236DC1329E9D0; // 0x18

	::System::Void _ctor(::System::String* B083BE7841B347C4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + B86039D68B93722C__CTOR_OFFSET))(this, B083BE7841B347C4);
	}

	::System::Boolean E7817BCFCBAE1FBB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + B86039D68B93722C_E7817BCFCBAE1FBB_OFFSET))(this);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B86039D68B93722C__CTOR_1_OFFSET))(this);
	}

	::System::Void _ctor_2(::System::String* B083BE7841B347C4, ::System::Boolean E22BCD4736CD9DF9)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + B86039D68B93722C__CTOR_2_OFFSET))(this, B083BE7841B347C4, E22BCD4736CD9DF9);
	}

	::System::String* A7BC39EF7FE715FC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + B86039D68B93722C_A7BC39EF7FE715FC_OFFSET))(this);
	}
};
