#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirTalentRow; }
namespace System { class String; }

#define RPG_GAMECORE_PIXAIRTALENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D91E540)
#define RPG_GAMECORE_PIXAIRTALENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D91E2A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirTalentRow_TypeDefinitionIndex = 12165;

	class PixAirTalentRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::System::UInt32>* PreTalentList; // 0x18
		::RPG::Client::TextID Name; // 0x20
		::System::UInt32 EffectID; // 0x30
		::System::UInt32 TalentID; // 0x34
		::System::UInt32 UnlockScore; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRTALENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PixAirTalentRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PixAirTalentRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRTALENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
