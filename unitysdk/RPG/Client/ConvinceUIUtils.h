#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TalkConvinceTalkingSide.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class ConvinceTrickSkillGroup; }
namespace System { class Tuple; }

#define RPG_CLIENT_CONVINCEUIUTILS_GETCONVINCEGAMEPLAYNPCID_OFFSET UNITYSDK_OFFSET(0xCBC7FD0)
#define RPG_CLIENT_CONVINCEUIUTILS_GETCONVINCESPLITELINEPOS_OFFSET UNITYSDK_OFFSET(0xCBC81A0)
#define RPG_CLIENT_CONVINCEUIUTILS_GETHP_OFFSET UNITYSDK_OFFSET(0xCBC7780)
#define RPG_CLIENT_CONVINCEUIUTILS_GETNAMETEXTS_OFFSET UNITYSDK_OFFSET(0xCBC7AC0)
#define RPG_CLIENT_CONVINCEUIUTILS_GETSKILLINFO_OFFSET UNITYSDK_OFFSET(0xCBC7E30)
#define RPG_CLIENT_CONVINCEUIUTILS_GETTALKINGSIDE_OFFSET UNITYSDK_OFFSET(0xCBC7C60)
#define RPG_CLIENT_CONVINCEUIUTILS_GETTURN_OFFSET UNITYSDK_OFFSET(0xCBC7920)

namespace RPG::Client
{
	class ConvinceUIUtils : public ::System::Object
	{
	public:
		static ::System::Int32 GetHP()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCEUIUTILS_GETHP_OFFSET))();
		}

		static ::System::Tuple* GetTurn()
		{
			return ((::System::Tuple*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCEUIUTILS_GETTURN_OFFSET))();
		}

		static ::System::Tuple* GetNameTexts()
		{
			return ((::System::Tuple*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCEUIUTILS_GETNAMETEXTS_OFFSET))();
		}

		static ::RPG::Client::TalkConvinceTalkingSide GetTalkingSide()
		{
			return ((::RPG::Client::TalkConvinceTalkingSide(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCEUIUTILS_GETTALKINGSIDE_OFFSET))();
		}

		static ::RPG::Client::ConvinceTrickSkillGroup* GetSkillInfo()
		{
			return ((::RPG::Client::ConvinceTrickSkillGroup*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCEUIUTILS_GETSKILLINFO_OFFSET))();
		}

		static ::System::UInt32 GetConvinceGameplayNPCID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCEUIUTILS_GETCONVINCEGAMEPLAYNPCID_OFFSET))();
		}

		static ::System::Single GetConvinceSpliteLinePos()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCEUIUTILS_GETCONVINCESPLITELINEPOS_OFFSET))();
		}

	};
}
