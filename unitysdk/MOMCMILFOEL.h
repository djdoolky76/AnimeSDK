#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace MoleMole::Config { class ConfigAnimatorEventPattern; }
namespace System { class String; }

#define MOMCMILFOEL_LKAHGEIKMBP_OFFSET UNITYSDK_OFFSET(0x177D75C0)
#define MOMCMILFOEL_OPBLGBIMDIH_OFFSET UNITYSDK_OFFSET(0x177D7480)
#define MOMCMILFOEL_PMMGDNJHBAP_OFFSET UNITYSDK_OFFSET(0x177D7820)

inline static constexpr unsigned int MOMCMILFOEL_TypeDefinitionIndex = 74709;

class MOMCMILFOEL : public ::System::Object
{
public:
	static ::System::Void OPBLGBIMDIH(::MoleMole::Config::ConfigAnimatorEventPattern* KBCCBKNJJOO, ::System::String* EHPDFPIHAGC, ::System::Boolean NPPMJEIPMFC)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigAnimatorEventPattern*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOMCMILFOEL_OPBLGBIMDIH_OFFSET))(KBCCBKNJJOO, EHPDFPIHAGC, NPPMJEIPMFC);
	}

	static ::Il2CppArray<::MoleMole::Config::AnimatorEvent*>* LKAHGEIKMBP(::Il2CppArray<::MoleMole::Config::AnimatorEventEntry*>* EFBHDHJCDCP, ::System::String* EHPDFPIHAGC, ::System::String* IDKCFBPCECO)
	{
		return ((::Il2CppArray<::MoleMole::Config::AnimatorEvent*>*(*)(::Il2CppArray<::MoleMole::Config::AnimatorEventEntry*>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOMCMILFOEL_LKAHGEIKMBP_OFFSET))(EFBHDHJCDCP, EHPDFPIHAGC, IDKCFBPCECO);
	}

	static ::MoleMole::Config::AnimatorEvent* PMMGDNJHBAP(::MoleMole::Config::AnimatorEventEntry* AAIJGGIEOGK, ::System::String* EHPDFPIHAGC, ::System::String* IDKCFBPCECO)
	{
		return ((::MoleMole::Config::AnimatorEvent*(*)(::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOMCMILFOEL_PMMGDNJHBAP_OFFSET))(AAIJGGIEOGK, EHPDFPIHAGC, IDKCFBPCECO);
	}
};
