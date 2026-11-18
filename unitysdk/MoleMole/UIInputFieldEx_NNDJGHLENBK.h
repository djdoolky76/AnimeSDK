#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JDAHJPLCIFN_FPHEEHPBPOE;
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class InputField_OnValidateInput; }

#define MOLEMOLE_UIINPUTFIELDEX_NNDJGHLENBK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x175F5790)
#define MOLEMOLE_UIINPUTFIELDEX_NNDJGHLENBK__CTOR_2_OFFSET UNITYSDK_OFFSET(0x175F57B0)
#define MOLEMOLE_UIINPUTFIELDEX_NNDJGHLENBK__CTOR_3_OFFSET UNITYSDK_OFFSET(0x175F5860)
#define MOLEMOLE_UIINPUTFIELDEX_NNDJGHLENBK__CTOR_OFFSET UNITYSDK_OFFSET(0x175F5780)

namespace MoleMole
{
	inline static constexpr unsigned int UIInputFieldEx_NNDJGHLENBK_TypeDefinitionIndex = 55480;

	class UIInputFieldEx_NNDJGHLENBK : public ::System::Object
	{
	public:
		::System::Action* LJAIGFGJOKB; // 0x10
		::UnityEngine::UI::InputField* IBOGKHFOMKG; // 0x18
		::UnityEngine::UI::InputField_OnValidateInput* CAJGAEJKKHJ; // 0x20
		::System::Action* ALKJDFOFLOG; // 0x28
		::UnityEngine::Events::UnityAction_1<::System::String*>* HMIAMGGOOLF; // 0x30

		::System::Void _ctor(::UnityEngine::Events::UnityAction_1<::System::String*>* HMIAMGGOOLF)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINPUTFIELDEX_NNDJGHLENBK__CTOR_OFFSET))(this, HMIAMGGOOLF);
		}

		::System::Void _ctor_1(::System::Action* ALKJDFOFLOG, ::System::Action* LJAIGFGJOKB, ::UnityEngine::UI::InputField_OnValidateInput* CAJGAEJKKHJ, ::UnityEngine::Events::UnityAction_1<::System::String*>* HMIAMGGOOLF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*, ::UnityEngine::UI::InputField_OnValidateInput*, ::UnityEngine::Events::UnityAction_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINPUTFIELDEX_NNDJGHLENBK__CTOR_1_OFFSET))(this, ALKJDFOFLOG, LJAIGFGJOKB, CAJGAEJKKHJ, HMIAMGGOOLF);
		}

		::System::Void _ctor_2(::System::Action* ALKJDFOFLOG, ::System::Action* LJAIGFGJOKB, ::JDAHJPLCIFN_FPHEEHPBPOE* CAJGAEJKKHJ, ::UnityEngine::Events::UnityAction_1<::System::String*>* HMIAMGGOOLF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*, ::JDAHJPLCIFN_FPHEEHPBPOE*, ::UnityEngine::Events::UnityAction_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINPUTFIELDEX_NNDJGHLENBK__CTOR_2_OFFSET))(this, ALKJDFOFLOG, LJAIGFGJOKB, CAJGAEJKKHJ, HMIAMGGOOLF);
		}

		::System::Void _ctor_3(::System::Action* ALKJDFOFLOG, ::System::Action* LJAIGFGJOKB, ::JDAHJPLCIFN_FPHEEHPBPOE* CAJGAEJKKHJ, ::UnityEngine::Events::UnityAction_1<::System::String*>* HMIAMGGOOLF, ::UnityEngine::UI::InputField* IBOGKHFOMKG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*, ::JDAHJPLCIFN_FPHEEHPBPOE*, ::UnityEngine::Events::UnityAction_1<::System::String*>*, ::UnityEngine::UI::InputField*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINPUTFIELDEX_NNDJGHLENBK__CTOR_3_OFFSET))(this, ALKJDFOFLOG, LJAIGFGJOKB, CAJGAEJKKHJ, HMIAMGGOOLF, IBOGKHFOMKG);
		}
	};
}
