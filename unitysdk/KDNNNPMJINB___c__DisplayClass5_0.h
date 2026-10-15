#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDNNNPMJINB;

#define KDNNNPMJINB___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C53D230)
#define KDNNNPMJINB___C__DISPLAYCLASS5_0__ITERATEAFFECTEDCELLS_B__0_OFFSET UNITYSDK_OFFSET(0x1C53D240)

inline static constexpr unsigned int KDNNNPMJINB___c__DisplayClass5_0_TypeDefinitionIndex = 41782;

	class KDNNNPMJINB___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::KDNNNPMJINB* __4__this; // 0x10
		::System::Int32 directionalDimensionIndex; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDNNNPMJINB___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _IterateAffectedCells_b__0(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDNNNPMJINB___C__DISPLAYCLASS5_0__ITERATEAFFECTEDCELLS_B__0_OFFSET))(this, a1);
		}

	};
