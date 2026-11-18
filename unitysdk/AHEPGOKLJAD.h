#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUITriDiceOracle; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define AHEPGOKLJAD_AKHPPLNJDFB_OFFSET UNITYSDK_OFFSET(0x1647B6E0)
#define AHEPGOKLJAD_BAJNINIADEJ_OFFSET UNITYSDK_OFFSET(0x1647B1E0)
#define AHEPGOKLJAD_CCGLEFMABEA_OFFSET UNITYSDK_OFFSET(0x1647B540)
#define AHEPGOKLJAD_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x1647B190)
#define AHEPGOKLJAD_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x1647B730)

inline static constexpr unsigned int AHEPGOKLJAD_TypeDefinitionIndex = 78475;

class AHEPGOKLJAD : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigUITriDiceOracle** StaticGet_KEPANIECDDE()
	{
		return (::MoleMole::Config::ConfigUITriDiceOracle**)Il2CppClass::FromTypeDefinitionIndex(AHEPGOKLJAD_TypeDefinitionIndex)->GetStaticField(0x49660);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + AHEPGOKLJAD_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void CCGLEFMABEA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHEPGOKLJAD_CCGLEFMABEA_OFFSET))();
	}

	static ::System::Void BAJNINIADEJ(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + AHEPGOKLJAD_BAJNINIADEJ_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::Config::ConfigUITriDiceOracle* AKHPPLNJDFB()
	{
		return ((::MoleMole::Config::ConfigUITriDiceOracle*(*)())((::PBYTE)hIl2Cpp + AHEPGOKLJAD_AKHPPLNJDFB_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + AHEPGOKLJAD_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};
