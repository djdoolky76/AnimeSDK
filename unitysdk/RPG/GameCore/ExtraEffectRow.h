#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExtraEffectRow; }
namespace System { class String; }

#define RPG_GAMECORE_EXTRAEFFECTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D667C90)
#define RPG_GAMECORE_EXTRAEFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6674F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExtraEffectRow_TypeDefinitionIndex = 13267;

	class ExtraEffectRow : public ::System::Object
	{
	public:
		::System::String* ExtraEffectIconPath; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* DescParamList; // 0x18
		::RPG::Client::TextID ExtraEffectDesc; // 0x20
		::System::UInt32 ExtraEffectType; // 0x30
		::System::UInt32 ExtraEffectID; // 0x34
		::RPG::Client::TextID ExtraEffectName; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXTRAEFFECTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExtraEffectRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExtraEffectRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXTRAEFFECTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
