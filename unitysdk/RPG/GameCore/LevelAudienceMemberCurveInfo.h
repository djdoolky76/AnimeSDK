#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelAudienceMemberCurveInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELAUDIENCEMEMBERCURVEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A5D30)
#define RPG_GAMECORE_LEVELAUDIENCEMEMBERCURVEINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7A5B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAudienceMemberCurveInfo_TypeDefinitionIndex = 17325;

	class LevelAudienceMemberCurveInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PointAliasA; // 0x10
		::System::String* PointAliasB; // 0x18
		::RPG::MVector3 ForwardRotation; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIENCEMEMBERCURVEINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelAudienceMemberCurveInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelAudienceMemberCurveInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIENCEMEMBERCURVEINFO_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
