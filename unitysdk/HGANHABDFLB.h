#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMJGKNJKHCH;
namespace RPG::Client { class IRogueFormulaBuffCountItem; }
namespace RPG::GameCore { class RogueTournFormulaRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define HGANHABDFLB_CTOR_OFFSET UNITYSDK_OFFSET(0x15C8EDB0)
#define HGANHABDFLB_GET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0x15C8F0A0)
#define HGANHABDFLB_GET_MAINITEM_OFFSET UNITYSDK_OFFSET(0x15C8F080)
#define HGANHABDFLB_GET_SUBITEM_OFFSET UNITYSDK_OFFSET(0x15C8F090)

	class HGANHABDFLB : public ::System::Object
	{
	public:
		::RPG::Client::IRogueFormulaBuffCountItem* _MainItem_k__BackingField; // 0x10
		::RPG::Client::IRogueFormulaBuffCountItem* _SubItem_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::GameCore::RogueTournFormulaRow* a1, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>* a2, ::OMJGKNJKHCH* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournFormulaRow*, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>*, ::OMJGKNJKHCH*))((::PBYTE)hIl2Cpp + HGANHABDFLB_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::IRogueFormulaBuffCountItem* get_MainItem()
		{
			return ((::RPG::Client::IRogueFormulaBuffCountItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGANHABDFLB_GET_MAINITEM_OFFSET))(this);
		}

		::RPG::Client::IRogueFormulaBuffCountItem* get_SubItem()
		{
			return ((::RPG::Client::IRogueFormulaBuffCountItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGANHABDFLB_GET_SUBITEM_OFFSET))(this);
		}

		::System::Boolean get_IsActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGANHABDFLB_GET_ISACTIVATED_OFFSET))(this);
		}

	};
