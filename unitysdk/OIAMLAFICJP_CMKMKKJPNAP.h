#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define OIAMLAFICJP_CMKMKKJPNAP_ELNHNFKMLOI_OFFSET UNITYSDK_OFFSET(0x16C17580)
#define OIAMLAFICJP_CMKMKKJPNAP__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C17570)
#define OIAMLAFICJP_CMKMKKJPNAP__CTOR_OFFSET UNITYSDK_OFFSET(0x16C17550)

inline static constexpr unsigned int OIAMLAFICJP_CMKMKKJPNAP_TypeDefinitionIndex = 47226;

class OIAMLAFICJP_CMKMKKJPNAP : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_CBOJIOLLKBB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OIAMLAFICJP_CMKMKKJPNAP_TypeDefinitionIndex)->GetStaticField(0x13CB0);
	}
	::System::UInt32 ENLGMKLJMGF; // 0x10
	::MoleMole::HollowChessboard::HollowCell MKIFDGAEBIH; // 0x14
	::System::Int32 HLBKHEFJAPH; // 0x20
	::System::Int32 IHKCCODHMBN; // 0x24
	::System::Int32 FEODNAGOFEH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIAMLAFICJP_CMKMKKJPNAP__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIAMLAFICJP_CMKMKKJPNAP__CCTOR_OFFSET))();
	}

	::System::String* ELNHNFKMLOI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIAMLAFICJP_CMKMKKJPNAP_ELNHNFKMLOI_OFFSET))(this);
	}
};
