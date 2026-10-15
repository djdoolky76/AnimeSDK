#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelObjectInfo.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NamedLevelObjectInfo; }
namespace System { class String; }

#define RPG_GAMECORE_NAMEDLEVELOBJECTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8A5A80)
#define RPG_GAMECORE_NAMEDLEVELOBJECTINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8A5A90)
#define RPG_GAMECORE_NAMEDLEVELOBJECTINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8A5100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NamedLevelObjectInfo_TypeDefinitionIndex = 17241;

	class NamedLevelObjectInfo : public ::RPG::GameCore::LevelObjectInfo
	{
	public:
		::System::String* Name; // 0x28
		::System::Single RotY; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAMEDLEVELOBJECTINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NamedLevelObjectInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NamedLevelObjectInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAMEDLEVELOBJECTINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::NamedLevelObjectInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NamedLevelObjectInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAMEDLEVELOBJECTINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
