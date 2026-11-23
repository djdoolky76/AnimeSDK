#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define B535D8E3D544D87F_A00F734DEFC5DD5F_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define B535D8E3D544D87F_A16C8ED92C989C9B_OFFSET UNITYSDK_OFFSET(0x390DF50)
#define B535D8E3D544D87F_B33E9EC8E95F0102_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define B535D8E3D544D87F_ED3E274C3E012A28_OFFSET UNITYSDK_OFFSET(0x29CFF60)
#define B535D8E3D544D87F_FBC0248000618FDD_OFFSET UNITYSDK_OFFSET(0x390DF40)
#define B535D8E3D544D87F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B535D8E3D544D87F_TypeDefinitionIndex = 12323;

class B535D8E3D544D87F : public ::System::Object
{
public:
	::System::Action* B278AF03C0A767A3; // 0x10

	::System::Void ED3E274C3E012A28()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B535D8E3D544D87F_ED3E274C3E012A28_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B535D8E3D544D87F__CTOR_OFFSET))(this);
	}

	::System::Action* B33E9EC8E95F0102()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + B535D8E3D544D87F_B33E9EC8E95F0102_OFFSET))(this);
	}

	::System::Void FBC0248000618FDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B535D8E3D544D87F_FBC0248000618FDD_OFFSET))(this);
	}

	::System::Void A00F734DEFC5DD5F(::System::Action* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + B535D8E3D544D87F_A00F734DEFC5DD5F_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void A16C8ED92C989C9B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B535D8E3D544D87F_A16C8ED92C989C9B_OFFSET))(this);
	}
};
