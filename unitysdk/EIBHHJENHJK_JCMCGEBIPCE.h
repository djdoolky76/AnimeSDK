#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ADDEBPHFFIF;
class MEMPJCOPMDE;
namespace MoleMole { class UIWindowController; }
namespace System { template <typename T> class Action_1; }

#define EIBHHJENHJK_JCMCGEBIPCE_MGKDDKIOEDM_OFFSET UNITYSDK_OFFSET(0x158B14B0)
#define EIBHHJENHJK_JCMCGEBIPCE_OOEJOKBDCMO_OFFSET UNITYSDK_OFFSET(0x158B1440)
#define EIBHHJENHJK_JCMCGEBIPCE__CTOR_OFFSET UNITYSDK_OFFSET(0x158B1430)

inline static constexpr unsigned int EIBHHJENHJK_JCMCGEBIPCE_TypeDefinitionIndex = 71910;

class EIBHHJENHJK_JCMCGEBIPCE : public ::System::Object
{
public:
	::ADDEBPHFFIF* DLMHPMILIPL; // 0x10
	::System::Action_1<::MoleMole::UIWindowController*>* GENFJNEPKEA; // 0x18
	::System::Int32 HHEGANCPILH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBHHJENHJK_JCMCGEBIPCE__CTOR_OFFSET))(this);
	}

	::System::Void OOEJOKBDCMO(::MEMPJCOPMDE* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::MEMPJCOPMDE*))((::PBYTE)hIl2Cpp + EIBHHJENHJK_JCMCGEBIPCE_OOEJOKBDCMO_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void MGKDDKIOEDM(::MEMPJCOPMDE* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::MEMPJCOPMDE*))((::PBYTE)hIl2Cpp + EIBHHJENHJK_JCMCGEBIPCE_MGKDDKIOEDM_OFFSET))(this, GLAOEHCGCFO);
	}
};
