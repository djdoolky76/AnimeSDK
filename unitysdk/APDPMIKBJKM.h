#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJHMBGLPOLB;
class KOIACJAJFEC;
class OOCCBMLAELL;

#define APDPMIKBJKM_CTOR_OFFSET UNITYSDK_OFFSET(0x15B9BD90)

inline static constexpr unsigned int APDPMIKBJKM_TypeDefinitionIndex = 80590;

	class APDPMIKBJKM : public ::System::Object
	{
	public:
		::OOCCBMLAELL* ELIMDKMMGBO; // 0x10
		::KOIACJAJFEC* BLGKHCMDJJP; // 0x18
		::BJHMBGLPOLB* KDFKDNLNDHN; // 0x20
		::System::Void _ctor(::OOCCBMLAELL* a1, ::BJHMBGLPOLB* a2, ::KOIACJAJFEC* a3)
		{
			return ((::System::Void(*)(::PVOID, ::OOCCBMLAELL*, ::BJHMBGLPOLB*, ::KOIACJAJFEC*))((::PBYTE)hIl2Cpp + APDPMIKBJKM_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
