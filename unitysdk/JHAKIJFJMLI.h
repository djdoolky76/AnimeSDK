#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/Config/LanguageFontSizeConfig.h"

namespace MoleMole::Config { class ConfigUIFontSize; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define JHAKIJFJMLI_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x14A7C8A0)
#define JHAKIJFJMLI_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x14A7D0E0)
#define JHAKIJFJMLI_IOLEBAABNCO_OFFSET UNITYSDK_OFFSET(0x14A7CAC0)

inline static constexpr unsigned int JHAKIJFJMLI_TypeDefinitionIndex = 61872;

class JHAKIJFJMLI : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigUIFontSize** StaticGet_LLFNJGGHCBG()
	{
		return (::MoleMole::Config::ConfigUIFontSize**)Il2CppClass::FromTypeDefinitionIndex(JHAKIJFJMLI_TypeDefinitionIndex)->GetStaticField(0x4BCA0);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + JHAKIJFJMLI_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Boolean IOLEBAABNCO(::System::String* MGMDLMBEDJF, ::MoleMole::LanguageType CBMOOALPNHB, ::MoleMole::Config::LanguageFontSizeConfig& IGAAKDOIPNN, ::System::Boolean& PBMGAKFGNFJ)
	{
		return ((::System::Boolean(*)(::System::String*, ::MoleMole::LanguageType, ::MoleMole::Config::LanguageFontSizeConfig&, ::System::Boolean&))((::PBYTE)hIl2Cpp + JHAKIJFJMLI_IOLEBAABNCO_OFFSET))(MGMDLMBEDJF, CBMOOALPNHB, IGAAKDOIPNN, PBMGAKFGNFJ);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + JHAKIJFJMLI_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};
