#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGachaPerformanceLights; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MCJBLGDMPOB_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x16C75450)
#define MCJBLGDMPOB_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x16C75230)
#define MCJBLGDMPOB_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x16C75630)

inline static constexpr unsigned int MCJBLGDMPOB_TypeDefinitionIndex = 66986;

class MCJBLGDMPOB : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigGachaPerformanceLights** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigGachaPerformanceLights**)Il2CppClass::FromTypeDefinitionIndex(MCJBLGDMPOB_TypeDefinitionIndex)->GetStaticField(0x3BC40);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MCJBLGDMPOB_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::Config::ConfigGachaPerformanceLights* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigGachaPerformanceLights*(*)())((::PBYTE)hIl2Cpp + MCJBLGDMPOB_COPIDBEMEIE_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MCJBLGDMPOB_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};
