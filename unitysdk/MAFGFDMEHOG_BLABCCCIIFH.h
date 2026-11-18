#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MAFGFDMEHOG_MDDFCHHIPMP;
namespace MoleMole { class UIBaseController; }

#define MAFGFDMEHOG_BLABCCCIIFH_LEPHDDGEJOC_OFFSET UNITYSDK_OFFSET(0x11F2B3A0)
#define MAFGFDMEHOG_BLABCCCIIFH__CTOR_OFFSET UNITYSDK_OFFSET(0x11F2B390)

inline static constexpr unsigned int MAFGFDMEHOG_BLABCCCIIFH_TypeDefinitionIndex = 46020;

class MAFGFDMEHOG_BLABCCCIIFH : public ::System::Object
{
public:
	::MAFGFDMEHOG_MDDFCHHIPMP* FGBNBFHOKAA; // 0x10
	::MoleMole::UIBaseController* MMNPMPPEEGL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFGFDMEHOG_BLABCCCIIFH__CTOR_OFFSET))(this);
	}

	::System::Void LEPHDDGEJOC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFGFDMEHOG_BLABCCCIIFH_LEPHDDGEJOC_OFFSET))(this);
	}
};
