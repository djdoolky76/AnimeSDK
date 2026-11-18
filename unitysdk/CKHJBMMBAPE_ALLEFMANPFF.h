#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKHJBMMBAPE;
namespace MoleMole { class UIUrbanMapPointWidgetContext; }
namespace System { class String; }

#define CKHJBMMBAPE_ALLEFMANPFF_KLDDIPEAAKN_OFFSET UNITYSDK_OFFSET(0x16967220)
#define CKHJBMMBAPE_ALLEFMANPFF_LHLBBGDFOBD_OFFSET UNITYSDK_OFFSET(0x169672E0)
#define CKHJBMMBAPE_ALLEFMANPFF__CTOR_OFFSET UNITYSDK_OFFSET(0x16967210)

inline static constexpr unsigned int CKHJBMMBAPE_ALLEFMANPFF_TypeDefinitionIndex = 58467;

class CKHJBMMBAPE_ALLEFMANPFF : public ::System::Object
{
public:
	::MoleMole::UIUrbanMapPointWidgetContext* LPEDCCEKDHO; // 0x10
	::CKHJBMMBAPE* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHJBMMBAPE_ALLEFMANPFF__CTOR_OFFSET))(this);
	}

	::System::String* KLDDIPEAAKN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHJBMMBAPE_ALLEFMANPFF_KLDDIPEAAKN_OFFSET))(this);
	}

	::System::Void LHLBBGDFOBD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHJBMMBAPE_ALLEFMANPFF_LHLBBGDFOBD_OFFSET))(this);
	}
};
