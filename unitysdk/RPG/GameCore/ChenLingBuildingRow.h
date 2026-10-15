#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBuildingRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGBUILDINGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D58A660)
#define RPG_GAMECORE_CHENLINGBUILDINGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D58A3A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBuildingRow_TypeDefinitionIndex = 11061;

	class ChenLingBuildingRow : public ::System::Object
	{
	public:
		::System::String* SmallIconPath; // 0x10
		::System::String* ModelPath; // 0x18
		::RPG::Client::TextID Desc; // 0x20
		::System::UInt32 ID; // 0x30
		::System::UInt32 InitialMaxLevel; // 0x34
		::RPG::Client::TextID Name; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBUILDINGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBuildingRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBuildingRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBUILDINGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
