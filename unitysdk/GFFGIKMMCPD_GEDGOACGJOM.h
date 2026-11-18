#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GFFGIKMMCPD;
class JJOGIMMDEDM;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GFFGIKMMCPD_GEDGOACGJOM_MECEIPFDPMD_OFFSET UNITYSDK_OFFSET(0x179E57B0)
#define GFFGIKMMCPD_GEDGOACGJOM_NOAHLJDJDPI_OFFSET UNITYSDK_OFFSET(0x179E53D0)
#define GFFGIKMMCPD_GEDGOACGJOM__CTOR_OFFSET UNITYSDK_OFFSET(0x179E53C0)

inline static constexpr unsigned int GFFGIKMMCPD_GEDGOACGJOM_TypeDefinitionIndex = 50450;

class GFFGIKMMCPD_GEDGOACGJOM : public ::System::Object
{
public:
	::System::Action_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>* DKDBPEPKALE; // 0x10
	::GFFGIKMMCPD* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFGIKMMCPD_GEDGOACGJOM__CTOR_OFFSET))(this);
	}

	::System::Void NOAHLJDJDPI(::JJOGIMMDEDM* LEALGADOPLB)
	{
		return ((::System::Void(*)(::PVOID, ::JJOGIMMDEDM*))((::PBYTE)hIl2Cpp + GFFGIKMMCPD_GEDGOACGJOM_NOAHLJDJDPI_OFFSET))(this, LEALGADOPLB);
	}

	::System::Void MECEIPFDPMD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFGIKMMCPD_GEDGOACGJOM_MECEIPFDPMD_OFFSET))(this);
	}
};
