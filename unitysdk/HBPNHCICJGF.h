#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HOIMPNMCBEI.h"
class EBBJGCKIBAA;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define HBPNHCICJGF_BAMNCPGBNBN_OFFSET UNITYSDK_OFFSET(0x15C08560)
#define HBPNHCICJGF_CTOR_OFFSET UNITYSDK_OFFSET(0x15C08550)
#define HBPNHCICJGF_GET_WORKFINISH_OFFSET UNITYSDK_OFFSET(0x15C08680)
#define HBPNHCICJGF_INOMGFMHLDO_OFFSET UNITYSDK_OFFSET(0x15C08620)
#define HBPNHCICJGF_SET_WORKFINISH_OFFSET UNITYSDK_OFFSET(0x15C08690)

inline static constexpr unsigned int HBPNHCICJGF_TypeDefinitionIndex = 56254;

	class HBPNHCICJGF : public ::System::Object
	{
	public:
		::EBBJGCKIBAA* FMKBPLPPNCI; // 0x10
		::RPG::GameCore::TurnBasedGameMode* JADHLODNADK; // 0x18
		::System::Boolean _WorkFinish_k__BackingField; // 0x20
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::EBBJGCKIBAA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::EBBJGCKIBAA*))((::PBYTE)hIl2Cpp + HBPNHCICJGF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void BAMNCPGBNBN(::RPG::GameCore::TurnState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + HBPNHCICJGF_BAMNCPGBNBN_OFFSET))(this, a1);
		}

		::HOIMPNMCBEI INOMGFMHLDO()
		{
			return ((::HOIMPNMCBEI(*)(::PVOID))((::PBYTE)hIl2Cpp + HBPNHCICJGF_INOMGFMHLDO_OFFSET))(this);
		}

		::System::Boolean get_WorkFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBPNHCICJGF_GET_WORKFINISH_OFFSET))(this);
		}

		::System::Void set_WorkFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBPNHCICJGF_SET_WORKFINISH_OFFSET))(this, a1);
		}

	};
