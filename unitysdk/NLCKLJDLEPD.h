#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleFlowStateType.h"
#include "unitysdk/System/Object.h"
class CBFJBNFLHJE;
namespace RPG::GameCore { class BaseExpeditionBattleAction; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define NLCKLJDLEPD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBC5C740)
#define NLCKLJDLEPD_CTOR_OFFSET UNITYSDK_OFFSET(0xBC5C7D0)

inline static constexpr unsigned int NLCKLJDLEPD_TypeDefinitionIndex = 63905;

	class NLCKLJDLEPD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCKLJDLEPD_CTOR_OFFSET))(this);
		}

		::CBFJBNFLHJE* BPLPBPMEODA(::RPG::GameCore::ExpeditionBattleFlowStateType a1, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::BaseExpeditionBattleAction*>* a2)
		{
			return ((::CBFJBNFLHJE*(*)(::PVOID, ::RPG::GameCore::ExpeditionBattleFlowStateType, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::BaseExpeditionBattleAction*>*))((::PBYTE)hIl2Cpp + NLCKLJDLEPD_BPLPBPMEODA_OFFSET))(this, a1, a2);
		}

	};
