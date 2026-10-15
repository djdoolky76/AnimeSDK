#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MunicipalChatActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MunicipalChatActionPropAnimation; }
namespace System { class String; }

#define RPG_GAMECORE_MUNICIPALCHATACTIONPROPANIMATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D893730)
#define RPG_GAMECORE_MUNICIPALCHATACTIONPROPANIMATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D893740)
#define RPG_GAMECORE_MUNICIPALCHATACTIONPROPANIMATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8936F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MunicipalChatActionPropAnimation_TypeDefinitionIndex = 16927;

	class MunicipalChatActionPropAnimation : public ::RPG::GameCore::MunicipalChatActionBase
	{
	public:
		::System::String* AnimStateName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATACTIONPROPANIMATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MunicipalChatActionPropAnimation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MunicipalChatActionPropAnimation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATACTIONPROPANIMATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MunicipalChatActionPropAnimation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MunicipalChatActionPropAnimation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATACTIONPROPANIMATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
