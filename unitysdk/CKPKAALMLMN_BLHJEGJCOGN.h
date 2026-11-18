#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKPKAALMLMN;
namespace MoleMole { class UIGachaPageContext; }
namespace System { class Action; }

#define CKPKAALMLMN_BLHJEGJCOGN_DCCBIHAMFCC_OFFSET UNITYSDK_OFFSET(0x197153B0)
#define CKPKAALMLMN_BLHJEGJCOGN__CTOR_OFFSET UNITYSDK_OFFSET(0x197153A0)

inline static constexpr unsigned int CKPKAALMLMN_BLHJEGJCOGN_TypeDefinitionIndex = 73628;

class CKPKAALMLMN_BLHJEGJCOGN : public ::System::Object
{
public:
	::MoleMole::UIGachaPageContext* OBHMMIOKGEF; // 0x10
	::CKPKAALMLMN* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPKAALMLMN_BLHJEGJCOGN__CTOR_OFFSET))(this);
	}

	::System::Void DCCBIHAMFCC(::System::Action* GJBHEJGENMI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CKPKAALMLMN_BLHJEGJCOGN_DCCBIHAMFCC_OFFSET))(this, GJBHEJGENMI);
	}
};
