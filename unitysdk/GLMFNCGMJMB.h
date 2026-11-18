#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGroupVideo; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define GLMFNCGMJMB_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x125E1D60)
#define GLMFNCGMJMB_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x125E2160)
#define GLMFNCGMJMB_JGBAEAFDKJB_OFFSET UNITYSDK_OFFSET(0x125E1F80)

inline static constexpr unsigned int GLMFNCGMJMB_TypeDefinitionIndex = 74087;

class GLMFNCGMJMB : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigGroupVideo** StaticGet_JMKPKGJCFHJ()
	{
		return (::MoleMole::Config::ConfigGroupVideo**)Il2CppClass::FromTypeDefinitionIndex(GLMFNCGMJMB_TypeDefinitionIndex)->GetStaticField(0x49C70);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + GLMFNCGMJMB_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::Config::ConfigGroupVideo* JGBAEAFDKJB()
	{
		return ((::MoleMole::Config::ConfigGroupVideo*(*)())((::PBYTE)hIl2Cpp + GLMFNCGMJMB_JGBAEAFDKJB_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + GLMFNCGMJMB_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};
