#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EntitySkillType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class SkillTypeToAttackTagsConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OEHADFJKOIA_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x1843CA80)
#define OEHADFJKOIA_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x1843CD50)
#define OEHADFJKOIA_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x1843CC60)
#define OEHADFJKOIA_FMMAOJOKMPK_OFFSET UNITYSDK_OFFSET(0x1843C5E0)
#define OEHADFJKOIA_OPIAMPMCMFA_OFFSET UNITYSDK_OFFSET(0x1843CF70)

inline static constexpr unsigned int OEHADFJKOIA_TypeDefinitionIndex = 79090;

class OEHADFJKOIA : public ::System::Object
{
public:
	static ::MoleMole::Config::SkillTypeToAttackTagsConfig** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::SkillTypeToAttackTagsConfig**)Il2CppClass::FromTypeDefinitionIndex(OEHADFJKOIA_TypeDefinitionIndex)->GetStaticField(0x45820);
	}

	static ::System::Boolean FMMAOJOKMPK(::System::Collections::Generic::List_1<::System::String*>* JMDOANHOEJG, ::MoleMole::Config::EntitySkillType& BBDHPBAPPPI)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::String*>*, ::MoleMole::Config::EntitySkillType&))((::PBYTE)hIl2Cpp + OEHADFJKOIA_FMMAOJOKMPK_OFFSET))(JMDOANHOEJG, BBDHPBAPPPI);
	}

	static ::MoleMole::Config::SkillTypeToAttackTagsConfig* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::SkillTypeToAttackTagsConfig*(*)())((::PBYTE)hIl2Cpp + OEHADFJKOIA_COPIDBEMEIE_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + OEHADFJKOIA_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + OEHADFJKOIA_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Void OPIAMPMCMFA(::MoleMole::Config::SkillTypeToAttackTagsConfig* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::MoleMole::Config::SkillTypeToAttackTagsConfig*))((::PBYTE)hIl2Cpp + OEHADFJKOIA_OPIAMPMCMFA_OFFSET))(EGEGIMGMJHN);
	}
};
