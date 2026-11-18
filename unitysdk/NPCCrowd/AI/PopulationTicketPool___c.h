#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { template <typename T> class Comparison_1; }

#define NPCCROWD_AI_POPULATIONTICKETPOOL___C__BUILDNONWHITEROUNDORDER_B__14_0_OFFSET UNITYSDK_OFFSET(0xED557F0)
#define NPCCROWD_AI_POPULATIONTICKETPOOL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xED557A0)
#define NPCCROWD_AI_POPULATIONTICKETPOOL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xED557E0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PopulationTicketPool___c_TypeDefinitionIndex = 48305;

	class PopulationTicketPool___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::ValueTuple_2<::System::Int32, ::System::Single>>** StaticGet___9__14_0()
		{
			return (::System::Comparison_1<::System::ValueTuple_2<::System::Int32, ::System::Single>>**)Il2CppClass::FromTypeDefinitionIndex(PopulationTicketPool___c_TypeDefinitionIndex)->GetStaticField(0x4DC20);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PopulationTicketPool___c_TypeDefinitionIndex)->GetStaticField(0x4DC28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONTICKETPOOL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONTICKETPOOL___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _BuildNonWhiteRoundOrder_b__14_0(::System::ValueTuple_2<::System::Int32, ::System::Single> a, ::System::ValueTuple_2<::System::Int32, ::System::Single> b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Single>, ::System::ValueTuple_2<::System::Int32, ::System::Single>))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONTICKETPOOL___C__BUILDNONWHITEROUNDORDER_B__14_0_OFFSET))(this, a, b);
		}
	};
}
