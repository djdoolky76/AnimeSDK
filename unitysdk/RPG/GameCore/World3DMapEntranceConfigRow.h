#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/World3DMapEntranceCheckType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class World3DMapEntranceConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_WORLD3DMAPENTRANCECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA9C60)
#define RPG_GAMECORE_WORLD3DMAPENTRANCECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DCA9A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int World3DMapEntranceConfigRow_TypeDefinitionIndex = 14024;

	class World3DMapEntranceConfigRow : public ::System::Object
	{
	public:
		::System::String* Anchor; // 0x10
		::System::UInt32 ConditionParamInt; // 0x18
		::System::UInt32 Priority; // 0x1C
		::RPG::GameCore::World3DMapEntranceCheckType ConditionType; // 0x20
		::System::UInt32 ID; // 0x24
		::System::UInt32 FormID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLD3DMAPENTRANCECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::World3DMapEntranceConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::World3DMapEntranceConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLD3DMAPENTRANCECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
