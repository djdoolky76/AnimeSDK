#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHNIKPHKIOH;
class KDOPLFDBBGD;
class KMNIIHBJLGB;
class MINAKLCBJMO;
class OBJANKHLNGO;

#define BIMAJPFKOKM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1BAC4170)
#define BIMAJPFKOKM_CTOR_OFFSET UNITYSDK_OFFSET(0x1BAC4070)

inline static constexpr unsigned int BIMAJPFKOKM_TypeDefinitionIndex = 84903;

	class BIMAJPFKOKM : public ::System::Object
	{
	public:
		::OBJANKHLNGO* GJALMBBNNOF; // 0x10
		::MINAKLCBJMO* JDGBDKHIEGG; // 0x18
		::KDOPLFDBBGD* CGFKNIOKJAH; // 0x20
		::FHNIKPHKIOH* FPNMIGDJBIE; // 0x28
		// static const ::System::Object LHBCBGHPEON; // 0x0
		::System::Void _ctor(::MINAKLCBJMO* a1, ::KDOPLFDBBGD* a2, ::FHNIKPHKIOH* a3, ::OBJANKHLNGO* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MINAKLCBJMO*, ::KDOPLFDBBGD*, ::FHNIKPHKIOH*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + BIMAJPFKOKM_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::KMNIIHBJLGB* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::KMNIIHBJLGB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BIMAJPFKOKM_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
