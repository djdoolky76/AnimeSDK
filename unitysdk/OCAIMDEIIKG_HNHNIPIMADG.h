#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HNLPBPGMJMF;
namespace MoleMole::DisplayCase { class DisplayGroupItemData; }

#define OCAIMDEIIKG_HNHNIPIMADG_ABEENLIFAHA_OFFSET UNITYSDK_OFFSET(0xFB4EB90)
#define OCAIMDEIIKG_HNHNIPIMADG_KKCPBHEMOEI_OFFSET UNITYSDK_OFFSET(0xFB4EBB0)
#define OCAIMDEIIKG_HNHNIPIMADG__CTOR_OFFSET UNITYSDK_OFFSET(0xFB4EB80)

inline static constexpr unsigned int OCAIMDEIIKG_HNHNIPIMADG_TypeDefinitionIndex = 44912;

class OCAIMDEIIKG_HNHNIPIMADG : public ::System::Object
{
public:
	::HNLPBPGMJMF* MJODFDBNJIP; // 0x10
	::System::Int32 PDHNCKIKIJI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAIMDEIIKG_HNHNIPIMADG__CTOR_OFFSET))(this);
	}

	::System::Boolean ABEENLIFAHA(::MoleMole::DisplayCase::DisplayGroupItemData* JNDDJMAHNAI)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::DisplayCase::DisplayGroupItemData*))((::PBYTE)hIl2Cpp + OCAIMDEIIKG_HNHNIPIMADG_ABEENLIFAHA_OFFSET))(this, JNDDJMAHNAI);
	}

	::System::Boolean KKCPBHEMOEI(::MoleMole::DisplayCase::DisplayGroupItemData* JNDDJMAHNAI)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::DisplayCase::DisplayGroupItemData*))((::PBYTE)hIl2Cpp + OCAIMDEIIKG_HNHNIPIMADG_KKCPBHEMOEI_OFFSET))(this, JNDDJMAHNAI);
	}
};
