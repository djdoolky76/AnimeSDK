#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define A52DADF6040644CF_A4045A48E38BB72D_OFFSET UNITYSDK_OFFSET(0x1ACD080)
#define A52DADF6040644CF_ADF574A5B6C77A80_OFFSET UNITYSDK_OFFSET(0x1ACD090)
#define A52DADF6040644CF_B9EABE6C6E38372C_OFFSET UNITYSDK_OFFSET(0x1ACD0A0)
#define A52DADF6040644CF_E5485D9CEE5EF102_OFFSET UNITYSDK_OFFSET(0x1ACD0B0)
#define A52DADF6040644CF__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A52DADF6040644CF_TypeDefinitionIndex = 1980;

class A52DADF6040644CF : public ::System::Object
{
public:
	::System::Single A1A1D9BA65CCB10C; // 0x10
	::System::Boolean B84F937844E97700; // 0x14
	::System::Boolean FCF1E8A6791C7134; // 0x15

	::System::Void B9EABE6C6E38372C(::System::Boolean E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + A52DADF6040644CF_B9EABE6C6E38372C_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Boolean A4045A48E38BB72D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + A52DADF6040644CF_A4045A48E38BB72D_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A52DADF6040644CF__CTOR_OFFSET))(this);
	}

	::System::Void E5485D9CEE5EF102(::System::Boolean E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + A52DADF6040644CF_E5485D9CEE5EF102_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Boolean ADF574A5B6C77A80()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + A52DADF6040644CF_ADF574A5B6C77A80_OFFSET))(this);
	}
};
