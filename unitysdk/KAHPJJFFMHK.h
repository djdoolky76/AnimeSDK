#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJJKNHPLHDI.h"
class JBACCAGFHON;
class KAHPJJFFMHK;

#define KAHPJJFFMHK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB2D1A20)
#define KAHPJJFFMHK_CTOR_OFFSET UNITYSDK_OFFSET(0xB2D1B40)
#define KAHPJJFFMHK_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0xB2D1A10)
#define KAHPJJFFMHK_KFPKFCEHHCK_OFFSET UNITYSDK_OFFSET(0xB2D1BF0)
#define KAHPJJFFMHK_PKLKNDIFCCG_OFFSET UNITYSDK_OFFSET(0xB2D1FA0)

inline static constexpr unsigned int KAHPJJFFMHK_TypeDefinitionIndex = 78131;

	class KAHPJJFFMHK : public ::DJJKNHPLHDI
	{
	public:
		::JBACCAGFHON* _Services_k__BackingField; // 0x30
		::System::Void _ctor(::JBACCAGFHON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*))((::PBYTE)hIl2Cpp + KAHPJJFFMHK_CTOR_OFFSET))(this, a1);
		}

		::JBACCAGFHON* get_Services()
		{
			return ((::JBACCAGFHON*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHPJJFFMHK_GET_SERVICES_OFFSET))(this);
		}

		static ::KAHPJJFFMHK* BPLPBPMEODA(::JBACCAGFHON* a1)
		{
			return ((::KAHPJJFFMHK*(*)(::JBACCAGFHON*))((::PBYTE)hIl2Cpp + KAHPJJFFMHK_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void KFPKFCEHHCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHPJJFFMHK_KFPKFCEHHCK_OFFSET))(this);
		}

		::System::Void PKLKNDIFCCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHPJJFFMHK_PKLKNDIFCCG_OFFSET))(this);
		}

	};
