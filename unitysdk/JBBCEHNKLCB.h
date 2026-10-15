#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJNOKELAIOA;
class NIAKMMKHBJI;

#define JBBCEHNKLCB_CTOR_OFFSET UNITYSDK_OFFSET(0x16560840)
#define JBBCEHNKLCB_PGLNBEBCFMA_OFFSET UNITYSDK_OFFSET(0x16560730)

inline static constexpr unsigned int JBBCEHNKLCB_TypeDefinitionIndex = 62368;

	class JBBCEHNKLCB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBBCEHNKLCB_CTOR_OFFSET))(this);
		}

		static ::NIAKMMKHBJI* PGLNBEBCFMA(::System::Int32 a1, ::CJNOKELAIOA* a2)
		{
			return ((::NIAKMMKHBJI*(*)(::System::Int32, ::CJNOKELAIOA*))((::PBYTE)hIl2Cpp + JBBCEHNKLCB_PGLNBEBCFMA_OFFSET))(a1, a2);
		}

	};
