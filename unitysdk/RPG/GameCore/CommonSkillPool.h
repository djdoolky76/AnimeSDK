#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class ENEIHJJPNPI;
class FCOEMCEDLNL;
namespace RPG::GameCore { class CommonSkill; }
namespace RPG::GameCore { class CommonSkillPool; }
namespace System { class String; }

#define RPG_GAMECORE_COMMONSKILLPOOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D59EB50)
#define RPG_GAMECORE_COMMONSKILLPOOL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D59E9E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CommonSkillPool_TypeDefinitionIndex = 18150;

	class CommonSkillPool : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* UniqueName; // 0x10
		::Il2CppArray<::RPG::GameCore::CommonSkill*>* SkillList; // 0x18
		::ENEIHJJPNPI* DynamicValues; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMONSKILLPOOL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CommonSkillPool* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CommonSkillPool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMONSKILLPOOL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
