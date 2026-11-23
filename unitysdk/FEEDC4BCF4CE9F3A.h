#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B78D3E977F9ED83B;
namespace System { class String; }

#define FEEDC4BCF4CE9F3A_B0B7BABB96BB8E30_OFFSET UNITYSDK_OFFSET(0x3EF0D40)
#define FEEDC4BCF4CE9F3A_B7597EA206D5EDB1_OFFSET UNITYSDK_OFFSET(0x3EF0910)
#define FEEDC4BCF4CE9F3A_B996A70283B60FAC_OFFSET UNITYSDK_OFFSET(0x2D5F5D0)
#define FEEDC4BCF4CE9F3A_EA28CF291EBB2931_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define FEEDC4BCF4CE9F3A_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x3EF0CD0)
#define FEEDC4BCF4CE9F3A__CTOR_OFFSET UNITYSDK_OFFSET(0x3EF1100)

inline static constexpr unsigned int FEEDC4BCF4CE9F3A_TypeDefinitionIndex = 15210;

class FEEDC4BCF4CE9F3A : public ::System::Object
{
public:
	::System::String* F04B0AB19820A7CA; // 0x10
	::System::String* FB9B05E817FD65FE; // 0x18
	::System::UInt16 E2A17605F8F19F4D; // 0x20
	::System::Byte _padding0[0x6];
	::System::String* EFF983A80A48BB2A; // 0x28
	::System::Boolean EB1905A1FEBBCAF6; // 0x30
	::System::Byte _padding1[0x7];
	::B78D3E977F9ED83B* FFE123064BDBF0D9; // 0x38

	::System::Int32 B996A70283B60FAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEDC4BCF4CE9F3A_B996A70283B60FAC_OFFSET))(this);
	}

	::System::Void B0B7BABB96BB8E30(::System::String* A5E13DE10579BB67)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FEEDC4BCF4CE9F3A_B0B7BABB96BB8E30_OFFSET))(this, A5E13DE10579BB67);
	}

	::System::String* EA28CF291EBB2931()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEDC4BCF4CE9F3A_EA28CF291EBB2931_OFFSET))(this);
	}

	static ::System::Void B7597EA206D5EDB1(::System::String* A5E13DE10579BB67)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FEEDC4BCF4CE9F3A_B7597EA206D5EDB1_OFFSET))(A5E13DE10579BB67);
	}

	::System::Boolean FC3208D7B8C7EE04(::System::Object* E1B624472530B0E4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FEEDC4BCF4CE9F3A_FC3208D7B8C7EE04_OFFSET))(this, E1B624472530B0E4);
	}

	::System::Void _ctor(::System::String* A7AB1C65BB07DA32)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FEEDC4BCF4CE9F3A__CTOR_OFFSET))(this, A7AB1C65BB07DA32);
	}
};
