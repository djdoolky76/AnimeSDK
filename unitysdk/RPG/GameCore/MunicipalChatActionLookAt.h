#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MunicipalChatActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MunicipalChatActionLookAt; }
namespace System { class String; }

#define RPG_GAMECORE_MUNICIPALCHATACTIONLOOKAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D893540)
#define RPG_GAMECORE_MUNICIPALCHATACTIONLOOKAT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D893550)
#define RPG_GAMECORE_MUNICIPALCHATACTIONLOOKAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D893500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MunicipalChatActionLookAt_TypeDefinitionIndex = 16930;

	class MunicipalChatActionLookAt : public ::RPG::GameCore::MunicipalChatActionBase
	{
	public:
		::System::String* LookAtTargetName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATACTIONLOOKAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MunicipalChatActionLookAt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MunicipalChatActionLookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATACTIONLOOKAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MunicipalChatActionLookAt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MunicipalChatActionLookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATACTIONLOOKAT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
