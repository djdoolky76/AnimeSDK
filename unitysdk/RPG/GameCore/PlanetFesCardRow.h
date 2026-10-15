#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesCardRow; }
namespace System { class String; }

#define RPG_GAMECORE_PLANETFESCARDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8F79C0)
#define RPG_GAMECORE_PLANETFESCARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8F76A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesCardRow_TypeDefinitionIndex = 12211;

	class PlanetFesCardRow : public ::System::Object
	{
	public:
		::System::String* PicPath; // 0x10
		::Il2CppArray<::System::UInt32>* PieceItemList; // 0x18
		::Il2CppArray<::System::UInt32>* BuffIDList; // 0x20
		::System::UInt32 CardID; // 0x28
		::System::UInt32 Rarity; // 0x2C
		::RPG::Client::TextID Name; // 0x30
		::RPG::Client::TextID Description; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESCARDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesCardRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesCardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESCARDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
