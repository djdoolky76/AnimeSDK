#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimEffectItem; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define JEKAHBPEMCH___C__DISPLAYCLASS47_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB97E060)

inline static constexpr unsigned int JEKAHBPEMCH___c__DisplayClass47_0_TypeDefinitionIndex = 79041;

	class JEKAHBPEMCH___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FiveDimEffectItem*, ::UnityEngine::GameObject*>* effectEntityDict; // 0x10
		::System::Action* callback; // 0x18
		::System::Boolean needRefresh; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKAHBPEMCH___C__DISPLAYCLASS47_0_CTOR_OFFSET))(this);
		}

	};
