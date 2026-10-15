#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLCMarkType; }

#define RPG_GAMECORE_ROGUEDLCMARKTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9C5430)
#define RPG_GAMECORE_ROGUEDLCMARKTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9C5310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCMarkType_TypeDefinitionIndex = 17912;

	class RogueDLCMarkType : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 TypeID; // 0x10
		::System::UInt32 Weight; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMARKTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLCMarkType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLCMarkType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMARKTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
