#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigDynamicAccessories; }
namespace MoleMole::Config { class ConfigDynamicAccessoryData; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define LMEADKJEPOB_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x16C65620)
#define LMEADKJEPOB_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x16C658F0)
#define LMEADKJEPOB_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x16C65800)
#define LMEADKJEPOB_OPHDJLAAIJL_OFFSET UNITYSDK_OFFSET(0x16C65AB0)
#define LMEADKJEPOB_OPIAMPMCMFA_OFFSET UNITYSDK_OFFSET(0x16C65E70)

inline static constexpr unsigned int LMEADKJEPOB_TypeDefinitionIndex = 45441;

class LMEADKJEPOB : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigDynamicAccessories** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigDynamicAccessories**)Il2CppClass::FromTypeDefinitionIndex(LMEADKJEPOB_TypeDefinitionIndex)->GetStaticField(0x3BB80);
	}

	static ::MoleMole::Config::ConfigDynamicAccessories* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigDynamicAccessories*(*)())((::PBYTE)hIl2Cpp + LMEADKJEPOB_COPIDBEMEIE_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + LMEADKJEPOB_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::Config::ConfigDynamicAccessoryData* OPHDJLAAIJL(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Config::ConfigDynamicAccessoryData*(*)(::System::String*))((::PBYTE)hIl2Cpp + LMEADKJEPOB_OPHDJLAAIJL_OFFSET))(MCOHLHMKLIP);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + LMEADKJEPOB_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void OPIAMPMCMFA(::MoleMole::Config::ConfigDynamicAccessories* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigDynamicAccessories*))((::PBYTE)hIl2Cpp + LMEADKJEPOB_OPIAMPMCMFA_OFFSET))(EGEGIMGMJHN);
	}
};
