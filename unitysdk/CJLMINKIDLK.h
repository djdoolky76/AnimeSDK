#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSceneSound; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CJLMINKIDLK_BEHKHDHPPNJ_OFFSET UNITYSDK_OFFSET(0x193E1620)
#define CJLMINKIDLK_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x193E0DB0)
#define CJLMINKIDLK_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x193E0CC0)
#define CJLMINKIDLK_JFGNAICJJAC_OFFSET UNITYSDK_OFFSET(0x193E0AE0)
#define CJLMINKIDLK_NKLPDEBMBEG_OFFSET UNITYSDK_OFFSET(0x193E12A0)

inline static constexpr unsigned int CJLMINKIDLK_TypeDefinitionIndex = 79039;

class CJLMINKIDLK : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigSceneSound** StaticGet_HGFIHOMHIKD()
	{
		return (::MoleMole::Config::ConfigSceneSound**)Il2CppClass::FromTypeDefinitionIndex(CJLMINKIDLK_TypeDefinitionIndex)->GetStaticField(0x3A6F0);
	}

	static ::MoleMole::Config::ConfigSceneSound* JFGNAICJJAC()
	{
		return ((::MoleMole::Config::ConfigSceneSound*(*)())((::PBYTE)hIl2Cpp + CJLMINKIDLK_JFGNAICJJAC_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CJLMINKIDLK_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::String* NKLPDEBMBEG(::System::String* JNEPCCIHBMB)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CJLMINKIDLK_NKLPDEBMBEG_OFFSET))(JNEPCCIHBMB);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CJLMINKIDLK_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Single BEHKHDHPPNJ()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CJLMINKIDLK_BEHKHDHPPNJ_OFFSET))();
	}
};
