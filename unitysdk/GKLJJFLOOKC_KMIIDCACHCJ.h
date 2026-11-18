#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIControlItem; }
namespace System { class String; }
namespace System { class Type; }

#define GKLJJFLOOKC_KMIIDCACHCJ_AENBCEANBDK_1_OFFSET UNITYSDK_OFFSET(0x15B26D70)
#define GKLJJFLOOKC_KMIIDCACHCJ_AENBCEANBDK_OFFSET UNITYSDK_OFFSET(0x15B26640)
#define GKLJJFLOOKC_KMIIDCACHCJ_MOKLHPMOOLC_OFFSET UNITYSDK_OFFSET(0x15B26580)
#define GKLJJFLOOKC_KMIIDCACHCJ_OFEFGLPIAKE_OFFSET UNITYSDK_OFFSET(0x15B261E0)
#define GKLJJFLOOKC_KMIIDCACHCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15B261D0)

inline static constexpr unsigned int GKLJJFLOOKC_KMIIDCACHCJ_TypeDefinitionIndex = 76998;

class GKLJJFLOOKC_KMIIDCACHCJ : public ::System::Object
{
public:
	::System::Type* OBKKEJBEBAM; // 0x10
	::System::String* IELCNPBDEBA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLJJFLOOKC_KMIIDCACHCJ__CTOR_OFFSET))(this);
	}

	::System::String* OFEFGLPIAKE(::MoleMole::UIControlItem* IPMMCGDMODG, ::System::Boolean LPJPGAGDNLK)
	{
		return ((::System::String*(*)(::PVOID, ::MoleMole::UIControlItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + GKLJJFLOOKC_KMIIDCACHCJ_OFEFGLPIAKE_OFFSET))(this, IPMMCGDMODG, LPJPGAGDNLK);
	}

	::System::String* AENBCEANBDK(::MoleMole::UIControlItem* IPMMCGDMODG, ::System::String* ABHBKFJKINO, ::System::String* LPKKGCEHJOE, ::System::Boolean LPJPGAGDNLK)
	{
		return ((::System::String*(*)(::PVOID, ::MoleMole::UIControlItem*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + GKLJJFLOOKC_KMIIDCACHCJ_AENBCEANBDK_OFFSET))(this, IPMMCGDMODG, ABHBKFJKINO, LPKKGCEHJOE, LPJPGAGDNLK);
	}

	::System::String* AENBCEANBDK_1(::MoleMole::UIControlItem* IPMMCGDMODG, ::System::Int32 ABHBKFJKINO, ::System::String* LPKKGCEHJOE, ::System::Boolean LPJPGAGDNLK)
	{
		return ((::System::String*(*)(::PVOID, ::MoleMole::UIControlItem*, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + GKLJJFLOOKC_KMIIDCACHCJ_AENBCEANBDK_1_OFFSET))(this, IPMMCGDMODG, ABHBKFJKINO, LPKKGCEHJOE, LPJPGAGDNLK);
	}

	::System::String* MOKLHPMOOLC(::MoleMole::UIControlItem* IPMMCGDMODG)
	{
		return ((::System::String*(*)(::PVOID, ::MoleMole::UIControlItem*))((::PBYTE)hIl2Cpp + GKLJJFLOOKC_KMIIDCACHCJ_MOKLHPMOOLC_OFFSET))(this, IPMMCGDMODG);
	}
};
