#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace MoleMole { class UIWindowController; }
namespace System { template <typename T> class Action_1; }

#define EIBHHJENHJK_LGEMLIACHFG_FGFIHGBKLNK_OFFSET UNITYSDK_OFFSET(0x158B1730)
#define EIBHHJENHJK_LGEMLIACHFG_MNBJJPNDANJ_OFFSET UNITYSDK_OFFSET(0x158B16E0)
#define EIBHHJENHJK_LGEMLIACHFG__CTOR_OFFSET UNITYSDK_OFFSET(0x158B16D0)

inline static constexpr unsigned int EIBHHJENHJK_LGEMLIACHFG_TypeDefinitionIndex = 71914;

class EIBHHJENHJK_LGEMLIACHFG : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::UIWindowController*>* GENFJNEPKEA; // 0x10
	::System::Int32 LAEKNEGPLBJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBHHJENHJK_LGEMLIACHFG__CTOR_OFFSET))(this);
	}

	::System::Void MNBJJPNDANJ(::OAEFGCLEHHO* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EIBHHJENHJK_LGEMLIACHFG_MNBJJPNDANJ_OFFSET))(this, BLLNHDIDKPA);
	}

	::System::Void FGFIHGBKLNK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBHHJENHJK_LGEMLIACHFG_FGFIHGBKLNK_OFFSET))(this);
	}
};
