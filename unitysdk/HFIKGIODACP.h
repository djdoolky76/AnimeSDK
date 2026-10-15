#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TrainPartyCreateAvatarEntity; }

#define HFIKGIODACP_CKMECJOLLFB_OFFSET UNITYSDK_OFFSET(0x15C7B8B0)
#define HFIKGIODACP_CTOR_OFFSET UNITYSDK_OFFSET(0x15C7B130)
#define HFIKGIODACP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C7B140)
#define HFIKGIODACP_EJBFCOJNMHC_OFFSET UNITYSDK_OFFSET(0x15C7B9C0)
#define HFIKGIODACP_KBCBIPHIBAG_OFFSET UNITYSDK_OFFSET(0x15C7B1A0)
#define HFIKGIODACP_OBFAHCBHFLP_OFFSET UNITYSDK_OFFSET(0x15C7B3F0)
#define HFIKGIODACP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C7B3A0)
#define HFIKGIODACP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15C7B800)
#define HFIKGIODACP_TICK_OFFSET UNITYSDK_OFFSET(0x15C7B850)

inline static constexpr unsigned int HFIKGIODACP_TypeDefinitionIndex = 53420;

	class HFIKGIODACP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TrainPartyCreateAvatarEntity* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Boolean GJDJPGBBACF; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TrainPartyCreateAvatarEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TrainPartyCreateAvatarEntity*))((::PBYTE)hIl2Cpp + HFIKGIODACP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIKGIODACP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIKGIODACP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIKGIODACP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HFIKGIODACP_TICK_OFFSET))(this, a1);
		}

		::System::UInt32 CKMECJOLLFB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIKGIODACP_CKMECJOLLFB_OFFSET))(this);
		}

		::System::Void EJBFCOJNMHC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HFIKGIODACP_EJBFCOJNMHC_OFFSET))(this, a1);
		}

		::System::Void OBFAHCBHFLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIKGIODACP_OBFAHCBHFLP_OFFSET))(this);
		}

		::System::Void KBCBIPHIBAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIKGIODACP_KBCBIPHIBAG_OFFSET))(this);
		}

	};
