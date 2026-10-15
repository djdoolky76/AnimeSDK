#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTutorialTaskRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTTUTORIALTASKROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D71B9B0)
#define RPG_GAMECORE_GRIDFIGHTTUTORIALTASKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D71B880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTutorialTaskRow_TypeDefinitionIndex = 13651;

	class GridFightTutorialTaskRow : public ::System::Object
	{
	public:
		::System::String* LevelGraphPath; // 0x10
		::System::UInt32 TaskID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTUTORIALTASKROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightTutorialTaskRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightTutorialTaskRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTUTORIALTASKROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
