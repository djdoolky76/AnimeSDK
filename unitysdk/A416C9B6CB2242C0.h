#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define A416C9B6CB2242C0_B3B8236B2C35E9B6_OFFSET UNITYSDK_OFFSET(0x417EB10)
#define A416C9B6CB2242C0_F489F2C22CA7711D_OFFSET UNITYSDK_OFFSET(0x417EB80)
#define A416C9B6CB2242C0_F93743E8ABAB312B_OFFSET UNITYSDK_OFFSET(0x417EB50)

inline static constexpr unsigned int A416C9B6CB2242C0_TypeDefinitionIndex = 17678;

class A416C9B6CB2242C0 : public ::System::Object
{
public:
	static ::System::Void F489F2C22CA7711D(::System::UInt64 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::System::UInt64))((::PBYTE)hIl2Cpp + A416C9B6CB2242C0_F489F2C22CA7711D_OFFSET))(E937D4885DAA1AE8);
	}

	static ::System::Boolean F93743E8ABAB312B()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + A416C9B6CB2242C0_F93743E8ABAB312B_OFFSET))();
	}

	static ::System::Boolean B3B8236B2C35E9B6(::System::UInt64 B6A7C053E25D4EA1)
	{
		return ((::System::Boolean(*)(::System::UInt64))((::PBYTE)hIl2Cpp + A416C9B6CB2242C0_B3B8236B2C35E9B6_OFFSET))(B6A7C053E25D4EA1);
	}
};
