#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MunicipalChatCrowdInfo; }
namespace System { class String; }

#define RPG_GAMECORE_MUNICIPALCHATCROWDINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C1810)
#define RPG_GAMECORE_MUNICIPALCHATCROWDINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8C1700)

namespace RPG::GameCore
{
	class MunicipalChatCrowdInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* UniqueName; // 0x10
		::System::String* CrowdUniqueName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATCROWDINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MunicipalChatCrowdInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MunicipalChatCrowdInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATCROWDINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
