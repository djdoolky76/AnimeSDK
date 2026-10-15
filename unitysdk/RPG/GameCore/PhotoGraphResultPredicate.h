#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PhotoGraphResultPredicate; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PHOTOGRAPHRESULTPREDICATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D912560)
#define RPG_GAMECORE_PHOTOGRAPHRESULTPREDICATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D912330)

namespace RPG::GameCore
{
	class PhotoGraphResultPredicate : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::Client::TextID PredicateName; // 0x10
		::RPG::GameCore::PredicateConfig* Predicate; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPredicateSuccess; // 0x28
		::Il2CppArray<::System::String*>* BindContainerFlagNames; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHRESULTPREDICATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphResultPredicate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphResultPredicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHRESULTPREDICATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
