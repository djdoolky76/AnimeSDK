#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMFIEIBPFID.h"
#include "unitysdk/System/Object.h"

class ADAFLEAKOLA;
class PCAPBLPGMJM_DICANIBIMLM;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PCAPBLPGMJM_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x1845F7B0)
#define PCAPBLPGMJM_CCFINLNAJCC_OFFSET UNITYSDK_OFFSET(0x1845F750)
#define PCAPBLPGMJM_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x1845F520)
#define PCAPBLPGMJM_IPMKHNLKGFD_OFFSET UNITYSDK_OFFSET(0x1845F570)
#define PCAPBLPGMJM_LDNBPOPDLCM_OFFSET UNITYSDK_OFFSET(0x1845F850)
#define PCAPBLPGMJM__CTOR_OFFSET UNITYSDK_OFFSET(0x1845F490)

inline static constexpr unsigned int PCAPBLPGMJM_TypeDefinitionIndex = 41794;

class PCAPBLPGMJM : public ::System::Object
{
public:
	::ADAFLEAKOLA* OILPDDGCEGL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Object*>*>* DDPFGLIHBNI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCAPBLPGMJM__CTOR_OFFSET))(this);
	}

	::System::Void EDEFLFIKNFK(::ADAFLEAKOLA* LCHKNMJECLL)
	{
		return ((::System::Void(*)(::PVOID, ::ADAFLEAKOLA*))((::PBYTE)hIl2Cpp + PCAPBLPGMJM_EDEFLFIKNFK_OFFSET))(this, LCHKNMJECLL);
	}

	::System::Void IPMKHNLKGFD(::System::Int32 APGMPFJEIHF, ::EMFIEIBPFID JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::EMFIEIBPFID))((::PBYTE)hIl2Cpp + PCAPBLPGMJM_IPMKHNLKGFD_OFFSET))(this, APGMPFJEIHF, JKBLDFBGBPK);
	}

	::EMFIEIBPFID CCFINLNAJCC(::System::Int32 APGMPFJEIHF)
	{
		return ((::EMFIEIBPFID(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PCAPBLPGMJM_CCFINLNAJCC_OFFSET))(this, APGMPFJEIHF);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCAPBLPGMJM_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void LDNBPOPDLCM(::System::Int32 APGMPFJEIHF, ::PCAPBLPGMJM_DICANIBIMLM* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::PCAPBLPGMJM_DICANIBIMLM*))((::PBYTE)hIl2Cpp + PCAPBLPGMJM_LDNBPOPDLCM_OFFSET))(this, APGMPFJEIHF, EJGDHCIBCJH);
	}
};
