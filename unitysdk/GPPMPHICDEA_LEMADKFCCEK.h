#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EMLGGGPOHEN;
class KNICNDJMCJE;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GPPMPHICDEA_LEMADKFCCEK_ANMHJPEJGIM_OFFSET UNITYSDK_OFFSET(0x13D78110)
#define GPPMPHICDEA_LEMADKFCCEK_IIDMEBIOONJ_OFFSET UNITYSDK_OFFSET(0x13D78730)
#define GPPMPHICDEA_LEMADKFCCEK__CTOR_OFFSET UNITYSDK_OFFSET(0x13D78100)

inline static constexpr unsigned int GPPMPHICDEA_LEMADKFCCEK_TypeDefinitionIndex = 42642;

class GPPMPHICDEA_LEMADKFCCEK : public ::System::Object
{
public:
	::System::Int32 BEKAGNFAFGI; // 0x10
	::System::Int32 KCJHDEGPBNI; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_LEMADKFCCEK__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::EMLGGGPOHEN*>* ANMHJPEJGIM()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::EMLGGGPOHEN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_LEMADKFCCEK_ANMHJPEJGIM_OFFSET))(this);
	}

	::System::Boolean IIDMEBIOONJ(::KNICNDJMCJE* IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::KNICNDJMCJE*))((::PBYTE)hIl2Cpp + GPPMPHICDEA_LEMADKFCCEK_IIDMEBIOONJ_OFFSET))(this, IPMMCGDMODG);
	}
};
