#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelEntityReferenceInfo; }

#define RPG_GAMECORE_LEVELENTITYREFERENCEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7ABFC0)
#define RPG_GAMECORE_LEVELENTITYREFERENCEINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D7ABFD0)
#define RPG_GAMECORE_LEVELENTITYREFERENCEINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7ABEA0)

namespace RPG::GameCore
{
	class LevelEntityReferenceInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsOwnerGroup; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 GroupID; // 0x14
		::System::UInt32 EntityID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYREFERENCEINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelEntityReferenceInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelEntityReferenceInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYREFERENCEINFO_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelEntityReferenceInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelEntityReferenceInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYREFERENCEINFO_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
