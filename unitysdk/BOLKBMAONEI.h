#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHNIKPHKIOH;
class KNHIOIFECGB;
class MINAKLCBJMO;
class MKPKHAOGJHA;
class OBJANKHLNGO;

#define BOLKBMAONEI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xCB364C0)
#define BOLKBMAONEI_CTOR_OFFSET UNITYSDK_OFFSET(0xCB363C0)

inline static constexpr unsigned int BOLKBMAONEI_TypeDefinitionIndex = 84926;

	class BOLKBMAONEI : public ::System::Object
	{
	public:
		::MINAKLCBJMO* JDGBDKHIEGG; // 0x10
		::FHNIKPHKIOH* FPNMIGDJBIE; // 0x18
		::OBJANKHLNGO* GJALMBBNNOF; // 0x20
		::MKPKHAOGJHA* JABCEDNJJBD; // 0x28
		::System::Void _ctor(::MKPKHAOGJHA* a1, ::MINAKLCBJMO* a2, ::FHNIKPHKIOH* a3, ::OBJANKHLNGO* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MKPKHAOGJHA*, ::MINAKLCBJMO*, ::FHNIKPHKIOH*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + BOLKBMAONEI_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::KNHIOIFECGB* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::KNHIOIFECGB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BOLKBMAONEI_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
