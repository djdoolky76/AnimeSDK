#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CALIGLPABNP;
class NAPAFGBIBBL;
class NOAHNKGLKKG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JAJNOEDOILI_NKAHPFDCHJE_OFFSET UNITYSDK_OFFSET(0x160C7470)
#define JAJNOEDOILI_NLILGLKKANG_OFFSET UNITYSDK_OFFSET(0x160C7120)
#define JAJNOEDOILI_NMLOOAKEJPD_OFFSET UNITYSDK_OFFSET(0x160C75E0)
#define JAJNOEDOILI__CCTOR_OFFSET UNITYSDK_OFFSET(0x160C7090)

inline static constexpr unsigned int JAJNOEDOILI_TypeDefinitionIndex = 76006;

class JAJNOEDOILI : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::CALIGLPABNP*>** StaticGet_MABMAPELAKK()
	{
		return (::System::Collections::Generic::List_1<::CALIGLPABNP*>**)Il2CppClass::FromTypeDefinitionIndex(JAJNOEDOILI_TypeDefinitionIndex)->GetStaticField(0x4E5E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JAJNOEDOILI__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::CALIGLPABNP*>* NLILGLKKANG(::NAPAFGBIBBL* HNAFHHFBBIF)
	{
		return ((::System::Collections::Generic::List_1<::CALIGLPABNP*>*(*)(::NAPAFGBIBBL*))((::PBYTE)hIl2Cpp + JAJNOEDOILI_NLILGLKKANG_OFFSET))(HNAFHHFBBIF);
	}

	static ::System::Int32 NKAHPFDCHJE(::NAPAFGBIBBL* HNAFHHFBBIF)
	{
		return ((::System::Int32(*)(::NAPAFGBIBBL*))((::PBYTE)hIl2Cpp + JAJNOEDOILI_NKAHPFDCHJE_OFFSET))(HNAFHHFBBIF);
	}

	static ::System::Void NMLOOAKEJPD(::System::Collections::Generic::List_1<::NOAHNKGLKKG*>* KDPMMHHMPAM)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::NOAHNKGLKKG*>*))((::PBYTE)hIl2Cpp + JAJNOEDOILI_NMLOOAKEJPD_OFFSET))(KDPMMHHMPAM);
	}
};
