#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FloorCustomValueSetSource.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetFloorCustomValueExtraInfo; }

#define RPG_GAMECORE_SETFLOORCUSTOMVALUEEXTRAINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA86A90)
#define RPG_GAMECORE_SETFLOORCUSTOMVALUEEXTRAINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA85ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetFloorCustomValueExtraInfo_TypeDefinitionIndex = 20689;

	class SetFloorCustomValueExtraInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean Lock; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FloorCustomValueSetSource Source; // 0x14
		::System::Boolean RecoverWhenUnLock; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOORCUSTOMVALUEEXTRAINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetFloorCustomValueExtraInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetFloorCustomValueExtraInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOORCUSTOMVALUEEXTRAINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
