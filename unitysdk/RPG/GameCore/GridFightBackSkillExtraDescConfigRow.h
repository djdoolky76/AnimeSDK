#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightBackSkillExtraDescConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTBACKSKILLEXTRADESCCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D726BD0)
#define RPG_GAMECORE_GRIDFIGHTBACKSKILLEXTRADESCCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D726870)

namespace RPG::GameCore
{
	class GridFightBackSkillExtraDescConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ExtraEffectIDList; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* SimpleParamList; // 0x20
		::Il2CppArray<::System::UInt32>* SimpleExtraEffectIDList; // 0x28
		::RPG::Client::TextID ConditionDesc; // 0x30
		::System::UInt32 SkillID; // 0x40
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID ConditionSimpleDesc; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTBACKSKILLEXTRADESCCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightBackSkillExtraDescConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightBackSkillExtraDescConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTBACKSKILLEXTRADESCCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
