#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E22C4EBB3ACDD1FC_FB1A50AD65D18549;
namespace System { class String; }

#define E22C4EBB3ACDD1FC_E5874D189AB1A984_E31A447AF0002051_OFFSET UNITYSDK_OFFSET(0x3A432D0)
#define E22C4EBB3ACDD1FC_E5874D189AB1A984__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E22C4EBB3ACDD1FC_E5874D189AB1A984_TypeDefinitionIndex = 12967;

class E22C4EBB3ACDD1FC_E5874D189AB1A984 : public ::System::Object
{
public:
	::System::Int32 B75787AB015D7431; // 0x10
	::System::Byte _padding0[0x4];
	::E22C4EBB3ACDD1FC_FB1A50AD65D18549* A8791C2B0F6F977B; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E22C4EBB3ACDD1FC_E5874D189AB1A984__CTOR_OFFSET))(this);
	}

	::System::Void E31A447AF0002051(::System::String* E82293C0814051A5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + E22C4EBB3ACDD1FC_E5874D189AB1A984_E31A447AF0002051_OFFSET))(this, E82293C0814051A5);
	}
};
