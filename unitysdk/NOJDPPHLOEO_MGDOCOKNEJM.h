#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIFormalVersionTipsPopWindowController; }

#define NOJDPPHLOEO_MGDOCOKNEJM_PFPJKMPLOBI_OFFSET UNITYSDK_OFFSET(0x10680810)
#define NOJDPPHLOEO_MGDOCOKNEJM__CTOR_OFFSET UNITYSDK_OFFSET(0x10680800)

inline static constexpr unsigned int NOJDPPHLOEO_MGDOCOKNEJM_TypeDefinitionIndex = 85777;

class NOJDPPHLOEO_MGDOCOKNEJM : public ::System::Object
{
public:
	::MoleMole::UIFormalVersionTipsPopWindowController* NCIMBHDKIJM; // 0x10
	::System::Boolean DDKDFGFKIGG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOJDPPHLOEO_MGDOCOKNEJM__CTOR_OFFSET))(this);
	}

	::System::Void PFPJKMPLOBI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOJDPPHLOEO_MGDOCOKNEJM_PFPJKMPLOBI_OFFSET))(this);
	}
};
