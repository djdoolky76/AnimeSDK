#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EnumStatusTag.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StatusRow; }
namespace System { class String; }

#define RPG_GAMECORE_STATUSROW_CONTAINSTAG_OFFSET UNITYSDK_OFFSET(0x1E3C9310)
#define RPG_GAMECORE_STATUSROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C9270)
#define RPG_GAMECORE_STATUSROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1E3C6780)
#define RPG_GAMECORE_STATUSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E3C6E80)
#define RPG_GAMECORE_STATUSROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1E3C9280)
#define RPG_GAMECORE_STATUSROW_RESET_OFFSET UNITYSDK_OFFSET(0x1E3C92E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StatusRow_TypeDefinitionIndex = 15336;

	class StatusRow : public ::System::Object
	{
	public:
		::System::String* StatusIconPathHighSize; // 0x10
		::System::String* ModifierName; // 0x18
		::System::String* StatusIconPath; // 0x20
		::Il2CppArray<::RPG::GameCore::EnumStatusTag>* TagList; // 0x28
		::Il2CppArray<::System::String*>* ReadParamList; // 0x30
		::System::Boolean CanDispel; // 0x38
		::System::Byte _padding0[0x7];
		::RPG::Client::TextID StatusName; // 0x40
		::RPG::Client::TextID StatusDesc; // 0x50
		::System::UInt32 StatusID; // 0x60
		::RPG::GameCore::EnumStatusType StatusType; // 0x64
		::RPG::Client::TextID StatusEffect; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::FCOEMCEDLNL* a1, ::RPG::GameCore::StatusRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StatusRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::StatusRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StatusRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSROW_FROMBINARY_OFFSET))(a1, a2);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSROW_RESET_OFFSET))(this);
		}

		::System::Boolean ContainsTag(::RPG::GameCore::EnumStatusTag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EnumStatusTag))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSROW_CONTAINSTAG_OFFSET))(this, a1);
		}

	};
}
