#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class TriggerEffectParams; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define RPG_CLIENT_TRIGGEREFFECTPARAMSREF_CLEAR_OFFSET UNITYSDK_OFFSET(0x3EF6CD0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMSREF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x3EF6BE0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMSREF_CTOR_OFFSET UNITYSDK_OFFSET(0x3D9DFE0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMSREF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3EF6DD0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMSREF_EQUALS_OFFSET UNITYSDK_OFFSET(0x3EF6D60)
#define RPG_CLIENT_TRIGGEREFFECTPARAMSREF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3EF6D50)
#define RPG_CLIENT_TRIGGEREFFECTPARAMSREF_GETISVALID_OFFSET UNITYSDK_OFFSET(0x3EF6C70)
#define RPG_CLIENT_TRIGGEREFFECTPARAMSREF_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1C9AE1C0)
#define RPG_CLIENT_TRIGGEREFFECTPARAMSREF_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1C9AE190)
#define RPG_CLIENT_TRIGGEREFFECTPARAMSREF_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x3EF6D30)
#define RPG_CLIENT_TRIGGEREFFECTPARAMSREF_RESET_OFFSET UNITYSDK_OFFSET(0x3EF6C10)
#define RPG_CLIENT_TRIGGEREFFECTPARAMSREF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3EF6D20)

namespace RPG::Client
{
	inline static constexpr unsigned int TriggerEffectParamsRef_TypeDefinitionIndex = 71878;

	struct alignas(8) TriggerEffectParamsRef
	{
		::System::UInt32 UniqueEffectID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TriggerEffectParams* InstanceParamsRef; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::TriggerEffectParams* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMSREF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::RPG::Client::TriggerEffectParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMSREF_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void Reset(::RPG::Client::TriggerEffectParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMSREF_RESET_OFFSET))(this, a1);
		}

		::System::Boolean GetIsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMSREF_GETISVALID_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMSREF_CLEAR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMSREF_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMSREF_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::RPG::Client::TriggerEffectParamsRef a1, ::RPG::Client::TriggerEffectParamsRef a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::TriggerEffectParamsRef, ::RPG::Client::TriggerEffectParamsRef))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMSREF_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::RPG::Client::TriggerEffectParamsRef a1, ::RPG::Client::TriggerEffectParamsRef a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::TriggerEffectParamsRef, ::RPG::Client::TriggerEffectParamsRef))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMSREF_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMSREF_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMSREF_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::RPG::Client::TriggerEffectParamsRef a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TriggerEffectParamsRef))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTPARAMSREF_EQUALS_1_OFFSET))(this, a1);
		}
		*/

	};
}
