#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections { class BitArray; }

#define HAILIPBNAJL___C__DISPLAYCLASS35_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DAEC0)
#define HAILIPBNAJL___C__DISPLAYCLASS35_1___CALCAIREROLLINFO_B__5_OFFSET UNITYSDK_OFFSET(0x1D7DC9F0)

inline static constexpr unsigned int HAILIPBNAJL___c__DisplayClass35_1_TypeDefinitionIndex = 37342;

	template <typename T>
	class HAILIPBNAJL___c__DisplayClass35_1 : public ::System::Object
	{
	public:
		::System::Collections::BitArray* rerollBits; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAILIPBNAJL___C__DISPLAYCLASS35_1_CTOR_OFFSET))(this);
		}

		::System::Boolean __calcAIRerollInfo_b__5(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HAILIPBNAJL___C__DISPLAYCLASS35_1___CALCAIREROLLINFO_B__5_OFFSET))(this, a1);
		}

	};
