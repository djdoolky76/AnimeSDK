#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AetherDivideConstCommonRow; }
namespace System { class String; }

#define RPG_GAMECORE_AETHERDIVIDECONSTCOMMONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D4600)
#define RPG_GAMECORE_AETHERDIVIDECONSTCOMMONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3D4040)

namespace RPG::GameCore
{
	class AetherDivideConstCommonRow : public ::System::Object
	{
	public:
		::System::String* Value; // 0x10
		::System::String* ConstValueName; // 0x18
		::System::String* ConstValueType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECONSTCOMMONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AetherDivideConstCommonRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AetherDivideConstCommonRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECONSTCOMMONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
