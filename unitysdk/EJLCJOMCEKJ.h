#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MFNPJJNHELE;
namespace MoleMole { class UIQuickEditPopWindowController; }

#define EJLCJOMCEKJ_ILOOCKPPLDG_OFFSET UNITYSDK_OFFSET(0x169A04C0)
#define EJLCJOMCEKJ_NKPAGONEHCH_OFFSET UNITYSDK_OFFSET(0x169A0470)
#define EJLCJOMCEKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x169A04B0)

inline static constexpr unsigned int EJLCJOMCEKJ_TypeDefinitionIndex = 39235;

class EJLCJOMCEKJ : public ::System::Object
{
public:
	::MoleMole::UIQuickEditPopWindowController* NCIMBHDKIJM; // 0x10
	::MFNPJJNHELE* AEJAMJDBHAM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLCJOMCEKJ__CTOR_OFFSET))(this);
	}

	::System::Void NKPAGONEHCH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLCJOMCEKJ_NKPAGONEHCH_OFFSET))(this);
	}

	::System::Void ILOOCKPPLDG(::MoleMole::UIQuickEditPopWindowController* MJGBOLCMDOL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIQuickEditPopWindowController*))((::PBYTE)hIl2Cpp + EJLCJOMCEKJ_ILOOCKPPLDG_OFFSET))(this, MJGBOLCMDOL);
	}
};
