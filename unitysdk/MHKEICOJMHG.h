#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PINBHKFHPAL.h"

class AGFBKALALOF;
class FAIKBPENCON;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MHKEICOJMHG_DOODNGLPOJK_OFFSET UNITYSDK_OFFSET(0x1A654D20)
#define MHKEICOJMHG_GKLGMCNKKPD_OFFSET UNITYSDK_OFFSET(0x1A654CE0)
#define MHKEICOJMHG_JAILGLBIMNK_OFFSET UNITYSDK_OFFSET(0x1A654D60)
#define MHKEICOJMHG_JMKODDJHMBE_OFFSET UNITYSDK_OFFSET(0x1A654DA0)
#define MHKEICOJMHG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A654C40)

inline static constexpr unsigned int MHKEICOJMHG_TypeDefinitionIndex = 69093;

class MHKEICOJMHG : public ::PINBHKFHPAL
{
public:
	::FAIKBPENCON* ADANGBMIJBF; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::AGFBKALALOF*>* NCOFGOJOENH; // 0x18

	::System::Void _ctor(::FAIKBPENCON* ADANGBMIJBF)
	{
		return ((::System::Void(*)(::PVOID, ::FAIKBPENCON*))((::PBYTE)hIl2Cpp + MHKEICOJMHG__CTOR_OFFSET))(this, ADANGBMIJBF);
	}

	::System::Void GKLGMCNKKPD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHKEICOJMHG_GKLGMCNKKPD_OFFSET))(this);
	}

	::System::Void DOODNGLPOJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHKEICOJMHG_DOODNGLPOJK_OFFSET))(this);
	}

	::System::Boolean JAILGLBIMNK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MHKEICOJMHG_JAILGLBIMNK_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::AGFBKALALOF*>* JMKODDJHMBE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::AGFBKALALOF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHKEICOJMHG_JMKODDJHMBE_OFFSET))(this);
	}
};
