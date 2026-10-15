#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelAudienceMemberRendererInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELAUDIENCEMEMBERRENDERERINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D778420)
#define RPG_GAMECORE_LEVELAUDIENCEMEMBERRENDERERINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7782D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAudienceMemberRendererInfo_TypeDefinitionIndex = 17326;

	class LevelAudienceMemberRendererInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::NPCBodySize NpcBodySize; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::String*>* Identities; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIENCEMEMBERRENDERERINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelAudienceMemberRendererInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelAudienceMemberRendererInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIENCEMEMBERRENDERERINFO_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
