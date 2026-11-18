#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFDKEANKAIL.h"
#include "unitysdk/System/Object.h"

class IHIGHKGNGIA;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define FCAKKOGLNNJ_KFNABGMFJPM_OFFSET UNITYSDK_OFFSET(0x156B3260)
#define FCAKKOGLNNJ_LMGNLJJHGGD_OFFSET UNITYSDK_OFFSET(0x156B3460)

inline static constexpr unsigned int FCAKKOGLNNJ_TypeDefinitionIndex = 42339;

class FCAKKOGLNNJ : public ::System::Object
{
public:
	static ::IHIGHKGNGIA* KFNABGMFJPM(::OFDKEANKAIL MAOCFFFKJCF, ::System::Int32 FAJELEHOCOA)
	{
		return ((::IHIGHKGNGIA*(*)(::OFDKEANKAIL, ::System::Int32))((::PBYTE)hIl2Cpp + FCAKKOGLNNJ_KFNABGMFJPM_OFFSET))(MAOCFFFKJCF, FAJELEHOCOA);
	}

	static ::System::Collections::Generic::IReadOnlyList_1<::IHIGHKGNGIA*>* LMGNLJJHGGD(::OFDKEANKAIL MAOCFFFKJCF)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::IHIGHKGNGIA*>*(*)(::OFDKEANKAIL))((::PBYTE)hIl2Cpp + FCAKKOGLNNJ_LMGNLJJHGGD_OFFSET))(MAOCFFFKJCF);
	}
};
