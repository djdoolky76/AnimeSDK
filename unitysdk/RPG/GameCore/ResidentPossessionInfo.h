#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ResidentPossessionInfo; }
namespace System { class String; }

#define RPG_GAMECORE_RESIDENTPOSSESSIONINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D95F790)
#define RPG_GAMECORE_RESIDENTPOSSESSIONINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D95F4A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResidentPossessionInfo_TypeDefinitionIndex = 16537;

	class ResidentPossessionInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::String* AttachPoint; // 0x18
		::RPG::MVector3 LocalPosition; // 0x20
		::RPG::MVector3 LocalRotation; // 0x2C
		::System::Single LocalScale; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESIDENTPOSSESSIONINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResidentPossessionInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResidentPossessionInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESIDENTPOSSESSIONINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
