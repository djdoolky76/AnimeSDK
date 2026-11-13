#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TimeRewindState.h"
#include "unitysdk/System/Object.h"
class BNGHOKMIDGD;
class DHAEANMEFLE_KFPGIOHMHDI;
namespace RPG::Client { class EntityTimelineControlNode; }
namespace RPG::Client { class EntityTimelineControlTrackInfo; }
namespace RPG::GameCore { class EntityTimeRewindComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define DHAEANMEFLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1ADC76B0)
#define DHAEANMEFLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ADC7630)

inline static constexpr unsigned int DHAEANMEFLE_TypeDefinitionIndex = 62193;

	class DHAEANMEFLE : public ::System::Object
	{
	public:
		::System::Action* FDJAJEOODLO; // 0x10
		::System::Action_1<::System::Single>* AMLGIFLGNMG; // 0x18
		::BNGHOKMIDGD* EAJIJPKHOGD; // 0x20
		::System::Action* FBPPKLEJBPI; // 0x28
		::System::Action_2<::System::Single, ::System::Single>* GKMPBLLMLJP; // 0x30
		::System::Action_1<::System::Boolean>* JHOGKNLACCD; // 0x38
		::System::Action_2<::RPG::Client::EntityTimelineControlNode*, ::System::Boolean>* LNLAEDJGFIJ; // 0x40
		::DHAEANMEFLE_KFPGIOHMHDI* NCHLMFAFMNE; // 0x48
		::System::Action* NCCFDHMLKPJ; // 0x50
		::System::Action_1<::System::Boolean>* EDMLMIKCKEH; // 0x58
		::RPG::GameCore::EntityTimeRewindComponent* NPJFJEKNJLH; // 0x60
		::System::Action_1<::RPG::Client::EntityTimelineControlNode*>* BLAJJDGMBNE; // 0x68
		::System::Action_1<::System::Boolean>* IKBHFONCBKL; // 0x70
		::System::Action_1<::RPG::GameCore::TimeRewindState>* MLKHGLJJEFH; // 0x78
		::System::Action* KCLOMBMDLMC; // 0x80
		::RPG::Client::EntityTimelineControlTrackInfo* MJLMHCLCIIG; // 0x88
		::RPG::GameCore::GameEntity* EOBLJJBOBIN; // 0x90
		::System::Func_2<::RPG::Client::EntityTimelineControlNode*, ::System::Boolean>* PPFAPGFMGND; // 0x98
		::System::Action_1<::RPG::Client::EntityTimelineControlNode*>* NBBILGGGLFI; // 0xA0
		::System::Action* HDBMPGIICFC; // 0xA8
		::System::Action* HFNONNMKLAN; // 0xB0
		::System::Action* DMAKJKLLHJE; // 0xB8
		::System::Action* OKCKIJJIFHL; // 0xC0
		::System::Action* OGOFLCJPOFO; // 0xC8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHAEANMEFLE_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHAEANMEFLE_DISPOSE_OFFSET))(this);
		}

	};
