#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesBuffDescOverrideRow; }

#define RPG_GAMECORE_PLANETFESBUFFDESCOVERRIDEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8F65D0)
#define RPG_GAMECORE_PLANETFESBUFFDESCOVERRIDEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8F6450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesBuffDescOverrideRow_TypeDefinitionIndex = 12280;

	class PlanetFesBuffDescOverrideRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Decription; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBUFFDESCOVERRIDEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesBuffDescOverrideRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesBuffDescOverrideRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBUFFDESCOVERRIDEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
