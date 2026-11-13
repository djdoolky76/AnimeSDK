#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RTGameplayEffectConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_RTGAMEPLAYEFFECTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2225E0)
#define RPG_GAMECORE_RTGAMEPLAYEFFECTCONFIGROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1F221EB0)
#define RPG_GAMECORE_RTGAMEPLAYEFFECTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F222220)
#define RPG_GAMECORE_RTGAMEPLAYEFFECTCONFIGROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1F221E30)
#define RPG_GAMECORE_RTGAMEPLAYEFFECTCONFIGROW_RESET_OFFSET UNITYSDK_OFFSET(0x1F221E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RTGameplayEffectConfigRow_TypeDefinitionIndex = 14762;

	class RTGameplayEffectConfigRow : public ::System::Object
	{
	public:
		::System::String* TargetType; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x18
		::System::String* Icon; // 0x20
		::System::String* GEName; // 0x28
		::System::UInt32 ID; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Title; // 0x38
		::RPG::Client::TextID SimpleDesc; // 0x48
		::RPG::Client::TextID Desc; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTGAMEPLAYEFFECTCONFIGROW_CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTGAMEPLAYEFFECTCONFIGROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTGAMEPLAYEFFECTCONFIGROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::FCOEMCEDLNL* a1, ::RPG::GameCore::RTGameplayEffectConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RTGameplayEffectConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTGAMEPLAYEFFECTCONFIGROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RTGameplayEffectConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RTGameplayEffectConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTGAMEPLAYEFFECTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
