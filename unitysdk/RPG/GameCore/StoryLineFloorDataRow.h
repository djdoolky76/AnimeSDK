#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StoryLineFloorDataRow; }
namespace System { class String; }

#define RPG_GAMECORE_STORYLINEFLOORDATAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAFA400)
#define RPG_GAMECORE_STORYLINEFLOORDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DAFA280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StoryLineFloorDataRow_TypeDefinitionIndex = 15201;

	class StoryLineFloorDataRow : public ::System::Object
	{
	public:
		::System::String* ConditionExpression; // 0x10
		::System::UInt32 DimensionID; // 0x18
		::System::UInt32 FloorID; // 0x1C
		::System::UInt32 StoryLineID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEFLOORDATAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::StoryLineFloorDataRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StoryLineFloorDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEFLOORDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
