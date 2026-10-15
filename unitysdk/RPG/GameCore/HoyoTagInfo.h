#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HoyoTagInfo; }
namespace RPG::GameCore { class HoyoTagNodeInfo; }

#define RPG_GAMECORE_HOYOTAGINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D745860)
#define RPG_GAMECORE_HOYOTAGINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7457A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HoyoTagInfo_TypeDefinitionIndex = 18317;

	class HoyoTagInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::HoyoTagNodeInfo*>* ChildrenNodeList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HoyoTagInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HoyoTagInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
