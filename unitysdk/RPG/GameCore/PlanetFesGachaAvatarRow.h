#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesGachaAvatarRow; }

#define RPG_GAMECORE_PLANETFESGACHAAVATARROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8F8710)
#define RPG_GAMECORE_PLANETFESGACHAAVATARROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8F8650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesGachaAvatarRow_TypeDefinitionIndex = 12216;

	class PlanetFesGachaAvatarRow : public ::System::Object
	{
	public:
		::System::UInt32 GachaID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESGACHAAVATARROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesGachaAvatarRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesGachaAvatarRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESGACHAAVATARROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
