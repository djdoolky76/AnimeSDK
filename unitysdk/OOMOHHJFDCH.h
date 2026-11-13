#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;

#define OOMOHHJFDCH_CTOR_OFFSET UNITYSDK_OFFSET(0x196AFCB0)
#define OOMOHHJFDCH_GDAKMGMPENM_OFFSET UNITYSDK_OFFSET(0x196AFCC0)
#define OOMOHHJFDCH_LMKBPEGKJIH_OFFSET UNITYSDK_OFFSET(0x196AFDC0)

inline static constexpr unsigned int OOMOHHJFDCH_TypeDefinitionIndex = 79867;

	class OOMOHHJFDCH : public ::System::Object
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x10
		::System::Void _ctor(::HLJNBBHKKMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + OOMOHHJFDCH_CTOR_OFFSET))(this, a1);
		}

		::System::Void GDAKMGMPENM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OOMOHHJFDCH_GDAKMGMPENM_OFFSET))(this, a1);
		}

		::System::Void LMKBPEGKJIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMOHHJFDCH_LMKBPEGKJIH_OFFSET))(this);
		}

	};
