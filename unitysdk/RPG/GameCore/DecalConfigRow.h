#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DecalConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_DECALCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5F8040)
#define RPG_GAMECORE_DECALCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5F77A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DecalConfigRow_TypeDefinitionIndex = 12357;

	class DecalConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* BgPath; // 0x18
		::System::String* FigurePath; // 0x20
		::System::String* Comment; // 0x28
		::System::String* TextureMapPath; // 0x30
		::RPG::Client::TextID Desc; // 0x38
		::RPG::Client::TextID Name; // 0x48
		::System::UInt32 DecalID; // 0x58
		::System::UInt32 UnlockMission; // 0x5C
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
