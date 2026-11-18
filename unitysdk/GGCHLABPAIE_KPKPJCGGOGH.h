#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class Node; }
namespace ParadoxNotion { class HierarchyTree_Element; }

#define GGCHLABPAIE_KPKPJCGGOGH_GKAIOBMHEFK_OFFSET UNITYSDK_OFFSET(0x179E9460)
#define GGCHLABPAIE_KPKPJCGGOGH__CTOR_OFFSET UNITYSDK_OFFSET(0x179E9450)

inline static constexpr unsigned int GGCHLABPAIE_KPKPJCGGOGH_TypeDefinitionIndex = 79323;

class GGCHLABPAIE_KPKPJCGGOGH : public ::System::Object
{
public:
	::NodeCanvas::Framework::Node* KKJEBAEEJCA; // 0x10
	::ParadoxNotion::HierarchyTree_Element* LJBPECKCCEA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGCHLABPAIE_KPKPJCGGOGH__CTOR_OFFSET))(this);
	}

	::System::Int32 GKAIOBMHEFK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGCHLABPAIE_KPKPJCGGOGH_GKAIOBMHEFK_OFFSET))(this);
	}
};
