#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define SYSTEM_HASHCODE_ADD_2_OFFSET UNITYSDK_OFFSET(0x7919F0)
#define SYSTEM_HASHCODE_EQUALS_OFFSET UNITYSDK_OFFSET(0x912D50)
#define SYSTEM_HASHCODE_GENERATEGLOBALSEED_OFFSET UNITYSDK_OFFSET(0x1E7C1880)
#define SYSTEM_HASHCODE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x912D00)
#define SYSTEM_HASHCODE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E7C19D0)
#define SYSTEM_HASHCODE_MIXEMPTYSTATE_OFFSET UNITYSDK_OFFSET(0x1E7C1AC0)
#define SYSTEM_HASHCODE_MIXFINAL_OFFSET UNITYSDK_OFFSET(0x1E7C1B20)
#define SYSTEM_HASHCODE_MIXSTATE_OFFSET UNITYSDK_OFFSET(0x1E7C1AA0)
#define SYSTEM_HASHCODE_QUEUEROUND_OFFSET UNITYSDK_OFFSET(0x1E7C1A80)
#define SYSTEM_HASHCODE_ROUND_OFFSET UNITYSDK_OFFSET(0x1E7C1A60)
#define SYSTEM_HASHCODE_TOHASHCODE_OFFSET UNITYSDK_OFFSET(0x912CF0)
#define SYSTEM_HASHCODE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7C1FB0)

namespace System
{
	inline static constexpr unsigned int HashCode_TypeDefinitionIndex = 29550;

	struct alignas(4) HashCode
	{
		static ::System::UInt32* StaticGet_s_seed()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(HashCode_TypeDefinitionIndex)->GetStaticField(0x7EB0);
		}
		// static const ::System::UInt32 Prime1 = 0x9E3779B1; // 0x0
		// static const ::System::UInt32 Prime2 = 0x85EBCA77; // 0x0
		// static const ::System::UInt32 Prime3 = 0xC2B2AE3D; // 0x0
		// static const ::System::UInt32 Prime4 = 0x27D4EB2F; // 0x0
		// static const ::System::UInt32 Prime5 = 0x165667B1; // 0x0
		::System::UInt32 _v1; // 0x10
		::System::UInt32 _v2; // 0x14
		::System::UInt32 _v3; // 0x18
		::System::UInt32 _v4; // 0x1C
		::System::UInt32 _queue1; // 0x20
		::System::UInt32 _queue2; // 0x24
		::System::UInt32 _queue3; // 0x28
		::System::UInt32 _length; // 0x2C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_HASHCODE__CCTOR_OFFSET))();
		}

		static ::System::UInt32 GenerateGlobalSeed()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + SYSTEM_HASHCODE_GENERATEGLOBALSEED_OFFSET))();
		}

		static ::System::Void Initialize(::System::UInt32& v1, ::System::UInt32& v2, ::System::UInt32& v3, ::System::UInt32& v4)
		{
			return ((::System::Void(*)(::System::UInt32&, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + SYSTEM_HASHCODE_INITIALIZE_OFFSET))(v1, v2, v3, v4);
		}

		static ::System::UInt32 Round(::System::UInt32 hash, ::System::UInt32 input)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_HASHCODE_ROUND_OFFSET))(hash, input);
		}

		static ::System::UInt32 QueueRound(::System::UInt32 hash, ::System::UInt32 queuedValue)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_HASHCODE_QUEUEROUND_OFFSET))(hash, queuedValue);
		}

		static ::System::UInt32 MixState(::System::UInt32 v1, ::System::UInt32 v2, ::System::UInt32 v3, ::System::UInt32 v4)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_HASHCODE_MIXSTATE_OFFSET))(v1, v2, v3, v4);
		}

		static ::System::UInt32 MixEmptyState()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + SYSTEM_HASHCODE_MIXEMPTYSTATE_OFFSET))();
		}

		static ::System::UInt32 MixFinal(::System::UInt32 hash)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_HASHCODE_MIXFINAL_OFFSET))(hash);
		}

		::System::Void Add_2(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_HASHCODE_ADD_2_OFFSET))(this, value);
		}

		::System::Int32 ToHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_HASHCODE_TOHASHCODE_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_HASHCODE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_HASHCODE_EQUALS_OFFSET))(this, obj);
		}
	};
}
