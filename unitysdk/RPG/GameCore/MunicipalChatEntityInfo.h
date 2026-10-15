#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicJsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MunicipalChatEntityInfo; }
namespace System { class String; }

#define RPG_GAMECORE_MUNICIPALCHATENTITYINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C1850)
#define RPG_GAMECORE_MUNICIPALCHATENTITYINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8C1860)
#define RPG_GAMECORE_MUNICIPALCHATENTITYINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8C1820)

namespace RPG::GameCore
{
	class MunicipalChatEntityInfo : public ::RPG::GameCore::DynamicJsonConfig
	{
	public:
		::System::String* UniqueName; // 0x10
		::System::UInt32 GroupInstanceID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATENTITYINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MunicipalChatEntityInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MunicipalChatEntityInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATENTITYINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MunicipalChatEntityInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MunicipalChatEntityInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATENTITYINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
