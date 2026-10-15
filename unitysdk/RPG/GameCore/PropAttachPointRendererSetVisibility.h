#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PropAttachPointRendererSetVisibility; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPATTACHPOINTRENDERERSETVISIBILITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D945390)
#define RPG_GAMECORE_PROPATTACHPOINTRENDERERSETVISIBILITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9453C0)
#define RPG_GAMECORE_PROPATTACHPOINTRENDERERSETVISIBILITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D945340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropAttachPointRendererSetVisibility_TypeDefinitionIndex = 20398;

	class PropAttachPointRendererSetVisibility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Visible; // 0x18
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::DynamicString*>* AttachPoints; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPATTACHPOINTRENDERERSETVISIBILITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropAttachPointRendererSetVisibility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropAttachPointRendererSetVisibility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPATTACHPOINTRENDERERSETVISIBILITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropAttachPointRendererSetVisibility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropAttachPointRendererSetVisibility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPATTACHPOINTRENDERERSETVISIBILITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
