#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ActionDelayPreshowConfig; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskContext; }

#define HDIDIKHODME_FCLNOGCGLJD_OFFSET UNITYSDK_OFFSET(0x15C29370)
#define HDIDIKHODME_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x15C28880)
#define HDIDIKHODME_NNONJODGLLB_OFFSET UNITYSDK_OFFSET(0x15C29120)
#define HDIDIKHODME_PJCIPFDONBD_OFFSET UNITYSDK_OFFSET(0x15C29250)

inline static constexpr unsigned int HDIDIKHODME_TypeDefinitionIndex = 53624;

	class HDIDIKHODME : public ::System::Object
	{
	public:
		static ::RPG::GameCore::ActionDelayPreshowConfig* KFGJEKJHIMB(::RPG::GameCore::ActionDelayPreshowConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::RPG::GameCore::ActionDelayPreshowConfig*(*)(::RPG::GameCore::ActionDelayPreshowConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + HDIDIKHODME_KFGJEKJHIMB_OFFSET))(a1, a2);
		}

		static ::System::Void NNONJODGLLB(::RPG::GameCore::ActionDelayPreshowConfig* a1, ::RPG::GameCore::ActionDelayPreshowConfig* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActionDelayPreshowConfig*, ::RPG::GameCore::ActionDelayPreshowConfig*))((::PBYTE)hIl2Cpp + HDIDIKHODME_NNONJODGLLB_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::DynamicFloat* PJCIPFDONBD(::RPG::GameCore::ActionDelayPreshowConfig* a1, ::RPG::GameCore::DynamicFloat* a2, ::RPG::GameCore::DynamicFloat* a3)
		{
			return ((::RPG::GameCore::DynamicFloat*(*)(::RPG::GameCore::ActionDelayPreshowConfig*, ::RPG::GameCore::DynamicFloat*, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + HDIDIKHODME_PJCIPFDONBD_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::DynamicFloat* FCLNOGCGLJD(::RPG::GameCore::ActionDelayPreshowConfig* a1, ::RPG::GameCore::DynamicFloat* a2, ::RPG::GameCore::DynamicFloat* a3)
		{
			return ((::RPG::GameCore::DynamicFloat*(*)(::RPG::GameCore::ActionDelayPreshowConfig*, ::RPG::GameCore::DynamicFloat*, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + HDIDIKHODME_FCLNOGCGLJD_OFFSET))(a1, a2, a3);
		}

	};
