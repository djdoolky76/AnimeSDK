#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OJJBIJLCNMK.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AMIPMNIPIOI_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x14517DD0)
#define AMIPMNIPIOI_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x14517E20)
#define AMIPMNIPIOI_KMBCHNHIOJF_OFFSET UNITYSDK_OFFSET(0x14518120)
#define AMIPMNIPIOI_NCLNGHHEBOJ_OFFSET UNITYSDK_OFFSET(0x14517F50)
#define AMIPMNIPIOI__CTOR_OFFSET UNITYSDK_OFFSET(0x14517CC0)

inline static constexpr unsigned int AMIPMNIPIOI_TypeDefinitionIndex = 63313;

class AMIPMNIPIOI : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::OJJBIJLCNMK>* MHJMDMOAMKB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIPMNIPIOI__CTOR_OFFSET))(this);
	}

	::OJJBIJLCNMK COKNIICCODC(::System::Int32 EFJNFKCBCOD, ::System::Int32 FGHCGCMHLEN)
	{
		return ((::OJJBIJLCNMK(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AMIPMNIPIOI_COKNIICCODC_OFFSET))(this, EFJNFKCBCOD, FGHCGCMHLEN);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::OJJBIJLCNMK>* NCLNGHHEBOJ()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::OJJBIJLCNMK>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIPMNIPIOI_NCLNGHHEBOJ_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIPMNIPIOI_BBOMJDBNHIC_OFFSET))(this);
	}

	::System::Void KMBCHNHIOJF(::System::Collections::Generic::Dictionary_2<::System::String*, ::OJJBIJLCNMK>* CEJINGOKOLC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::OJJBIJLCNMK>*))((::PBYTE)hIl2Cpp + AMIPMNIPIOI_KMBCHNHIOJF_OFFSET))(this, CEJINGOKOLC);
	}
};
