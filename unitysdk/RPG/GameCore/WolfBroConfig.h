#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WolfBroCartoonGunConfig; }
namespace RPG::GameCore { class WolfBroConfig; }

#define RPG_GAMECORE_WOLFBROCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA7D50)
#define RPG_GAMECORE_WOLFBROCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA7B90)

namespace RPG::GameCore
{
	class WolfBroConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 WolfBroID; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::MVector3>* BulletList; // 0x18
		::RPG::GameCore::WolfBroCartoonGunConfig* CartoonGun; // 0x20
		::Il2CppArray<::RPG::GameCore::WolfBroCartoonGunConfig*>* CartoonGunList; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WolfBroConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WolfBroConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
