#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightFunctionNodeType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTutorialStageNodeConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTTUTORIALSTAGENODECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D71B870)
#define RPG_GAMECORE_GRIDFIGHTTUTORIALSTAGENODECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D71B630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTutorialStageNodeConfigRow_TypeDefinitionIndex = 13647;

	class GridFightTutorialStageNodeConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::GridFightFunctionNodeType>* FunctionList; // 0x10
		::System::UInt32 UnlockTutorialTask; // 0x18
		::System::UInt32 DivisionID; // 0x1C
		::System::UInt32 Unlock; // 0x20
		::System::UInt32 ChapterID; // 0x24
		::System::UInt32 SectionID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTUTORIALSTAGENODECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightTutorialStageNodeConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightTutorialStageNodeConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTUTORIALSTAGENODECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
