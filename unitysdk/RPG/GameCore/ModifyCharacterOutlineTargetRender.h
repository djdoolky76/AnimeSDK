#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ModifyCharacterOutlineTargetRender; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_MODIFYCHARACTEROUTLINETARGETRENDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8912A0)
#define RPG_GAMECORE_MODIFYCHARACTEROUTLINETARGETRENDER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8912B0)
#define RPG_GAMECORE_MODIFYCHARACTEROUTLINETARGETRENDER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D891270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyCharacterOutlineTargetRender_TypeDefinitionIndex = 22804;

	class ModifyCharacterOutlineTargetRender : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Reset; // 0x20
		::System::Byte _padding0[0x7];
		::Il2CppArray<::System::String*>* AddRenderNameList; // 0x28
		::Il2CppArray<::System::String*>* RemoveRenderNameList; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYCHARACTEROUTLINETARGETRENDER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyCharacterOutlineTargetRender* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyCharacterOutlineTargetRender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYCHARACTEROUTLINETARGETRENDER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyCharacterOutlineTargetRender* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyCharacterOutlineTargetRender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYCHARACTEROUTLINETARGETRENDER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
