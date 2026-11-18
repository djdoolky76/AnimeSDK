#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ILNPFAABPEH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IDGFOHJLJMD_BFPPFIPCFFE_OFFSET UNITYSDK_OFFSET(0x18BB64D0)
#define IDGFOHJLJMD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18BB65E0)
#define IDGFOHJLJMD_DMMNHBNKBEE_OFFSET UNITYSDK_OFFSET(0x18BB6240)
#define IDGFOHJLJMD_ECHFFICBOLK_OFFSET UNITYSDK_OFFSET(0x18BB6390)
#define IDGFOHJLJMD_EFGEDHEFHJK_OFFSET UNITYSDK_OFFSET(0x18BB66E0)
#define IDGFOHJLJMD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18BB6380)
#define IDGFOHJLJMD_HCAEDMLAJCE_OFFSET UNITYSDK_OFFSET(0x18BB6AC0)
#define IDGFOHJLJMD_LCPOBACCNCP_OFFSET UNITYSDK_OFFSET(0x18BB67F0)
#define IDGFOHJLJMD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18BB66D0)
#define IDGFOHJLJMD__CTOR_OFFSET UNITYSDK_OFFSET(0x18BB6230)

inline static constexpr unsigned int IDGFOHJLJMD_TypeDefinitionIndex = 14779;

class IDGFOHJLJMD : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* LFFCJOBNNPA; // 0x10
	::System::String* FEAHADNOPKL; // 0x18
	::ILNPFAABPEH HBDPAIKANDB; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::String* GKDPHAAIEKL; // 0x38
	::System::Int32 JMCDNAHGIGC; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x44
	::System::Byte DDGDDABBIHM; // 0x45
	::System::Byte GCHCDJCFCEG; // 0x46
	::System::Byte BGNBHAPEFNC; // 0x47
	::System::Byte CNIAANMNOCF; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 CFNEMGNOKHM; // 0x4C
	::System::Int32 ELJPANGMLJC; // 0x50

	::System::Void _ctor(::ILNPFAABPEH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::ILNPFAABPEH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IDGFOHJLJMD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 DMMNHBNKBEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGFOHJLJMD_DMMNHBNKBEE_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IDGFOHJLJMD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 ECHFFICBOLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGFOHJLJMD_ECHFFICBOLK_OFFSET))(this);
	}

	::System::String* BFPPFIPCFFE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGFOHJLJMD_BFPPFIPCFFE_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGFOHJLJMD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGFOHJLJMD_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* EFGEDHEFHJK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGFOHJLJMD_EFGEDHEFHJK_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* LCPOBACCNCP()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGFOHJLJMD_LCPOBACCNCP_OFFSET))(this);
	}

	::System::Int32 HCAEDMLAJCE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGFOHJLJMD_HCAEDMLAJCE_OFFSET))(this);
	}
};
