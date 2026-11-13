#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AKCLHMNONOD.h"
class CMDIMAOAEIB;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define EFFKCBKCPAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1A335060)
#define EFFKCBKCPAL_NPMPLDEGIJJ_OFFSET UNITYSDK_OFFSET(0x1A335070)

inline static constexpr unsigned int EFFKCBKCPAL_TypeDefinitionIndex = 77082;

	class EFFKCBKCPAL : public ::System::Object
	{
	public:
		::CMDIMAOAEIB* MNJAIGHOJID; // 0x10
		::System::Void _ctor(::CMDIMAOAEIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMDIMAOAEIB*))((::PBYTE)hIl2Cpp + EFFKCBKCPAL_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::AKCLHMNONOD>* NPMPLDEGIJJ(::System::UInt32 a1, ::System::Collections::Generic::HashSet_1<::AKCLHMNONOD>* a2)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::AKCLHMNONOD>*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::HashSet_1<::AKCLHMNONOD>*))((::PBYTE)hIl2Cpp + EFFKCBKCPAL_NPMPLDEGIJJ_OFFSET))(this, a1, a2);
		}

	};
