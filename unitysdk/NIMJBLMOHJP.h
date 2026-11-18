#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ActivityBaseRecord; }
namespace MoleMole { class ActivityQuestRedDotRecord; }
namespace System { class String; }

#define NIMJBLMOHJP_AALODIHLFKL_OFFSET UNITYSDK_OFFSET(0xE09E530)
#define NIMJBLMOHJP_FMMNLOMCBOL_OFFSET UNITYSDK_OFFSET(0xE09E960)
#define NIMJBLMOHJP_LIODKEENMBP_OFFSET UNITYSDK_OFFSET(0xE09E0D0)
#define NIMJBLMOHJP_OCHKHFDEEEM_OFFSET UNITYSDK_OFFSET(0xE09E7D0)
#define NIMJBLMOHJP__CTOR_OFFSET UNITYSDK_OFFSET(0xE09E0C0)

inline static constexpr unsigned int NIMJBLMOHJP_TypeDefinitionIndex = 38524;

class NIMJBLMOHJP : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIMJBLMOHJP__CTOR_OFFSET))(this);
	}

	static ::System::Void LIODKEENMBP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIMJBLMOHJP_LIODKEENMBP_OFFSET))();
	}

	static ::System::Void AALODIHLFKL(::System::String* MCOHLHMKLIP, ::MoleMole::ActivityBaseRecord* AGOBAGAGJPI)
	{
		return ((::System::Void(*)(::System::String*, ::MoleMole::ActivityBaseRecord*))((::PBYTE)hIl2Cpp + NIMJBLMOHJP_AALODIHLFKL_OFFSET))(MCOHLHMKLIP, AGOBAGAGJPI);
	}

	static ::System::Void OCHKHFDEEEM(::System::UInt32 HHEGANCPILH, ::MoleMole::ActivityQuestRedDotRecord* CDIIAPHADCF)
	{
		return ((::System::Void(*)(::System::UInt32, ::MoleMole::ActivityQuestRedDotRecord*))((::PBYTE)hIl2Cpp + NIMJBLMOHJP_OCHKHFDEEEM_OFFSET))(HHEGANCPILH, CDIIAPHADCF);
	}

	static ::MoleMole::ActivityQuestRedDotRecord* FMMNLOMCBOL(::System::UInt32 HHEGANCPILH)
	{
		return ((::MoleMole::ActivityQuestRedDotRecord*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NIMJBLMOHJP_FMMNLOMCBOL_OFFSET))(HHEGANCPILH);
	}
};
