#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MunicipalChatActionBase; }
namespace RPG::GameCore { class MunicipalChatNodeInfo; }
namespace RPG::GameCore { class MunicipalChatNodeTransitionInfo; }
namespace System { class String; }

#define RPG_GAMECORE_MUNICIPALCHATNODEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C1BE0)
#define RPG_GAMECORE_MUNICIPALCHATNODEINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8C1A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MunicipalChatNodeInfo_TypeDefinitionIndex = 16932;

	class MunicipalChatNodeInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* MunicipalNodeName; // 0x10
		::Il2CppArray<::RPG::GameCore::MunicipalChatNodeTransitionInfo*>* TransitionList; // 0x18
		::Il2CppArray<::RPG::GameCore::MunicipalChatActionBase*>* ActionList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATNODEINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MunicipalChatNodeInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MunicipalChatNodeInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATNODEINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
