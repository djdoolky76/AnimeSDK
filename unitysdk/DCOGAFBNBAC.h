#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBMJLLFNJPI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DCOGAFBNBAC_AAEAAMPJGLB_OFFSET UNITYSDK_OFFSET(0x1A54DD30)
#define DCOGAFBNBAC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A54DE70)
#define DCOGAFBNBAC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A54DF60)
#define DCOGAFBNBAC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A54DF70)
#define DCOGAFBNBAC_MAGONACILFL_OFFSET UNITYSDK_OFFSET(0x1A54DF80)
#define DCOGAFBNBAC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A54DD20)

inline static constexpr unsigned int DCOGAFBNBAC_TypeDefinitionIndex = 15869;

class DCOGAFBNBAC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* LBBBAMOFCJE; // 0x10
	::EBMJLLFNJPI HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 DCONCBNHHEO; // 0x34

	::System::Void _ctor(::EBMJLLFNJPI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EBMJLLFNJPI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DCOGAFBNBAC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 AAEAAMPJGLB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCOGAFBNBAC_AAEAAMPJGLB_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCOGAFBNBAC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DCOGAFBNBAC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCOGAFBNBAC_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* MAGONACILFL()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCOGAFBNBAC_MAGONACILFL_OFFSET))(this);
	}
};
