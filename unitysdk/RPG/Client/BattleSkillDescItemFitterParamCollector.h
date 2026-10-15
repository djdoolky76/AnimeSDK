#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOGAOGMJHCK;
namespace RPG::Client { class BattleSkillDescItemFitterParamCollector; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_BATTLESKILLDESCITEMFITTERPARAMCOLLECTOR_ADDTEXTITEM_OFFSET UNITYSDK_OFFSET(0xC859FE0)
#define RPG_CLIENT_BATTLESKILLDESCITEMFITTERPARAMCOLLECTOR_CREATE_OFFSET UNITYSDK_OFFSET(0xC859ED0)
#define RPG_CLIENT_BATTLESKILLDESCITEMFITTERPARAMCOLLECTOR_CTOR_OFFSET UNITYSDK_OFFSET(0xC859F90)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleSkillDescItemFitterParamCollector_TypeDefinitionIndex = 71893;

	class BattleSkillDescItemFitterParamCollector : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::JOGAOGMJHCK*>* TextItemList; // 0x10
		::UnityEngine::RectTransform* FitterTransform; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESKILLDESCITEMFITTERPARAMCOLLECTOR_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BattleSkillDescItemFitterParamCollector* Create(::UnityEngine::RectTransform* a1)
		{
			return ((::RPG::Client::BattleSkillDescItemFitterParamCollector*(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESKILLDESCITEMFITTERPARAMCOLLECTOR_CREATE_OFFSET))(a1);
		}

		::System::Void AddTextItem(::UnityEngine::RectTransform* a1, ::UnityEngine::UI::Text* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESKILLDESCITEMFITTERPARAMCOLLECTOR_ADDTEXTITEM_OFFSET))(this, a1, a2);
		}

	};
}
