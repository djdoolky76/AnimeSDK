#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNIDIOCNBBI.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client { class MatchThreePlayRoleCutInCmd; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_MATCHTHREEPLAYROLECUTINCMD_CREATE_OFFSET UNITYSDK_OFFSET(0xDFFAEB0)
#define RPG_CLIENT_MATCHTHREEPLAYROLECUTINCMD_CTOR_OFFSET UNITYSDK_OFFSET(0xDFFB1A0)
#define RPG_CLIENT_MATCHTHREEPLAYROLECUTINCMD_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xDFFB080)
#define RPG_CLIENT_MATCHTHREEPLAYROLECUTINCMD_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xDFFAF30)
#define RPG_CLIENT_MATCHTHREEPLAYROLECUTINCMD__ONCUTINCOMPLETED_OFFSET UNITYSDK_OFFSET(0xDFFB030)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreePlayRoleCutInCmd_TypeDefinitionIndex = 67801;

	class MatchThreePlayRoleCutInCmd : public ::FNIDIOCNBBI
	{
	public:
		::System::String* ImagePath; // 0x28
		::RPG::Client::LittleGame::Match3::OpponentRole Role; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Desc; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYROLECUTINCMD_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreePlayRoleCutInCmd* Create(::RPG::Client::MatchThreeBoard* a1)
		{
			return ((::RPG::Client::MatchThreePlayRoleCutInCmd*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYROLECUTINCMD_CREATE_OFFSET))(a1);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYROLECUTINCMD_ONEXECUTE_OFFSET))(this);
		}

		::System::Void _OnCutInCompleted(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYROLECUTINCMD__ONCUTINCOMPLETED_OFFSET))(this, a1);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYROLECUTINCMD_ONCLEAR_OFFSET))(this);
		}

	};
}
