#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E76753C9B1BFB5E1.h"

namespace System { class String; }

#define EF868FBDF8983151_ABCCDEE2C452619A_OFFSET UNITYSDK_OFFSET(0x3B275B0)
#define EF868FBDF8983151_B59079FDA370300B_OFFSET UNITYSDK_OFFSET(0x3B27400)
#define EF868FBDF8983151_E3EAA24792A6D8BF_OFFSET UNITYSDK_OFFSET(0x3B27AD0)
#define EF868FBDF8983151_F62FFE376D11E7DC_OFFSET UNITYSDK_OFFSET(0x3B27A50)
#define EF868FBDF8983151__CTOR_OFFSET UNITYSDK_OFFSET(0x3B279C0)

inline static constexpr unsigned int EF868FBDF8983151_TypeDefinitionIndex = 19247;

class EF868FBDF8983151 : public ::E76753C9B1BFB5E1
{
public:
	::System::String* BCD9D2AD9E775FEA; // 0x18
	::System::String* A15AEB9BE131C205; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EF868FBDF8983151__CTOR_OFFSET))(this);
	}

	::System::Void B59079FDA370300B(::Il2CppArray<::System::Byte>* B083BE7841B347C4)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EF868FBDF8983151_B59079FDA370300B_OFFSET))(this, B083BE7841B347C4);
	}

	::Il2CppArray<::System::Byte>* ABCCDEE2C452619A()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EF868FBDF8983151_ABCCDEE2C452619A_OFFSET))(this);
	}

	::System::Void E3EAA24792A6D8BF(::System::String* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EF868FBDF8983151_E3EAA24792A6D8BF_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void F62FFE376D11E7DC(::System::String* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EF868FBDF8983151_F62FFE376D11E7DC_OFFSET))(this, E937D4885DAA1AE8);
	}
};
