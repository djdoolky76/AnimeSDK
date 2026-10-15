#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SOTaskConfig.h"
#include "unitysdk/RPG/GameCore/SO_FaceToPositionType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SO_FaceTo; }

#define RPG_GAMECORE_SO_FACETO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA420E0)
#define RPG_GAMECORE_SO_FACETO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA420F0)
#define RPG_GAMECORE_SO_FACETO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA433E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SO_FaceTo_TypeDefinitionIndex = 20061;

	class SO_FaceTo : public ::RPG::GameCore::SOTaskConfig
	{
	public:
		::RPG::GameCore::SO_FaceToPositionType PositionType; // 0x18
		::System::UInt32 AnchorGroupId; // 0x1C
		::System::UInt32 AnchorPointId; // 0x20
		::System::UInt32 EntityInstanceId; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_FACETO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SO_FaceTo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SO_FaceTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_FACETO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SO_FaceTo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SO_FaceTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_FACETO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
