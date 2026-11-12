#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterAlertLevel.h"
#include "unitysdk/RPG/GameCore/StandByStance.h"
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class ST_Side_OverrideStandByStance; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NOGBHLKHOHJ_CCTOR_OFFSET UNITYSDK_OFFSET(0xC5D7F20)
#define NOGBHLKHOHJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC5D7C90)
#define NOGBHLKHOHJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC5D7D50)
#define NOGBHLKHOHJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC5D7E90)

inline static constexpr unsigned int NOGBHLKHOHJ_TypeDefinitionIndex = 53348;

	class NOGBHLKHOHJ
	{
	public:
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x28
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StandByStance, ::RPG::GameCore::CharacterAlertLevel>** StaticGet_IAAMIFJFLBA()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StandByStance, ::RPG::GameCore::CharacterAlertLevel>**)UnitySDK::FromName("", "NOGBHLKHOHJ")->GetStaticField(0x58DC0);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_OverrideStandByStance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_OverrideStandByStance*))((::PBYTE)hIl2Cpp + NOGBHLKHOHJ_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOGBHLKHOHJ_CCTOR_OFFSET))();
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGBHLKHOHJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGBHLKHOHJ_ONTASKRESET_OFFSET))(this);
		}

	};
