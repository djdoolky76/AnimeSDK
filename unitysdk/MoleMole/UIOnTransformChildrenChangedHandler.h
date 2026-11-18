#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIONTRANSFORMCHILDRENCHANGEDHANDLER_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x147E8120)
#define MOLEMOLE_UIONTRANSFORMCHILDRENCHANGEDHANDLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x147E8080)
#define MOLEMOLE_UIONTRANSFORMCHILDRENCHANGEDHANDLER_ONTRANSFORMCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0x147E8000)
#define MOLEMOLE_UIONTRANSFORMCHILDRENCHANGEDHANDLER_REGISTERONTRANSFORMCHILDRENCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x147E7FB0)
#define MOLEMOLE_UIONTRANSFORMCHILDRENCHANGEDHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x147E80D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIOnTransformChildrenChangedHandler_TypeDefinitionIndex = 58008;

	class UIOnTransformChildrenChangedHandler : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::System::Action_1<::MoleMole::UIOnTransformChildrenChangedHandler*>* EJGDHCIBCJH; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONTRANSFORMCHILDRENCHANGEDHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void RegisterOnTransformChildrenChangedCallback(::System::Action_1<::MoleMole::UIOnTransformChildrenChangedHandler*>* EJGDHCIBCJH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::UIOnTransformChildrenChangedHandler*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONTRANSFORMCHILDRENCHANGEDHANDLER_REGISTERONTRANSFORMCHILDRENCHANGEDCALLBACK_OFFSET))(this, EJGDHCIBCJH);
		}

		::System::Void OnTransformChildrenChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONTRANSFORMCHILDRENCHANGEDHANDLER_ONTRANSFORMCHILDRENCHANGED_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONTRANSFORMCHILDRENCHANGEDHANDLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void IFHNMAGGFAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONTRANSFORMCHILDRENCHANGEDHANDLER_IFHNMAGGFAE_OFFSET))(this);
		}
	};
}
