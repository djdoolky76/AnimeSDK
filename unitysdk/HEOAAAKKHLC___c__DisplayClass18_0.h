#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HEOAAAKKHLC;
class PKJOPFLMLLB;
namespace System { template <typename T> class Comparison_1; }

#define HEOAAAKKHLC___C__DISPLAYCLASS18_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAC6680)
#define HEOAAAKKHLC___C__DISPLAYCLASS18_0___MAKECHOICE_B__1_OFFSET UNITYSDK_OFFSET(0x1CAC7480)

inline static constexpr unsigned int HEOAAAKKHLC___c__DisplayClass18_0_TypeDefinitionIndex = 43034;

	class HEOAAAKKHLC___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::HEOAAAKKHLC* __4__this; // 0x10
		::System::Comparison_1<::PKJOPFLMLLB*>* __9__1; // 0x18
		::System::Int32 priority; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOAAAKKHLC___C__DISPLAYCLASS18_0_CTOR_OFFSET))(this);
		}

		::System::Int32 __MakeChoice_b__1(::PKJOPFLMLLB* a1, ::PKJOPFLMLLB* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::PKJOPFLMLLB*, ::PKJOPFLMLLB*))((::PBYTE)hIl2Cpp + HEOAAAKKHLC___C__DISPLAYCLASS18_0___MAKECHOICE_B__1_OFFSET))(this, a1, a2);
		}

	};
