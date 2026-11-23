#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A451E8BDB91159DD_AED4661665861A34;
namespace System { class String; }

#define A451E8BDB91159DD_AA170C2D0D9727F4_FE43FC271A47198C_OFFSET UNITYSDK_OFFSET(0x22C0220)
#define A451E8BDB91159DD_AA170C2D0D9727F4__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A451E8BDB91159DD_AA170C2D0D9727F4_TypeDefinitionIndex = 7144;

class A451E8BDB91159DD_AA170C2D0D9727F4 : public ::System::Object
{
public:
	::System::Boolean F49797C466844FA3; // 0x10
	::System::Byte _padding0[0x7];
	::System::String* E2C74932D6B120AA; // 0x18
	::A451E8BDB91159DD_AED4661665861A34* A8791C2B0F6F977B; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A451E8BDB91159DD_AA170C2D0D9727F4__CTOR_OFFSET))(this);
	}

	::System::Void FE43FC271A47198C(::Il2CppArray<::System::Byte>* E83E519C5C42896F)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + A451E8BDB91159DD_AA170C2D0D9727F4_FE43FC271A47198C_OFFSET))(this, E83E519C5C42896F);
	}
};
