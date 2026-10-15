#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/VoicePlayType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VoiceConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_VOICECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC92BC0)
#define RPG_GAMECORE_VOICECONFIGROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1DC918B0)
#define RPG_GAMECORE_VOICECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC91CE0)
#define RPG_GAMECORE_VOICECONFIGROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1DC92BD0)
#define RPG_GAMECORE_VOICECONFIGROW_RESET_OFFSET UNITYSDK_OFFSET(0x1DC92C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VoiceConfigRow_TypeDefinitionIndex = 15423;

	class VoiceConfigRow : public ::System::Object
	{
	public:
		::System::String* VoicePath; // 0x10
		::System::UInt32 VoiceID; // 0x18
		::RPG::GameCore::VoicePlayType VoiceType; // 0x1C
		::System::Boolean IsPlayerInvolved; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::FCOEMCEDLNL* a1, ::RPG::GameCore::VoiceConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VoiceConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::VoiceConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VoiceConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGROW_RESET_OFFSET))(this);
		}

	};
}
