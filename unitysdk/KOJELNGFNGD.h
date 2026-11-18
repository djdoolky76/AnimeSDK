#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBMAFMGEOFD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KOJELNGFNGD_CBKGHIMEBCM_OFFSET UNITYSDK_OFFSET(0x1B645740)
#define KOJELNGFNGD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B645B70)
#define KOJELNGFNGD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B645890)
#define KOJELNGFNGD_GGMHEHCNJMH_OFFSET UNITYSDK_OFFSET(0x1B645600)
#define KOJELNGFNGD_JMHDGOGLBJE_OFFSET UNITYSDK_OFFSET(0x1B6458A0)
#define KOJELNGFNGD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B645880)
#define KOJELNGFNGD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6455F0)

inline static constexpr unsigned int KOJELNGFNGD_TypeDefinitionIndex = 9325;

class KOJELNGFNGD : public ::System::Object
{
public:
	::PBMAFMGEOFD HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* ELKLDKFJADH; // 0x28
	::System::Int32 DMOMLCKFFKM; // 0x30
	::System::Byte CNIAANMNOCF; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x35
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 GBDGOMGIOKK; // 0x38

	::System::Void _ctor(::PBMAFMGEOFD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PBMAFMGEOFD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KOJELNGFNGD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 GGMHEHCNJMH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJELNGFNGD_GGMHEHCNJMH_OFFSET))(this);
	}

	::System::Int32 CBKGHIMEBCM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJELNGFNGD_CBKGHIMEBCM_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJELNGFNGD_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KOJELNGFNGD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* JMHDGOGLBJE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJELNGFNGD_JMHDGOGLBJE_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJELNGFNGD_COFGIJJOFLP_OFFSET))(this);
	}
};
