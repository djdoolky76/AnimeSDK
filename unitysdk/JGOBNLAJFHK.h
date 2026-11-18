#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EAFKALGKOLK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JGOBNLAJFHK_AFOMDHHECIF_OFFSET UNITYSDK_OFFSET(0x17C27EB0)
#define JGOBNLAJFHK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17C27810)
#define JGOBNLAJFHK_FHOFJGIOPBJ_OFFSET UNITYSDK_OFFSET(0x17C27910)
#define JGOBNLAJFHK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17C27FF0)
#define JGOBNLAJFHK_HJCDJGADLNB_OFFSET UNITYSDK_OFFSET(0x17C27BE0)
#define JGOBNLAJFHK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17C27900)
#define JGOBNLAJFHK__CTOR_OFFSET UNITYSDK_OFFSET(0x17C27800)

inline static constexpr unsigned int JGOBNLAJFHK_TypeDefinitionIndex = 13480;

class JGOBNLAJFHK : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* HAHJLAIBNPF; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::EAFKALGKOLK HBDPAIKANDB; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* HPIEIFACLBH; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 IODHADBJFFI; // 0x3C

	::System::Void _ctor(::EAFKALGKOLK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EAFKALGKOLK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JGOBNLAJFHK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGOBNLAJFHK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JGOBNLAJFHK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* FHOFJGIOPBJ()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGOBNLAJFHK_FHOFJGIOPBJ_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* HJCDJGADLNB()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGOBNLAJFHK_HJCDJGADLNB_OFFSET))(this);
	}

	::System::Int32 AFOMDHHECIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGOBNLAJFHK_AFOMDHHECIF_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JGOBNLAJFHK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
