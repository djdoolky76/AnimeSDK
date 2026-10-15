#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPedestrianV2MemberExtendFreeStyle; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2MEMBEREXTENDFREESTYLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C8D80)
#define RPG_GAMECORE_LEVELPEDESTRIANV2MEMBEREXTENDFREESTYLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7C8BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2MemberExtendFreeStyle_TypeDefinitionIndex = 17316;

	class LevelPedestrianV2MemberExtendFreeStyle : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* LayerName; // 0x10
		::System::UInt32 MotionID; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::String*>* PossessionList; // 0x20
		::System::Single Weight; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2MEMBEREXTENDFREESTYLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2MemberExtendFreeStyle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2MemberExtendFreeStyle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2MEMBEREXTENDFREESTYLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
