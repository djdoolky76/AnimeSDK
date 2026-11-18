#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace MoleMole { class UIWindowController; }
namespace System { template <typename T> class Action_1; }

#define EIBHHJENHJK_LIOMGHFANEB_IBELBOPJNJD_OFFSET UNITYSDK_OFFSET(0x16145590)
#define EIBHHJENHJK_LIOMGHFANEB_MPOKIBGPHLK_OFFSET UNITYSDK_OFFSET(0x161455E0)
#define EIBHHJENHJK_LIOMGHFANEB__CTOR_OFFSET UNITYSDK_OFFSET(0x16145580)

inline static constexpr unsigned int EIBHHJENHJK_LIOMGHFANEB_TypeDefinitionIndex = 71896;

class EIBHHJENHJK_LIOMGHFANEB : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::UIWindowController*>* GENFJNEPKEA; // 0x10
	::System::Int32 LAEKNEGPLBJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBHHJENHJK_LIOMGHFANEB__CTOR_OFFSET))(this);
	}

	::System::Void IBELBOPJNJD(::OAEFGCLEHHO* PPDEFOFBJKE)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EIBHHJENHJK_LIOMGHFANEB_IBELBOPJNJD_OFFSET))(this, PPDEFOFBJKE);
	}

	::System::Void MPOKIBGPHLK(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EIBHHJENHJK_LIOMGHFANEB_MPOKIBGPHLK_OFFSET))(this, BHDNBGLCNOM);
	}
};
