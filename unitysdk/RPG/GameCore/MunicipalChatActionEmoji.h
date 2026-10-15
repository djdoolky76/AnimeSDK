#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MunicipalChatActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MunicipalChatActionEmoji; }
namespace System { class String; }

#define RPG_GAMECORE_MUNICIPALCHATACTIONEMOJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C0750)
#define RPG_GAMECORE_MUNICIPALCHATACTIONEMOJI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8C0770)
#define RPG_GAMECORE_MUNICIPALCHATACTIONEMOJI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8C0DE0)

namespace RPG::GameCore
{
	class MunicipalChatActionEmoji : public ::RPG::GameCore::MunicipalChatActionBase
	{
	public:
		::System::Boolean IsVertical; // 0x20
		::System::Byte _padding0[0x7];
		::System::String* BubbleBGPath; // 0x28
		::System::UInt32 PositionIndex; // 0x30
		::System::Byte _padding1[0x4];
		::Il2CppArray<::System::String*>* EmojiIconPaths; // 0x38
		::System::Single Duration; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATACTIONEMOJI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MunicipalChatActionEmoji* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MunicipalChatActionEmoji*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATACTIONEMOJI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MunicipalChatActionEmoji* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MunicipalChatActionEmoji*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATACTIONEMOJI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
