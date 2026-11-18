#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigRabGame; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BEMHEENDNCJ_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0xF797BF0)
#define BEMHEENDNCJ_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0xF797A30)
#define BEMHEENDNCJ_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0xF797940)
#define BEMHEENDNCJ_OPIAMPMCMFA_OFFSET UNITYSDK_OFFSET(0xF797930)

inline static constexpr unsigned int BEMHEENDNCJ_TypeDefinitionIndex = 42536;

class BEMHEENDNCJ : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigRabGame** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigRabGame**)Il2CppClass::FromTypeDefinitionIndex(BEMHEENDNCJ_TypeDefinitionIndex)->GetStaticField(0x39F80);
	}

	static ::System::Void OPIAMPMCMFA(::MoleMole::Config::ConfigRabGame* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigRabGame*))((::PBYTE)hIl2Cpp + BEMHEENDNCJ_OPIAMPMCMFA_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + BEMHEENDNCJ_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + BEMHEENDNCJ_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::MoleMole::Config::ConfigRabGame* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigRabGame*(*)())((::PBYTE)hIl2Cpp + BEMHEENDNCJ_COPIDBEMEIE_OFFSET))();
	}
};
