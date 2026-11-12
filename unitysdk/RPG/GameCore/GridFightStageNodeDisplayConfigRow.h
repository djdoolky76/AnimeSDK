#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightNodeType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightStageNodeDisplayConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTSTAGENODEDISPLAYCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E956B80)
#define RPG_GAMECORE_GRIDFIGHTSTAGENODEDISPLAYCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E956890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightStageNodeDisplayConfigRow_TypeDefinitionIndex = 13759;

	class GridFightStageNodeDisplayConfigRow : public ::System::Object
	{
	public:
		::System::String* NodePic; // 0x10
		::RPG::Client::TextID NodeDesc; // 0x18
		::RPG::Client::TextID NodeDetailName; // 0x28
		::RPG::Client::TextID NodeName; // 0x38
		::RPG::GameCore::GridFightNodeType NodeType; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSTAGENODEDISPLAYCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightStageNodeDisplayConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightStageNodeDisplayConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSTAGENODEDISPLAYCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
