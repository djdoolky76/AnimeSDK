#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAKADGHNMFK;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FGLMDDJIGBL___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1575DAE0)
#define FGLMDDJIGBL___C__DISPLAYCLASS5_0___EVALUATEARESELECTIONSEQUAL_B__0_OFFSET UNITYSDK_OFFSET(0x1575DAF0)

inline static constexpr unsigned int FGLMDDJIGBL___c__DisplayClass5_0_TypeDefinitionIndex = 77575;

	class FGLMDDJIGBL___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::KAKADGHNMFK*>* selection; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGLMDDJIGBL___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __EvaluateAreSelectionsEqual_b__0(::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>*))((::PBYTE)hIl2Cpp + FGLMDDJIGBL___C__DISPLAYCLASS5_0___EVALUATEARESELECTIONSEQUAL_B__0_OFFSET))(this, a1);
		}

	};
