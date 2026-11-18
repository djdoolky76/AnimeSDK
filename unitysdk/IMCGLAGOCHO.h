#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ELFDOCCOFLJ_2.h"
#include "unitysdk/MHAKJKLLPBA.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IMCGLAGOCHO_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x16589BE0)
#define IMCGLAGOCHO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x165897B0)
#define IMCGLAGOCHO_EKELFNAEHJD_1_OFFSET UNITYSDK_OFFSET(0x16589AA0)
#define IMCGLAGOCHO_EKELFNAEHJD_OFFSET UNITYSDK_OFFSET(0x165899D0)
#define IMCGLAGOCHO_NOKHDIBCBPN_OFFSET UNITYSDK_OFFSET(0x16589D20)
#define IMCGLAGOCHO_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x16589870)
#define IMCGLAGOCHO_OMPFLKCBFHF_OFFSET UNITYSDK_OFFSET(0x16589B20)
#define IMCGLAGOCHO__CTOR_OFFSET UNITYSDK_OFFSET(0x16589910)

inline static constexpr unsigned int IMCGLAGOCHO_TypeDefinitionIndex = 87119;

class IMCGLAGOCHO : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::ELFDOCCOFLJ_2<::System::UInt32, ::System::UInt32>, ::MHAKJKLLPBA>* ABGEHGJMCNP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCGLAGOCHO__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCGLAGOCHO_DISPOSE_OFFSET))(this);
	}

	::System::Void EKELFNAEHJD(::System::UInt32& KMMGKJPAOMF, ::System::UInt32& LJMPPBEMEPP, ::MHAKJKLLPBA& OKIFLDKHFCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32&, ::MHAKJKLLPBA&))((::PBYTE)hIl2Cpp + IMCGLAGOCHO_EKELFNAEHJD_OFFSET))(this, KMMGKJPAOMF, LJMPPBEMEPP, OKIFLDKHFCP);
	}

	::System::Boolean OMPFLKCBFHF(::ELFDOCCOFLJ_2<::System::UInt32, ::System::UInt32>& MCOHLHMKLIP, ::MHAKJKLLPBA& OKIFLDKHFCP)
	{
		return ((::System::Boolean(*)(::PVOID, ::ELFDOCCOFLJ_2<::System::UInt32, ::System::UInt32>&, ::MHAKJKLLPBA&))((::PBYTE)hIl2Cpp + IMCGLAGOCHO_OMPFLKCBFHF_OFFSET))(this, MCOHLHMKLIP, OKIFLDKHFCP);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCGLAGOCHO_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void EKELFNAEHJD_1(::ELFDOCCOFLJ_2<::System::UInt32, ::System::UInt32>& MCOHLHMKLIP, ::MHAKJKLLPBA& OKIFLDKHFCP)
	{
		return ((::System::Void(*)(::PVOID, ::ELFDOCCOFLJ_2<::System::UInt32, ::System::UInt32>&, ::MHAKJKLLPBA&))((::PBYTE)hIl2Cpp + IMCGLAGOCHO_EKELFNAEHJD_1_OFFSET))(this, MCOHLHMKLIP, OKIFLDKHFCP);
	}

	static ::IMCGLAGOCHO* COKNIICCODC()
	{
		return ((::IMCGLAGOCHO*(*)())((::PBYTE)hIl2Cpp + IMCGLAGOCHO_COKNIICCODC_OFFSET))();
	}

	::System::Void NOKHDIBCBPN(::System::Action_1<::ELFDOCCOFLJ_2<::System::UInt32, ::System::UInt32>>* KLCBMLLHGOF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::ELFDOCCOFLJ_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + IMCGLAGOCHO_NOKHDIBCBPN_OFFSET))(this, KLCBMLLHGOF);
	}
};
