#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DecalConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_DECALCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CA5B0)
#define RPG_GAMECORE_DECALCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5C9D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DecalConfigRow_TypeDefinitionIndex = 12357;

	class DecalConfigRow : public ::System::Object
	{
	public:
		::System::String* BgPath; // 0x10
		::System::String* TextureMapPath; // 0x18
		::System::String* IconPath; // 0x20
		::System::String* Comment; // 0x28
		::System::String* FigurePath; // 0x30
		::System::UInt32 UnlockMission; // 0x38
		::System::UInt32 DecalID; // 0x3C
		::RPG::Client::TextID Name; // 0x40
		::RPG::Client::TextID Desc; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DecalConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DecalConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
