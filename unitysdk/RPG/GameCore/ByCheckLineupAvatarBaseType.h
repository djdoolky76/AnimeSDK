#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCheckLineupAvatarBaseType; }
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKLINEUPAVATARBASETYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D463600)
#define RPG_GAMECORE_BYCHECKLINEUPAVATARBASETYPE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4638D0)
#define RPG_GAMECORE_BYCHECKLINEUPAVATARBASETYPE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D463850)
#define RPG_GAMECORE_BYCHECKLINEUPAVATARBASETYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D463660)
#define RPG_GAMECORE_BYCHECKLINEUPAVATARBASETYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D463580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckLineupAvatarBaseType_TypeDefinitionIndex = 20794;

	class ByCheckLineupAvatarBaseType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::AvatarBaseType AvatarBaseType; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* DynamicAvatarBaseType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKLINEUPAVATARBASETYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckLineupAvatarBaseType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckLineupAvatarBaseType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKLINEUPAVATARBASETYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckLineupAvatarBaseType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckLineupAvatarBaseType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKLINEUPAVATARBASETYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckLineupAvatarBaseType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckLineupAvatarBaseType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKLINEUPAVATARBASETYPE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckLineupAvatarBaseType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckLineupAvatarBaseType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKLINEUPAVATARBASETYPE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
