#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECPDGKLGCHJ;
class KDOPLFDBBGD;
class MINAKLCBJMO;
class OBJANKHLNGO;

#define KCDLNADPNCA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBBBC1B0)
#define KCDLNADPNCA_CTOR_OFFSET UNITYSDK_OFFSET(0xBBBC0F0)

inline static constexpr unsigned int KCDLNADPNCA_TypeDefinitionIndex = 84932;

	class KCDLNADPNCA : public ::System::Object
	{
	public:
		::MINAKLCBJMO* JDGBDKHIEGG; // 0x10
		::KDOPLFDBBGD* CGFKNIOKJAH; // 0x18
		::OBJANKHLNGO* GJALMBBNNOF; // 0x20
		// static const ::System::Object LHBCBGHPEON; // 0x0
		::System::Void _ctor(::MINAKLCBJMO* a1, ::KDOPLFDBBGD* a2, ::OBJANKHLNGO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MINAKLCBJMO*, ::KDOPLFDBBGD*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + KCDLNADPNCA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::ECPDGKLGCHJ* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::ECPDGKLGCHJ*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KCDLNADPNCA_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
