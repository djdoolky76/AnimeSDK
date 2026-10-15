#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMFNPJFKAOH;
class FJFNJCPHFDM;
class FKPKLHICPFO;
class GAGKMDGBGFL;
class OBJANKHLNGO;

#define EAKMNIMFGGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1267DC70)
#define EAKMNIMFGGK_EBHHDNLACHP_OFFSET UNITYSDK_OFFSET(0x1267DC90)
#define EAKMNIMFGGK_GJFGMKLNAGE_OFFSET UNITYSDK_OFFSET(0x1267DE60)

inline static constexpr unsigned int EAKMNIMFGGK_TypeDefinitionIndex = 80211;

	class EAKMNIMFGGK : public ::System::Object
	{
	public:
		::FJFNJCPHFDM* GKPHGLBPCKD; // 0x10
		::AMFNPJFKAOH* BDLGFMBOOGC; // 0x18
		::GAGKMDGBGFL* MJHHLOPFDNK; // 0x20
		::OBJANKHLNGO* GJALMBBNNOF; // 0x28
		::System::Void _ctor(::OBJANKHLNGO* a1, ::GAGKMDGBGFL* a2, ::AMFNPJFKAOH* a3, ::FJFNJCPHFDM* a4)
		{
			return ((::System::Void(*)(::PVOID, ::OBJANKHLNGO*, ::GAGKMDGBGFL*, ::AMFNPJFKAOH*, ::FJFNJCPHFDM*))((::PBYTE)hIl2Cpp + EAKMNIMFGGK_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EBHHDNLACHP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EAKMNIMFGGK_EBHHDNLACHP_OFFSET))(this, a1);
		}

		::System::Void GJFGMKLNAGE(::System::UInt32 a1, ::FKPKLHICPFO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::FKPKLHICPFO*))((::PBYTE)hIl2Cpp + EAKMNIMFGGK_GJFGMKLNAGE_OFFSET))(this, a1, a2);
		}

	};
