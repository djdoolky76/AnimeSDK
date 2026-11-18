#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LMPKGFKIHMO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MDCIOOBDFJL_BFCCLGINHMH_OFFSET UNITYSDK_OFFSET(0x1BF5B770)
#define MDCIOOBDFJL_BIKEDOGMCHO_OFFSET UNITYSDK_OFFSET(0x1BF5B000)
#define MDCIOOBDFJL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BF5B680)
#define MDCIOOBDFJL_DNKKIFFLNJL_OFFSET UNITYSDK_OFFSET(0x1BF5B2D0)
#define MDCIOOBDFJL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BF5B410)
#define MDCIOOBDFJL_JBCNKIDOIIE_OFFSET UNITYSDK_OFFSET(0x1BF5B530)
#define MDCIOOBDFJL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BF5B670)
#define MDCIOOBDFJL_ODKLDGDHHGP_OFFSET UNITYSDK_OFFSET(0x1BF5B420)
#define MDCIOOBDFJL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF5AFF0)

inline static constexpr unsigned int MDCIOOBDFJL_TypeDefinitionIndex = 12826;

class MDCIOOBDFJL : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* IKEIJMJONLE; // 0x10
	::LMPKGFKIHMO HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::String* INEBJPBDCHI; // 0x30
	::System::Int32 IOHIPLECOGH; // 0x38
	::System::Int32 FBGKCOLCDHN; // 0x3C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x40
	::System::Byte CNIAANMNOCF; // 0x41
	::System::Byte ACIOBDEBDNK; // 0x42
	::System::Byte _padding0[0x1];
	::System::Int32 IJCGCOCEIPE; // 0x44
	::System::Int32 DEEFBGCFNBI; // 0x48

	::System::Void _ctor(::LMPKGFKIHMO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LMPKGFKIHMO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MDCIOOBDFJL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* BIKEDOGMCHO()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDCIOOBDFJL_BIKEDOGMCHO_OFFSET))(this);
	}

	::System::Int32 DNKKIFFLNJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDCIOOBDFJL_DNKKIFFLNJL_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MDCIOOBDFJL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* ODKLDGDHHGP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDCIOOBDFJL_ODKLDGDHHGP_OFFSET))(this);
	}

	::System::Int32 JBCNKIDOIIE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDCIOOBDFJL_JBCNKIDOIIE_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDCIOOBDFJL_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDCIOOBDFJL_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 BFCCLGINHMH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDCIOOBDFJL_BFCCLGINHMH_OFFSET))(this);
	}
};
