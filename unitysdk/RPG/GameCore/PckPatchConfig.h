#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PckPatchConfig; }
namespace RPG::GameCore { class PckPatchPlatform; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PCKPATCHCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C6600)
#define RPG_GAMECORE_PCKPATCHCONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D8C6610)
#define RPG_GAMECORE_PCKPATCHCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8C6500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PckPatchConfig_TypeDefinitionIndex = 16395;

	class PckPatchConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::PckPatchPlatform*>* Incrementals; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PCKPATCHCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PckPatchConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PckPatchConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PCKPATCHCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PckPatchConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PckPatchConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PCKPATCHCONFIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
