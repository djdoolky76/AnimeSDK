#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class CaculateNodeData; }

#define RPG_CLIENT_SYNCTRANSFORMUTILITY_CTOR_OFFSET UNITYSDK_OFFSET(0xE179E70)
#define RPG_CLIENT_SYNCTRANSFORMUTILITY_LHGPLAADDHJ_OFFSET UNITYSDK_OFFSET(0xE179CA0)
#define RPG_CLIENT_SYNCTRANSFORMUTILITY_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0xE179E00)
#define RPG_CLIENT_SYNCTRANSFORMUTILITY_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0xE179D50)
#define RPG_CLIENT_SYNCTRANSFORMUTILITY_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0xE179210)

namespace RPG::Client
{
	inline static constexpr unsigned int SyncTransformUtility_TypeDefinitionIndex = 72669;

	class SyncTransformUtility : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::UnityEngine::RectTransform* mTargetRectransform; // 0x18
		::UnityEngine::RectTransform* GDADHACLKFF; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::UI::CaculateNodeData*>* mNodes; // 0x28
		::UnityEngine::UI::CaculateNodeData* KMBBPCMOBGO; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYNCTRANSFORMUTILITY_CTOR_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYNCTRANSFORMUTILITY_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* LHGPLAADDHJ()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYNCTRANSFORMUTILITY_LHGPLAADDHJ_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYNCTRANSFORMUTILITY_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYNCTRANSFORMUTILITY_ONAFTERDESERIALIZE_OFFSET))(this);
		}

	};
}
