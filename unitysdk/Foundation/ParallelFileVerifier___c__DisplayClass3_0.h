#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FHJPJMKIHBG.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ParallelFileVerifier; }

#define FOUNDATION_PARALLELFILEVERIFIER___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x142C0AC0)
#define FOUNDATION_PARALLELFILEVERIFIER___C__DISPLAYCLASS3_0__DOSLICE_PREFASTCHECK_B__0_OFFSET UNITYSDK_OFFSET(0x142C0AD0)

namespace Foundation
{
	inline static constexpr unsigned int ParallelFileVerifier___c__DisplayClass3_0_TypeDefinitionIndex = 50670;

	class ParallelFileVerifier___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::Foundation::ParallelFileVerifier* __4__this; // 0x10
		::FHJPJMKIHBG checkFile; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEVERIFIER___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoSlice_PreFastCheck_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEVERIFIER___C__DISPLAYCLASS3_0__DOSLICE_PREFASTCHECK_B__0_OFFSET))(this);
		}
	};
}
