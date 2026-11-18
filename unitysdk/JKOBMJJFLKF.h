#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMultiplayer; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define JKOBMJJFLKF_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x1C367200)
#define JKOBMJJFLKF_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x1C366FF0)
#define JKOBMJJFLKF_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x1C3673E0)

inline static constexpr unsigned int JKOBMJJFLKF_TypeDefinitionIndex = 48063;

class JKOBMJJFLKF : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigMultiplayer** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigMultiplayer**)Il2CppClass::FromTypeDefinitionIndex(JKOBMJJFLKF_TypeDefinitionIndex)->GetStaticField(0x44480);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + JKOBMJJFLKF_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::Config::ConfigMultiplayer* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigMultiplayer*(*)())((::PBYTE)hIl2Cpp + JKOBMJJFLKF_COPIDBEMEIE_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + JKOBMJJFLKF_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};
