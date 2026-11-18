#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NKEJGLONGCA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MNAIPGFPOGM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x195AA1F0)
#define MNAIPGFPOGM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x195AA2E0)
#define MNAIPGFPOGM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x195AA2F0)
#define MNAIPGFPOGM_OOCOPGFDOAD_OFFSET UNITYSDK_OFFSET(0x195AA300)
#define MNAIPGFPOGM_PPAFGBILMME_OFFSET UNITYSDK_OFFSET(0x195AA090)
#define MNAIPGFPOGM_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x195A9F50)
#define MNAIPGFPOGM__CTOR_OFFSET UNITYSDK_OFFSET(0x195A9F40)

inline static constexpr unsigned int MNAIPGFPOGM_TypeDefinitionIndex = 12478;

class MNAIPGFPOGM : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Single>* BHMCGIJINNN; // 0x10
	::NKEJGLONGCA HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::String* KNPJCBKKDCB; // 0x30
	::System::Int32 PCMOJLNOPPM; // 0x38
	::System::Byte CNIAANMNOCF; // 0x3C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3D
	::System::Byte ACIOBDEBDNK; // 0x3E
	::System::Byte _padding0[0x1];
	::System::Single MOPJNENHPPF; // 0x40

	::System::Void _ctor(::NKEJGLONGCA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NKEJGLONGCA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MNAIPGFPOGM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNAIPGFPOGM_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Single PPAFGBILMME()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MNAIPGFPOGM_PPAFGBILMME_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNAIPGFPOGM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MNAIPGFPOGM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MNAIPGFPOGM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Single>* OOCOPGFDOAD()
	{
		return ((::System::Collections::Generic::List_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNAIPGFPOGM_OOCOPGFDOAD_OFFSET))(this);
	}
};
