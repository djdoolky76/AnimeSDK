#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GroupEntityInfo.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class NpcEntityInfo; }

#define RPG_GAMECORE_NPCENTITYINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DBAF0)
#define RPG_GAMECORE_NPCENTITYINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8DBB00)
#define RPG_GAMECORE_NPCENTITYINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8DBAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NpcEntityInfo_TypeDefinitionIndex = 20288;

	class NpcEntityInfo : public ::RPG::GameCore::GroupEntityInfo
	{
	public:
		::RPG::GameCore::DynamicString* UniqueName; // 0x20
		::RPG::GameCore::DynamicString* DefaultIdleStateName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCENTITYINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NpcEntityInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NpcEntityInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCENTITYINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::NpcEntityInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NpcEntityInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCENTITYINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
