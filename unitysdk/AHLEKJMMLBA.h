#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APCGKBOPGJL.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define AHLEKJMMLBA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B380)
#define AHLEKJMMLBA_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x1B440)
#define AHLEKJMMLBA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C73C0)
#define AHLEKJMMLBA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C7350)
#define AHLEKJMMLBA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C7340)
#define AHLEKJMMLBA_GET_PROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0xACE0)
#define AHLEKJMMLBA_GET_PROTOTYPEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1D30)
#define AHLEKJMMLBA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xEB87210)
#define AHLEKJMMLBA_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xEB871D0)
#define AHLEKJMMLBA_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x1C7320)
#define AHLEKJMMLBA_SET_PROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0xACF0)
#define AHLEKJMMLBA_SET_PROTOTYPEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x94B0)
#define AHLEKJMMLBA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C7310)

	struct alignas(4) AHLEKJMMLBA
	{
		::APCGKBOPGJL _PrototypeIdentifier_k__BackingField; // 0x10
		::System::UInt32 _PromotionLevel_k__BackingField; // 0x18
		::System::Void _ctor(::APCGKBOPGJL a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::APCGKBOPGJL, ::System::UInt32))((::PBYTE)hIl2Cpp + AHLEKJMMLBA_CTOR_OFFSET))(this, a1, a2);
		}

		::APCGKBOPGJL get_PrototypeIdentifier()
		{
			return ((::APCGKBOPGJL(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLEKJMMLBA_GET_PROTOTYPEIDENTIFIER_OFFSET))(this);
		}

		::System::Void set_PrototypeIdentifier(::APCGKBOPGJL a1)
		{
			return ((::System::Void(*)(::PVOID, ::APCGKBOPGJL))((::PBYTE)hIl2Cpp + AHLEKJMMLBA_SET_PROTOTYPEIDENTIFIER_OFFSET))(this, a1);
		}

		::System::UInt32 get_PromotionLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLEKJMMLBA_GET_PROMOTIONLEVEL_OFFSET))(this);
		}

		::System::Void set_PromotionLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AHLEKJMMLBA_SET_PROMOTIONLEVEL_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLEKJMMLBA_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + AHLEKJMMLBA_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::AHLEKJMMLBA a1, ::AHLEKJMMLBA a2)
		{
			return ((::System::Boolean(*)(::AHLEKJMMLBA, ::AHLEKJMMLBA))((::PBYTE)hIl2Cpp + AHLEKJMMLBA_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::AHLEKJMMLBA a1, ::AHLEKJMMLBA a2)
		{
			return ((::System::Boolean(*)(::AHLEKJMMLBA, ::AHLEKJMMLBA))((::PBYTE)hIl2Cpp + AHLEKJMMLBA_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLEKJMMLBA_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AHLEKJMMLBA_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::AHLEKJMMLBA a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AHLEKJMMLBA))((::PBYTE)hIl2Cpp + AHLEKJMMLBA_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::APCGKBOPGJL a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::APCGKBOPGJL, ::System::UInt32))((::PBYTE)hIl2Cpp + AHLEKJMMLBA_DECONSTRUCT_OFFSET))(this, a1, a2);
		}

	};
