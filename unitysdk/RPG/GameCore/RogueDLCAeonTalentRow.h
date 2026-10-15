#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLCAeonTalentRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLCAEONTALENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B9240)
#define RPG_GAMECORE_ROGUEDLCAEONTALENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9B8A10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCAeonTalentRow_TypeDefinitionIndex = 14749;

	class RogueDLCAeonTalentRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* GamePlayEffectList; // 0x10
		::System::String* TalentIcon; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectDescParamList; // 0x20
		::RPG::Client::TextID EffectTitle; // 0x28
		::System::UInt32 AeonDimensionID; // 0x38
		::System::UInt32 UnlockAeonDimensionPoint; // 0x3C
		::System::UInt32 AeonTalentID; // 0x40
		::System::Boolean IsImportant; // 0x44
		::System::Byte _padding0[0x3];
		::RPG::Client::TextID EffectDesc; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONTALENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLCAeonTalentRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLCAeonTalentRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONTALENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
