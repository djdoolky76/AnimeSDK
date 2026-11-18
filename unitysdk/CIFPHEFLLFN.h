#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"

namespace MoleMole { class UIBangkovItemInfoWidgetController; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CIFPHEFLLFN_BLJBAAAAKKP_OFFSET UNITYSDK_OFFSET(0x147A0D80)

inline static constexpr unsigned int CIFPHEFLLFN_TypeDefinitionIndex = 59217;

class CIFPHEFLLFN : public ::System::Object
{
public:
	static ::System::Boolean BLJBAAAAKKP(::MoleMole::UIBangkovItemInfoWidgetController* LCLGIFECBML, ::System::Collections::Generic::IList_1<::UnityEngine::EventSystems::RaycastResult>* PAIGGOEJLPI)
	{
		return ((::System::Boolean(*)(::MoleMole::UIBangkovItemInfoWidgetController*, ::System::Collections::Generic::IList_1<::UnityEngine::EventSystems::RaycastResult>*))((::PBYTE)hIl2Cpp + CIFPHEFLLFN_BLJBAAAAKKP_OFFSET))(LCLGIFECBML, PAIGGOEJLPI);
	}
};
