#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/BossSkillViewType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class BDELHFKGEEI;
namespace System { class String; }

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEBOSSSKILLWARNINGHINTMESSAGE_CTOR_OFFSET UNITYSDK_OFFSET(0xE1E4990)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEBOSSSKILLWARNINGHINTMESSAGE_GET_DESC_OFFSET UNITYSDK_OFFSET(0xE1E4A90)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEBOSSSKILLWARNINGHINTMESSAGE_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xE1E49D0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEBOSSSKILLWARNINGHINTMESSAGE_GET_ISICE_OFFSET UNITYSDK_OFFSET(0xE1E4BA0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEBOSSSKILLWARNINGHINTMESSAGE_GET_ISWIND_OFFSET UNITYSDK_OFFSET(0xE1E4B50)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEBOSSSKILLWARNINGHINTMESSAGE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xE1E4A20)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEBOSSSKILLWARNINGHINTMESSAGE_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0xE1E4B00)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersGameBossSkillWarningHintMessage_TypeDefinitionIndex = 79010;

	class TeamTowersGameBossSkillWarningHintMessage : public ::System::Object
	{
	public:
		::BDELHFKGEEI* _SkillRow; // 0x10
		::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillViewType _ViewType; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillViewType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillViewType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEBOSSSKILLWARNINGHINTMESSAGE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEBOSSSKILLWARNINGHINTMESSAGE_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEBOSSSKILLWARNINGHINTMESSAGE_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEBOSSSKILLWARNINGHINTMESSAGE_GET_DESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_ParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEBOSSSKILLWARNINGHINTMESSAGE_GET_PARAMLIST_OFFSET))(this);
		}

		::System::Boolean get_IsWind()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEBOSSSKILLWARNINGHINTMESSAGE_GET_ISWIND_OFFSET))(this);
		}

		::System::Boolean get_IsIce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEBOSSSKILLWARNINGHINTMESSAGE_GET_ISICE_OFFSET))(this);
		}

	};
}
