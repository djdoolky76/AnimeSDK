#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BFNKBDEHDIB;
namespace MoleMole { class UIActivityDemoTrialBGEffectWidgetController; }
namespace MoleMole { class UIBaseController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define MHNDMKKIELH_OHGDKHCECEB_OFFSET UNITYSDK_OFFSET(0x156AEF60)
#define MHNDMKKIELH__CTOR_OFFSET UNITYSDK_OFFSET(0x156AEF50)

inline static constexpr unsigned int MHNDMKKIELH_TypeDefinitionIndex = 45825;

class MHNDMKKIELH : public ::System::Object
{
public:
	// static const ::System::String* KBAHAHJAENE; // 0x0
	// static const ::System::String* PBACMLEEKHI; // 0x0
	// static const ::System::String* KPNHDGLBGHE; // 0x0
	::UnityEngine::RectTransform* KEMCCOLLBMC; // 0x10
	::MoleMole::UIBaseController* PFPOPCJCCAI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNDMKKIELH__CTOR_OFFSET))(this);
	}

	::MoleMole::UIActivityDemoTrialBGEffectWidgetController* OHGDKHCECEB(::BFNKBDEHDIB* CJBLJHOPGAO, ::System::Collections::Generic::List_1<::System::Int32>* DGACMNMNDBN, ::System::Action* OPEFHGLAJAM, ::System::Boolean LCCFFLGFHJC)
	{
		return ((::MoleMole::UIActivityDemoTrialBGEffectWidgetController*(*)(::PVOID, ::BFNKBDEHDIB*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MHNDMKKIELH_OHGDKHCECEB_OFFSET))(this, CJBLJHOPGAO, DGACMNMNDBN, OPEFHGLAJAM, LCCFFLGFHJC);
	}
};
