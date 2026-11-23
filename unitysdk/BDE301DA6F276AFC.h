#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBBF88E07D9EE9CB.h"

#define BDE301DA6F276AFC_AA2D7FF4AB7E14E9_OFFSET UNITYSDK_OFFSET(0x1925A50)
#define BDE301DA6F276AFC__CTOR_OFFSET UNITYSDK_OFFSET(0x20638C0)

inline static constexpr unsigned int BDE301DA6F276AFC_TypeDefinitionIndex = 8413;

class BDE301DA6F276AFC : public ::EBBF88E07D9EE9CB
{
public:
	::System::Boolean A665CF14901EB7AB; // 0x28

	::System::Void AA2D7FF4AB7E14E9(::System::Boolean E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BDE301DA6F276AFC_AA2D7FF4AB7E14E9_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor(::System::UInt32 EE39CE724589623B, ::System::Boolean FC7C1A9E5EB4EA72)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + BDE301DA6F276AFC__CTOR_OFFSET))(this, EE39CE724589623B, FC7C1A9E5EB4EA72);
	}
};
