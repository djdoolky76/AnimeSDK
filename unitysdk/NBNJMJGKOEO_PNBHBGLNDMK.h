#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLFBLCIJPKD_FOBIKPLLGLE.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define NBNJMJGKOEO_PNBHBGLNDMK_BLPGBMJMAJF_OFFSET UNITYSDK_OFFSET(0x1288A620)
#define NBNJMJGKOEO_PNBHBGLNDMK_CFDPNIAHKAF_OFFSET UNITYSDK_OFFSET(0x1288A690)
#define NBNJMJGKOEO_PNBHBGLNDMK_IAHPLEHJFGB_OFFSET UNITYSDK_OFFSET(0x1288ACB0)
#define NBNJMJGKOEO_PNBHBGLNDMK_JFNIMFIBFHA_OFFSET UNITYSDK_OFFSET(0x1288AD50)
#define NBNJMJGKOEO_PNBHBGLNDMK_KJOHEMDIHNJ_OFFSET UNITYSDK_OFFSET(0x1288AE70)
#define NBNJMJGKOEO_PNBHBGLNDMK__CTOR_OFFSET UNITYSDK_OFFSET(0x1288A610)

inline static constexpr unsigned int NBNJMJGKOEO_PNBHBGLNDMK_TypeDefinitionIndex = 68612;

class NBNJMJGKOEO_PNBHBGLNDMK : public ::CLFBLCIJPKD_FOBIKPLLGLE
{
public:
	// static const ::System::String* LOBAGGDCFBC; // 0x0
	::System::Collections::Generic::IReadOnlyList_1<::System::String*>* LFNJKLCBNPG; // 0x28
	::System::Int32 NGNDCFHGNJK; // 0x30

	::System::Void _ctor(::System::Int32 GPJPMCGBHFI, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* JMDOANHOEJG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + NBNJMJGKOEO_PNBHBGLNDMK__CTOR_OFFSET))(this, GPJPMCGBHFI, JMDOANHOEJG);
	}

	::System::Int32 BLPGBMJMAJF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNJMJGKOEO_PNBHBGLNDMK_BLPGBMJMAJF_OFFSET))(this);
	}

	::System::Void IAHPLEHJFGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNJMJGKOEO_PNBHBGLNDMK_IAHPLEHJFGB_OFFSET))(this);
	}

	::System::Void JFNIMFIBFHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNJMJGKOEO_PNBHBGLNDMK_JFNIMFIBFHA_OFFSET))(this);
	}

	::System::Int32 KJOHEMDIHNJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNJMJGKOEO_PNBHBGLNDMK_KJOHEMDIHNJ_OFFSET))(this);
	}

	::System::Boolean CFDPNIAHKAF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNJMJGKOEO_PNBHBGLNDMK_CFDPNIAHKAF_OFFSET))(this);
	}
};
