#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDIEECCKILM;
class OBJANKHLNGO;
class PHKEBBMDJKD;

#define JHFONGFGNMM_CTOR_OFFSET UNITYSDK_OFFSET(0xB1AC760)
#define JHFONGFGNMM_GBGKLADHDBI_OFFSET UNITYSDK_OFFSET(0xB1AC8D0)
#define JHFONGFGNMM_START_OFFSET UNITYSDK_OFFSET(0xB1AC7E0)
#define JHFONGFGNMM_STOP_OFFSET UNITYSDK_OFFSET(0xB1AC870)

inline static constexpr unsigned int JHFONGFGNMM_TypeDefinitionIndex = 81024;

	class JHFONGFGNMM : public ::System::Object
	{
	public:
		::PHKEBBMDJKD* LBNAGLIGKIO; // 0x10
		::OBJANKHLNGO* GJALMBBNNOF; // 0x18
		::System::Void _ctor(::PHKEBBMDJKD* a1, ::OBJANKHLNGO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PHKEBBMDJKD*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + JHFONGFGNMM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFONGFGNMM_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFONGFGNMM_STOP_OFFSET))(this);
		}

		::System::Void GBGKLADHDBI(::JDIEECCKILM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDIEECCKILM*))((::PBYTE)hIl2Cpp + JHFONGFGNMM_GBGKLADHDBI_OFFSET))(this, a1);
		}

	};
