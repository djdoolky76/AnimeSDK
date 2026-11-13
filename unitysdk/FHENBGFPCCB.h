#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/UINavigation/UINavigationDirection.h"
#include "unitysdk/System/Object.h"
namespace RPG::UINavigation { class UINavigation; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::UI { class Selectable; }

#define FHENBGFPCCB_CTOR_OFFSET UNITYSDK_OFFSET(0x18AA25B0)
#define FHENBGFPCCB_FJDINLJFEMO_OFFSET UNITYSDK_OFFSET(0x18AA24B0)
#define FHENBGFPCCB_OILKGMEPLAE_OFFSET UNITYSDK_OFFSET(0x18AA2530)

inline static constexpr unsigned int FHENBGFPCCB_TypeDefinitionIndex = 52830;

	class FHENBGFPCCB : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigation*>* HCMNDMHLIAA; // 0x10
		::UnityEngine::EventSystems::BaseEventData* GFJEHNAGJNM; // 0x18
		::UnityEngine::UI::Selectable* PGHLJLIHPPP; // 0x20
		::RPG::UINavigation::UINavigationDirection LJDHGFECMHJ; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHENBGFPCCB_CTOR_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigation* FJDINLJFEMO()
		{
			return ((::RPG::UINavigation::UINavigation*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHENBGFPCCB_FJDINLJFEMO_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigation* OILKGMEPLAE()
		{
			return ((::RPG::UINavigation::UINavigation*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHENBGFPCCB_OILKGMEPLAE_OFFSET))(this);
		}

	};
