#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
namespace RPG::GameCore { class BaseChimeraDuelNode; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GMOJFIOPIAD___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15ADB540)
#define GMOJFIOPIAD___C__DISPLAYCLASS2_0___EVALUATEPARALLEL_B__0_OFFSET UNITYSDK_OFFSET(0x15ADC690)

inline static constexpr unsigned int GMOJFIOPIAD___c__DisplayClass2_0_TypeDefinitionIndex = 77620;

	class GMOJFIOPIAD___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BaseChimeraDuelNode*, ::System::Int32>* fallbackOrder; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMOJFIOPIAD___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Int32 __EvaluateParallel_b__0(::System::ValueTuple a1, ::System::ValueTuple a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple, ::System::ValueTuple))((::PBYTE)hIl2Cpp + GMOJFIOPIAD___C__DISPLAYCLASS2_0___EVALUATEPARALLEL_B__0_OFFSET))(this, a1, a2);
		}

	};
