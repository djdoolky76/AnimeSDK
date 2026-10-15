#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleNpcConfig; }

#define RPG_GAMECORE_MARBLENPCCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D842810)
#define RPG_GAMECORE_MARBLENPCCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D83ED40)

namespace RPG::GameCore
{
	class MarbleNpcConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupId; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::UInt32>* AnchorIds; // 0x18
		::Il2CppArray<::System::UInt32>* NpcIds; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLENPCCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleNpcConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleNpcConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLENPCCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
