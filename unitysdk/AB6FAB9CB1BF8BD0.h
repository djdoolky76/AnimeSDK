#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F37EA96937710617/FD2F0AEDF9CF14A7.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class String; }

#define AB6FAB9CB1BF8BD0_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x3C1A210)
#define AB6FAB9CB1BF8BD0_F6F678AD9076E46B_OFFSET UNITYSDK_OFFSET(0x3C1A7D0)
#define AB6FAB9CB1BF8BD0__CTOR_OFFSET UNITYSDK_OFFSET(0x3C1ACF0)

inline static constexpr unsigned int AB6FAB9CB1BF8BD0_TypeDefinitionIndex = 11419;

class AB6FAB9CB1BF8BD0 : public ::System::Object
{
public:
	::F37EA96937710617::FD2F0AEDF9CF14A7 B714679C324FF96E; // 0x10
	::System::Byte _padding0[0x4];
	::Il2CppArray<::System::Boolean>* A7ED9FC659AA83A7; // 0x18
	::Il2CppArray<::System::Char>* E9917468B1495AD0; // 0x20
	::Il2CppArray<::System::Double>* F98411A8E6E9D6F5; // 0x28
	::Il2CppArray<::System::Int16>* BF7369128C9CC8C6; // 0x30
	::Il2CppArray<::System::Int32>* A33EE1BD874DE2B2; // 0x38
	::Il2CppArray<::System::Int64>* AFF72DF15807D39B; // 0x40
	::Il2CppArray<::System::SByte>* F6C51B5339A84952; // 0x48
	::Il2CppArray<::System::Single>* A5FAAC71F6318E90; // 0x50
	::Il2CppArray<::System::UInt16>* E5F8F326CDE2D130; // 0x58
	::Il2CppArray<::System::UInt32>* E0A2A5EAA916DBA8; // 0x60
	::Il2CppArray<::System::UInt64>* F908FC4156E80E04; // 0x68

	::System::Void A1E97155B145443C(::F37EA96937710617::FD2F0AEDF9CF14A7 B714679C324FF96E, ::System::Array* EDF8D5B13A3EE433)
	{
		return ((::System::Void(*)(::PVOID, ::F37EA96937710617::FD2F0AEDF9CF14A7, ::System::Array*))((::PBYTE)hIl2Cpp + AB6FAB9CB1BF8BD0_A1E97155B145443C_OFFSET))(this, B714679C324FF96E, EDF8D5B13A3EE433);
	}

	::System::Void _ctor(::F37EA96937710617::FD2F0AEDF9CF14A7 B714679C324FF96E, ::System::Array* EDF8D5B13A3EE433)
	{
		return ((::System::Void(*)(::PVOID, ::F37EA96937710617::FD2F0AEDF9CF14A7, ::System::Array*))((::PBYTE)hIl2Cpp + AB6FAB9CB1BF8BD0__CTOR_OFFSET))(this, B714679C324FF96E, EDF8D5B13A3EE433);
	}

	::System::Void F6F678AD9076E46B(::System::String* E937D4885DAA1AE8, ::System::Int32 B48C66E5FB2449C6)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + AB6FAB9CB1BF8BD0_F6F678AD9076E46B_OFFSET))(this, E937D4885DAA1AE8, B48C66E5FB2449C6);
	}
};
