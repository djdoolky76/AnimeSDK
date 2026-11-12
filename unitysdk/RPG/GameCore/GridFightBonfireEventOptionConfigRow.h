#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightBonfireOptionShowType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightBonfireEventOptionConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTBONFIREEVENTOPTIONCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E931910)
#define RPG_GAMECORE_GRIDFIGHTBONFIREEVENTOPTIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E9315A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightBonfireEventOptionConfigRow_TypeDefinitionIndex = 13572;

	class GridFightBonfireEventOptionConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x10
		::System::String* JsonPath; // 0x18
		::RPG::Client::TextID Title; // 0x20
		::RPG::Client::TextID Desc; // 0x30
		::System::UInt32 OptionID; // 0x40
		::System::UInt32 EventID; // 0x44
		::System::UInt32 DialogID; // 0x48
		::RPG::GameCore::GridFightBonfireOptionShowType OptionShowType; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTBONFIREEVENTOPTIONCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightBonfireEventOptionConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightBonfireEventOptionConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTBONFIREEVENTOPTIONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
