#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/FocusUISpecialIconParam.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MBPFMJAECOP_IJIOPHHFGMN_OFFSET UNITYSDK_OFFSET(0x15E1D030)
#define MBPFMJAECOP_OGHEDBDJBMJ_OFFSET UNITYSDK_OFFSET(0x15E1D490)
#define MBPFMJAECOP_PFOHKHEHNJL_OFFSET UNITYSDK_OFFSET(0x15E1CE70)

inline static constexpr unsigned int MBPFMJAECOP_TypeDefinitionIndex = 41416;

class MBPFMJAECOP : public ::System::Object
{
public:
	static ::System::Void PFOHKHEHNJL(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MBPFMJAECOP_PFOHKHEHNJL_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void IJIOPHHFGMN(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::String* FOKMOGBNAPK, ::Foundation::AssetPath PDGGJIFNBBK, ::System::Boolean CPHDDAGKHLB, ::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam IDECELEOIEE)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::Foundation::AssetPath, ::System::Boolean, ::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam))((::PBYTE)hIl2Cpp + MBPFMJAECOP_IJIOPHHFGMN_OFFSET))(KECKGDFIALJ, FOKMOGBNAPK, PDGGJIFNBBK, CPHDDAGKHLB, IDECELEOIEE);
	}

	static ::System::Void OGHEDBDJBMJ(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::String* GBDJJENKHHB, ::System::Boolean CPHDDAGKHLB)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MBPFMJAECOP_OGHEDBDJBMJ_OFFSET))(KECKGDFIALJ, GBDJJENKHHB, CPHDDAGKHLB);
	}
};
