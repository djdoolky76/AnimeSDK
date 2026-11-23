#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BB454B58A0E2FAB5;
namespace System { class String; }

#define A625D585357F45FC_B6C02F37CF303257_F89E000809C3CB5B_OFFSET UNITYSDK_OFFSET(0x38B6D50)
#define A625D585357F45FC_B6C02F37CF303257__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A625D585357F45FC_B6C02F37CF303257_TypeDefinitionIndex = 20281;

class A625D585357F45FC_B6C02F37CF303257 : public ::System::Object
{
public:
	::System::Boolean B037602813C9C4AE; // 0x10
	::System::Byte _padding0[0x3];
	::System::Int32 FD55D57A13F0B56C; // 0x14
	::System::String* B45CDA99FBC57C86; // 0x18
	::System::Int32 F9BA421B0134B9BF; // 0x20
	::System::Int32 FA5545FCA0711CBC; // 0x24

	::System::Void F89E000809C3CB5B(::BB454B58A0E2FAB5* E1A091262C10AC9B)
	{
		return ((::System::Void(*)(::PVOID, ::BB454B58A0E2FAB5*))((::PBYTE)hIl2Cpp + A625D585357F45FC_B6C02F37CF303257_F89E000809C3CB5B_OFFSET))(this, E1A091262C10AC9B);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A625D585357F45FC_B6C02F37CF303257__CTOR_OFFSET))(this);
	}
};
