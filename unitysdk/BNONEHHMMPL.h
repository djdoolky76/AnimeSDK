#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigGachaPerformMisc_ItemRarity.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/Config/ConfigGachaTvResultGroupEffects.h"

namespace MoleMole::Config { class ConfigGachaPerformanceEffects; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BNONEHHMMPL_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x11602980)
#define BNONEHHMMPL_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x116026D0)
#define BNONEHHMMPL_DCOJMCFDKMD_OFFSET UNITYSDK_OFFSET(0x11602B60)
#define BNONEHHMMPL_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x11602890)

inline static constexpr unsigned int BNONEHHMMPL_TypeDefinitionIndex = 43615;

class BNONEHHMMPL : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigGachaPerformanceEffects** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigGachaPerformanceEffects**)Il2CppClass::FromTypeDefinitionIndex(BNONEHHMMPL_TypeDefinitionIndex)->GetStaticField(0x50060);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + BNONEHHMMPL_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + BNONEHHMMPL_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::Config::ConfigGachaPerformanceEffects* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigGachaPerformanceEffects*(*)())((::PBYTE)hIl2Cpp + BNONEHHMMPL_COPIDBEMEIE_OFFSET))();
	}

	static ::MoleMole::Config::ConfigGachaTvResultGroupEffects DCOJMCFDKMD(::System::Int32 CLHLJKKAAPO, ::MoleMole::Config::ConfigGachaPerformMisc_ItemRarity EGOBOLCFHMO)
	{
		return ((::MoleMole::Config::ConfigGachaTvResultGroupEffects(*)(::System::Int32, ::MoleMole::Config::ConfigGachaPerformMisc_ItemRarity))((::PBYTE)hIl2Cpp + BNONEHHMMPL_DCOJMCFDKMD_OFFSET))(CLHLJKKAAPO, EGOBOLCFHMO);
	}
};
