#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MunicipalChatActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MunicipalChatActionFreeStyle; }
namespace System { class String; }

#define RPG_GAMECORE_MUNICIPALCHATACTIONFREESTYLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C0A50)
#define RPG_GAMECORE_MUNICIPALCHATACTIONFREESTYLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8C0A60)
#define RPG_GAMECORE_MUNICIPALCHATACTIONFREESTYLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8C0E30)

namespace RPG::GameCore
{
	class MunicipalChatActionFreeStyle : public ::RPG::GameCore::MunicipalChatActionBase
	{
	public:
		::System::UInt32 MotionID; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* AvatarID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATACTIONFREESTYLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MunicipalChatActionFreeStyle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MunicipalChatActionFreeStyle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATACTIONFREESTYLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MunicipalChatActionFreeStyle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MunicipalChatActionFreeStyle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATACTIONFREESTYLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
