#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleCustomActionRow; }

#define RPG_GAMECORE_MARBLECUSTOMACTIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D83C510)
#define RPG_GAMECORE_MARBLECUSTOMACTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D83C390)

namespace RPG::GameCore
{
	class MarbleCustomActionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* LaunchParamList; // 0x10
		::System::UInt32 ID; // 0x18
		::System::UInt32 SealInsID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLECUSTOMACTIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleCustomActionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleCustomActionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLECUSTOMACTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
