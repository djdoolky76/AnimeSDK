#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define BFA8791C5C2EDA46_AA2AA1654ABE1A0E_AACA74520D70D705_OFFSET UNITYSDK_OFFSET(0x29125F0)
#define BFA8791C5C2EDA46_AA2AA1654ABE1A0E_B9F016988833FE09_OFFSET UNITYSDK_OFFSET(0x2912790)
#define BFA8791C5C2EDA46_AA2AA1654ABE1A0E__CCTOR_OFFSET UNITYSDK_OFFSET(0x2912720)
#define BFA8791C5C2EDA46_AA2AA1654ABE1A0E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BFA8791C5C2EDA46_AA2AA1654ABE1A0E_TypeDefinitionIndex = 19696;

class BFA8791C5C2EDA46_AA2AA1654ABE1A0E : public ::System::Object
{
public:
	static ::System::Byte* StaticGet_ABF5C1463A336C98()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(BFA8791C5C2EDA46_AA2AA1654ABE1A0E_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::UInt32* StaticGet_B0AB60E2CDD7FE46()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(BFA8791C5C2EDA46_AA2AA1654ABE1A0E_TypeDefinitionIndex)->GetStaticField(0x4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFA8791C5C2EDA46_AA2AA1654ABE1A0E__CCTOR_OFFSET))();
	}

	static ::System::Void B9F016988833FE09(::System::Byte E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::System::Byte))((::PBYTE)hIl2Cpp + BFA8791C5C2EDA46_AA2AA1654ABE1A0E_B9F016988833FE09_OFFSET))(E937D4885DAA1AE8);
	}

	static ::System::UInt32 AACA74520D70D705(::System::String* A9E1BF1A9D5199C6)
	{
		return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + BFA8791C5C2EDA46_AA2AA1654ABE1A0E_AACA74520D70D705_OFFSET))(A9E1BF1A9D5199C6);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFA8791C5C2EDA46_AA2AA1654ABE1A0E__CTOR_OFFSET))(this);
	}
};
