#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class GKDEEFFEOLL;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBOSSCHALLENGETEAMAPPLYPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18D36510)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeTeamApplyPopWindowController_Context_TypeDefinitionIndex = 63058;

	class UIBossChallengeTeamApplyPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* SquadToolLayers; // 0x28
		::System::Collections::Generic::List_1<::GKDEEFFEOLL*>* TeamInfos; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGETEAMAPPLYPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
