#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHNIKPHKIOH;
class GODMEPNFLDG;
class KDOPLFDBBGD;
class LHHBMBIDKIC;
class MINAKLCBJMO;
class MKPKHAOGJHA;
class OBJANKHLNGO;

#define PBGJDLAPILI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1AABBB60)
#define PBGJDLAPILI_CTOR_OFFSET UNITYSDK_OFFSET(0x1AABB9E0)

inline static constexpr unsigned int PBGJDLAPILI_TypeDefinitionIndex = 84917;

	class PBGJDLAPILI : public ::System::Object
	{
	public:
		::KDOPLFDBBGD* CGFKNIOKJAH; // 0x10
		::MINAKLCBJMO* JDGBDKHIEGG; // 0x18
		::LHHBMBIDKIC* LDGFHGDKLIE; // 0x20
		::OBJANKHLNGO* GJALMBBNNOF; // 0x28
		::FHNIKPHKIOH* FPNMIGDJBIE; // 0x30
		::MKPKHAOGJHA* JABCEDNJJBD; // 0x38
		::System::Void _ctor(::MINAKLCBJMO* a1, ::KDOPLFDBBGD* a2, ::FHNIKPHKIOH* a3, ::LHHBMBIDKIC* a4, ::MKPKHAOGJHA* a5, ::OBJANKHLNGO* a6)
		{
			return ((::System::Void(*)(::PVOID, ::MINAKLCBJMO*, ::KDOPLFDBBGD*, ::FHNIKPHKIOH*, ::LHHBMBIDKIC*, ::MKPKHAOGJHA*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + PBGJDLAPILI_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::GODMEPNFLDG* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::GODMEPNFLDG*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PBGJDLAPILI_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
