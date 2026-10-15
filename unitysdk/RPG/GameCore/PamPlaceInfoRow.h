#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PamActionType.h"
#include "unitysdk/RPG/GameCore/PamPlaceType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PamPlaceInfoRow; }

#define RPG_GAMECORE_PAMPLACEINFOROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8EC780)
#define RPG_GAMECORE_PAMPLACEINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8EC630)

namespace RPG::GameCore
{
	class PamPlaceInfoRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::PamActionType>* PamActionList; // 0x10
		::RPG::GameCore::PamPlaceType PamPlaceType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMPLACEINFOROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PamPlaceInfoRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PamPlaceInfoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMPLACEINFOROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
