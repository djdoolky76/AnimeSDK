#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournUseBuffTypeRow; }

#define RPG_GAMECORE_ROGUETOURNUSEBUFFTYPEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA43050)
#define RPG_GAMECORE_ROGUETOURNUSEBUFFTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA42F30)

namespace RPG::GameCore
{
	class RogueTournUseBuffTypeRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* UseBuffTypeList; // 0x10
		::RPG::GameCore::RogueTournMode TournMode; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNUSEBUFFTYPEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournUseBuffTypeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournUseBuffTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNUSEBUFFTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
