#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DecalGameplayConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_DECALGAMEPLAYCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CB4B0)
#define RPG_GAMECORE_DECALGAMEPLAYCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5CB2F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DecalGameplayConfigRow_TypeDefinitionIndex = 13127;

	class DecalGameplayConfigRow : public ::System::Object
	{
	public:
		::System::String* TextureMapPath; // 0x10
		::System::String* IconPath; // 0x18
		::System::UInt32 DecalID; // 0x20
		::System::UInt32 RequiredItemID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALGAMEPLAYCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DecalGameplayConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DecalGameplayConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALGAMEPLAYCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
