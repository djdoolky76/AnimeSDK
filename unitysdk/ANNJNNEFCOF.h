#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IBAKJDILOEH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ANNJNNEFCOF_BPKANOJJCCA_OFFSET UNITYSDK_OFFSET(0x15776200)
#define ANNJNNEFCOF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x157764B0)
#define ANNJNNEFCOF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x157764A0)
#define ANNJNNEFCOF_HOMJBKELJLL_OFFSET UNITYSDK_OFFSET(0x15776B50)
#define ANNJNNEFCOF_KAJDMBFLPDD_OFFSET UNITYSDK_OFFSET(0x15776360)
#define ANNJNNEFCOF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x157765A0)
#define ANNJNNEFCOF_MDADFJOKLAO_OFFSET UNITYSDK_OFFSET(0x157765B0)
#define ANNJNNEFCOF_ODEBEJEIDEA_OFFSET UNITYSDK_OFFSET(0x15776880)
#define ANNJNNEFCOF__CTOR_OFFSET UNITYSDK_OFFSET(0x157761F0)

inline static constexpr unsigned int ANNJNNEFCOF_TypeDefinitionIndex = 9638;

class ANNJNNEFCOF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* KENNDPCGBIO; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* DOHBKDENNBK; // 0x18
	::System::String* IIBCIABCDIJ; // 0x20
	::IBAKJDILOEH HBDPAIKANDB; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x38
	::System::Single OGLLDBABKJG; // 0x40
	::System::Int32 FLKIPIBHJED; // 0x44
	::System::Byte ACIOBDEBDNK; // 0x48
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x49
	::System::Byte CNIAANMNOCF; // 0x4A

	::System::Void _ctor(::IBAKJDILOEH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IBAKJDILOEH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ANNJNNEFCOF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Single BPKANOJJCCA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNJNNEFCOF_BPKANOJJCCA_OFFSET))(this);
	}

	::System::Int32 KAJDMBFLPDD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNJNNEFCOF_KAJDMBFLPDD_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ANNJNNEFCOF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNJNNEFCOF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNJNNEFCOF_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* MDADFJOKLAO()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNJNNEFCOF_MDADFJOKLAO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* ODEBEJEIDEA()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNJNNEFCOF_ODEBEJEIDEA_OFFSET))(this);
	}

	::System::String* HOMJBKELJLL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNJNNEFCOF_HOMJBKELJLL_OFFSET))(this);
	}
};
