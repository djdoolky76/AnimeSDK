#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/HCKAMCEHGII.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIFont; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Font; }

#define ILELCAIEEDL_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x160B3540)
#define ILELCAIEEDL_DEKNOKDIJFB_OFFSET UNITYSDK_OFFSET(0x160B33B0)
#define ILELCAIEEDL_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x160B3430)
#define ILELCAIEEDL_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x160B3760)
#define ILELCAIEEDL_MBMEPKHKGAL_OFFSET UNITYSDK_OFFSET(0x160B2C30)
#define ILELCAIEEDL__CCTOR_OFFSET UNITYSDK_OFFSET(0x160B2B90)

inline static constexpr unsigned int ILELCAIEEDL_TypeDefinitionIndex = 48047;

class ILELCAIEEDL : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigUIFont** StaticGet_EKKNNCHCFJE()
	{
		return (::MoleMole::Config::ConfigUIFont**)Il2CppClass::FromTypeDefinitionIndex(ILELCAIEEDL_TypeDefinitionIndex)->GetStaticField(0x4D370);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>** StaticGet_HLLDDDJBFIN()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>**)Il2CppClass::FromTypeDefinitionIndex(ILELCAIEEDL_TypeDefinitionIndex)->GetStaticField(0x4D378);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILELCAIEEDL__CCTOR_OFFSET))();
	}

	static ::System::Boolean MBMEPKHKGAL(::System::String* ABFOABHBENH, ::MoleMole::LanguageType CBMOOALPNHB, ::HCKAMCEHGII IFBIKDHCCOF, ::UnityEngine::Font*& IENBFJLOJNG, ::System::Boolean HDPKFPHECJD)
	{
		return ((::System::Boolean(*)(::System::String*, ::MoleMole::LanguageType, ::HCKAMCEHGII, ::UnityEngine::Font*&, ::System::Boolean))((::PBYTE)hIl2Cpp + ILELCAIEEDL_MBMEPKHKGAL_OFFSET))(ABFOABHBENH, CBMOOALPNHB, IFBIKDHCCOF, IENBFJLOJNG, HDPKFPHECJD);
	}

	static ::System::Void DEKNOKDIJFB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILELCAIEEDL_DEKNOKDIJFB_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + ILELCAIEEDL_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + ILELCAIEEDL_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::Config::ConfigUIFont* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigUIFont*(*)())((::PBYTE)hIl2Cpp + ILELCAIEEDL_KGNEJKNNODJ_OFFSET))();
	}
};
