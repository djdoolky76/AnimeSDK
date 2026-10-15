#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimEffectItem; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define JEKAHBPEMCH___C__DISPLAYCLASS40_0_CTOR_OFFSET UNITYSDK_OFFSET(0x16626440)

inline static constexpr unsigned int JEKAHBPEMCH___c__DisplayClass40_0_TypeDefinitionIndex = 76707;

	class JEKAHBPEMCH___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FiveDimEffectItem*, ::UnityEngine::GameObject*>* effectEntityDict; // 0x18
		::System::Boolean needRefresh; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKAHBPEMCH___C__DISPLAYCLASS40_0_CTOR_OFFSET))(this);
		}

	};
