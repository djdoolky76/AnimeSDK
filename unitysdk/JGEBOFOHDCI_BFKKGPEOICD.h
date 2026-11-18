#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigDecorBase; }
namespace MoleMole::Config { class ConfigDungeonCountDownDecor; }

#define JGEBOFOHDCI_BFKKGPEOICD_FOHPJHKKJBI_OFFSET UNITYSDK_OFFSET(0x18A13CD0)
#define JGEBOFOHDCI_BFKKGPEOICD__CTOR_OFFSET UNITYSDK_OFFSET(0x18A13CC0)

inline static constexpr unsigned int JGEBOFOHDCI_BFKKGPEOICD_TypeDefinitionIndex = 70281;

class JGEBOFOHDCI_BFKKGPEOICD : public ::System::Object
{
public:
	::MoleMole::Config::ConfigDungeonCountDownDecor* IGAAKDOIPNN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGEBOFOHDCI_BFKKGPEOICD__CTOR_OFFSET))(this);
	}

	::System::Void FOHPJHKKJBI(::MoleMole::Config::ConfigDecorBase* ELECGFKFMGG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigDecorBase*))((::PBYTE)hIl2Cpp + JGEBOFOHDCI_BFKKGPEOICD_FOHPJHKKJBI_OFFSET))(this, ELECGFKFMGG);
	}
};
