#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WolfBroCartoonGunConfig; }

#define RPG_GAMECORE_WOLFBROCARTOONGUNCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA7B80)
#define RPG_GAMECORE_WOLFBROCARTOONGUNCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA7930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroCartoonGunConfig_TypeDefinitionIndex = 17020;

	class WolfBroCartoonGunConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 ConfigID; // 0x14
		::System::UInt32 InitValue; // 0x18
		::RPG::GameCore::PropState ResetState; // 0x1C
		::RPG::GameCore::PropState ActivatedState; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::MVector3>* BulletList; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROCARTOONGUNCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WolfBroCartoonGunConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WolfBroCartoonGunConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROCARTOONGUNCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
