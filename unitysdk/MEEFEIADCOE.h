#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define MEEFEIADCOE_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1C925110)
#define MEEFEIADCOE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C2FCE0)
#define MEEFEIADCOE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C2FCA0)
#define MEEFEIADCOE_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1C925050)
#define MEEFEIADCOE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C2FDB0)

inline static constexpr unsigned int MEEFEIADCOE_TypeDefinitionIndex = 42018;

	struct alignas(8) MEEFEIADCOE
	{
		::System::Int32 BCNJOLIFEEF; // 0x10
		::System::Boolean LJPDMIJFEFM; // 0x14
		::System::Boolean KJGAONILDMA; // 0x15
		::System::Byte _padding0[0x2];
		::System::String* DHMDAEKJENF; // 0x18
		::System::UInt32 DFEJABODPGM; // 0x20
		::System::Byte _padding1[0x4];
		::System::Action* IMDLGFPMPEK; // 0x28
		::System::Action_3<::System::String*, ::System::UInt32, ::System::Int32>* LMOBGIANDOO; // 0x30
		/*
		::System::Boolean Equals(::MEEFEIADCOE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MEEFEIADCOE))((::PBYTE)hIl2Cpp + MEEFEIADCOE_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MEEFEIADCOE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEFEIADCOE_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::MEEFEIADCOE a1, ::MEEFEIADCOE a2)
		{
			return ((::System::Boolean(*)(::MEEFEIADCOE, ::MEEFEIADCOE))((::PBYTE)hIl2Cpp + MEEFEIADCOE_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::MEEFEIADCOE a1, ::MEEFEIADCOE a2)
		{
			return ((::System::Boolean(*)(::MEEFEIADCOE, ::MEEFEIADCOE))((::PBYTE)hIl2Cpp + MEEFEIADCOE_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

	};
