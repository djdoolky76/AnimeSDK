#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGachaPerformance; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define PFOIKAAOENL_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x16FC63A0)
#define PFOIKAAOENL_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x16FC61E0)
#define PFOIKAAOENL_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x16FC60F0)

inline static constexpr unsigned int PFOIKAAOENL_TypeDefinitionIndex = 68941;

class PFOIKAAOENL : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigGachaPerformance** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigGachaPerformance**)Il2CppClass::FromTypeDefinitionIndex(PFOIKAAOENL_TypeDefinitionIndex)->GetStaticField(0x4DE70);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + PFOIKAAOENL_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::Config::ConfigGachaPerformance* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigGachaPerformance*(*)())((::PBYTE)hIl2Cpp + PFOIKAAOENL_COPIDBEMEIE_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + PFOIKAAOENL_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}
};
