#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HeadFrameConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_HEADFRAMECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA77120)
#define RPG_GAMECORE_HEADFRAMECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA77020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeadFrameConfigRow_TypeDefinitionIndex = 13056;

	class HeadFrameConfigRow : public ::System::Object
	{
	public:
		::System::String* PrefabPath; // 0x10
		::System::UInt32 ID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEADFRAMECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::HeadFrameConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HeadFrameConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEADFRAMECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
