#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MaterialSubmissionType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MaterialSubmitterGroupRow; }

#define RPG_GAMECORE_MATERIALSUBMITTERGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D830AC0)
#define RPG_GAMECORE_MATERIALSUBMITTERGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D830950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MaterialSubmitterGroupRow_TypeDefinitionIndex = 11961;

	class MaterialSubmitterGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SubmitterIDList; // 0x10
		::RPG::GameCore::MaterialSubmissionType Type; // 0x18
		::System::UInt32 ActivityID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MaterialSubmitterGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MaterialSubmitterGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
