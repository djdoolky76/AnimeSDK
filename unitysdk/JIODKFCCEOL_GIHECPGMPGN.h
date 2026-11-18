#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigBigSceneGroupEntityPriority; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JIODKFCCEOL_GIHECPGMPGN_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x165AE020)
#define JIODKFCCEOL_GIHECPGMPGN__CTOR_OFFSET UNITYSDK_OFFSET(0x165AE010)

inline static constexpr unsigned int JIODKFCCEOL_GIHECPGMPGN_TypeDefinitionIndex = 64135;

class JIODKFCCEOL_GIHECPGMPGN : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::ConfigBigSceneGroupEntityPriority*>* AMHGBGMOMLL; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::ConfigBigSceneGroupEntityPriority*>* JICBDECIBGK; // 0x18
	::System::Action* IBNICCGMILF; // 0x20
	::System::Int32 HBINAGPODHA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIODKFCCEOL_GIHECPGMPGN__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::ConfigBigSceneGroupEntityPriority* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigBigSceneGroupEntityPriority*))((::PBYTE)hIl2Cpp + JIODKFCCEOL_GIHECPGMPGN_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
