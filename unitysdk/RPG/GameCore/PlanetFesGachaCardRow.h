#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesGachaCardRow; }

#define RPG_GAMECORE_PLANETFESGACHACARDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8F8B20)
#define RPG_GAMECORE_PLANETFESGACHACARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8F89A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesGachaCardRow_TypeDefinitionIndex = 12218;

	class PlanetFesGachaCardRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x10
		::System::UInt32 CardThemeID; // 0x18
		::System::UInt32 GachaID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESGACHACARDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesGachaCardRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesGachaCardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESGACHACARDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
