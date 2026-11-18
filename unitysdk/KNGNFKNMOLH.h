#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ILGPPMGBHIJ.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController_MGNEBGDIIEO; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KNGNFKNMOLH_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x19967650)
#define KNGNFKNMOLH_KBLIFPLNLCO_OFFSET UNITYSDK_OFFSET(0x199676D0)
#define KNGNFKNMOLH__CTOR_OFFSET UNITYSDK_OFFSET(0x19967540)

inline static constexpr unsigned int KNGNFKNMOLH_TypeDefinitionIndex = 50971;

class KNGNFKNMOLH : public ::System::Object
{
public:
	::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* MGHHHLNOFPB; // 0x10
	::System::Collections::Generic::List_1<::ILGPPMGBHIJ>* DDOMKAGGHOD; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* FBGLJFLIDHK; // 0x20
	::System::Single DIMODHEBOFO; // 0x28

	::System::Void _ctor(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*))((::PBYTE)hIl2Cpp + KNGNFKNMOLH__CTOR_OFFSET))(this, NCIMBHDKIJM);
	}

	::System::Void KBLIFPLNLCO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNGNFKNMOLH_KBLIFPLNLCO_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*))((::PBYTE)hIl2Cpp + KNGNFKNMOLH_BBOMJDBNHIC_OFFSET))(this, NCIMBHDKIJM);
	}
};
