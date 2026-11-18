#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralLoginDropDownBoxRowWidgetController; }
namespace System { class String; }
namespace UnityEngine::Events { template <typename T1, typename T2> class UnityAction_2; }

#define OJDPGBEDCNF__CTOR_OFFSET UNITYSDK_OFFSET(0x16C1A6D0)

inline static constexpr unsigned int OJDPGBEDCNF_TypeDefinitionIndex = 55146;

class OJDPGBEDCNF : public ::System::Object
{
public:
	::UnityEngine::Events::UnityAction_2<::System::String*, ::MoleMole::UIGeneralLoginDropDownBoxRowWidgetController*>* EDOOKBBELNH; // 0x10
	::System::String* PDAPMNCCAKB; // 0x18
	::System::String* DEAAAMMKJMM; // 0x20
	::System::String* DNJAEJFJPMM; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJDPGBEDCNF__CTOR_OFFSET))(this);
	}
};
