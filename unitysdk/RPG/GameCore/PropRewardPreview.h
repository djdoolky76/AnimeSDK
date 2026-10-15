#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PropRewardPreview; }

#define RPG_GAMECORE_PROPREWARDPREVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D953370)
#define RPG_GAMECORE_PROPREWARDPREVIEW_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D953380)
#define RPG_GAMECORE_PROPREWARDPREVIEW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D953340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropRewardPreview_TypeDefinitionIndex = 22068;

	class PropRewardPreview : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 GroupPropID; // 0x1C
		::System::Boolean TargetIsOwner; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicString* PropKey; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPREWARDPREVIEW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropRewardPreview* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropRewardPreview*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPREWARDPREVIEW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropRewardPreview* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropRewardPreview*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPREWARDPREVIEW_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
