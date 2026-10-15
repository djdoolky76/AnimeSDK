#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameNavConnectInfo; }
namespace RPG::GameCore { class LittleGameNavInfo; }

#define RPG_GAMECORE_LITTLEGAMENAVINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E52A0)
#define RPG_GAMECORE_LITTLEGAMENAVINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7E51E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameNavInfo_TypeDefinitionIndex = 17339;

	class LittleGameNavInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LittleGameNavConnectInfo*>* LittleGameConnectList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMENAVINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameNavInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameNavInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMENAVINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
