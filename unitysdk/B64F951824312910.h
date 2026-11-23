#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EB3AE041B4BB3A24;
class FF54D9DFC36C5CD5;
namespace System { class String; }

#define B64F951824312910_A3C53B3709B71A0A_OFFSET UNITYSDK_OFFSET(0x1962CA0)
#define B64F951824312910_B310CC02B0EA05F4_OFFSET UNITYSDK_OFFSET(0x169C070)
#define B64F951824312910__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B64F951824312910_TypeDefinitionIndex = 17968;

class B64F951824312910 : public ::System::Object
{
public:
	::Il2CppArray<::System::Boolean>* B4C3551D8CA40248; // 0x10
	::Il2CppArray<::System::Int32>* B1527D4F12582478; // 0x18
	::Il2CppArray<::System::Single>* E399C9CEC79FA788; // 0x20
	::Il2CppArray<::System::String*>* ADB83738A23E74BC; // 0x28
	::Il2CppArray<::EB3AE041B4BB3A24*>* A19B4E5783965E40; // 0x30
	::Il2CppArray<::FF54D9DFC36C5CD5*>* FE27E3404F947AFA; // 0x38

	::System::Void A3C53B3709B71A0A(::Il2CppArray<::System::String*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + B64F951824312910_A3C53B3709B71A0A_OFFSET))(this, E937D4885DAA1AE8);
	}

	::Il2CppArray<::System::String*>* B310CC02B0EA05F4()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + B64F951824312910_B310CC02B0EA05F4_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B64F951824312910__CTOR_OFFSET))(this);
	}
};
