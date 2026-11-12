#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCNJPPOCDMB;
class FHNIKPHKIOH;
class MINAKLCBJMO;
class MJCMGOEMKCC;
class MKPKHAOGJHA;
class NDPFAOKFLLJ;
class OKIDCBGPKJG;

#define FKDIODMGEPH_CTOR_OFFSET UNITYSDK_OFFSET(0x167562B0)
#define FKDIODMGEPH_DHOPHHJMAHH_OFFSET UNITYSDK_OFFSET(0x16756370)
#define FKDIODMGEPH_JEMICHDBIOB_OFFSET UNITYSDK_OFFSET(0x16756410)
#define FKDIODMGEPH_NLILKGKCKPG_OFFSET UNITYSDK_OFFSET(0x16756500)

inline static constexpr unsigned int FKDIODMGEPH_TypeDefinitionIndex = 84895;

	class FKDIODMGEPH : public ::System::Object
	{
	public:
		::FHNIKPHKIOH* FPNMIGDJBIE; // 0x10
		::MKPKHAOGJHA* JABCEDNJJBD; // 0x18
		::MINAKLCBJMO* JDGBDKHIEGG; // 0x20
		::System::Void _ctor(::MINAKLCBJMO* a1, ::FHNIKPHKIOH* a2, ::MKPKHAOGJHA* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MINAKLCBJMO*, ::FHNIKPHKIOH*, ::MKPKHAOGJHA*))((::PBYTE)hIl2Cpp + FKDIODMGEPH_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::CCNJPPOCDMB* DHOPHHJMAHH(::System::UInt32 a1)
		{
			return ((::CCNJPPOCDMB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FKDIODMGEPH_DHOPHHJMAHH_OFFSET))(this, a1);
		}

		::OKIDCBGPKJG* NLILKGKCKPG(::NDPFAOKFLLJ* a1, ::System::Boolean a2)
		{
			return ((::OKIDCBGPKJG*(*)(::PVOID, ::NDPFAOKFLLJ*, ::System::Boolean))((::PBYTE)hIl2Cpp + FKDIODMGEPH_NLILKGKCKPG_OFFSET))(this, a1, a2);
		}

		::MJCMGOEMKCC* JEMICHDBIOB(::System::UInt32 a1)
		{
			return ((::MJCMGOEMKCC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FKDIODMGEPH_JEMICHDBIOB_OFFSET))(this, a1);
		}

	};
