#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAPFCKADGGO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CGOIIBFMHOI_BNKPNGANFDN_OFFSET UNITYSDK_OFFSET(0x19502030)
#define CGOIIBFMHOI_CNGFHHECIEL_OFFSET UNITYSDK_OFFSET(0x19501DE0)
#define CGOIIBFMHOI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19502310)
#define CGOIIBFMHOI_DBBHCKCDMMP_OFFSET UNITYSDK_OFFSET(0x19502400)
#define CGOIIBFMHOI_EPKHFGDILDG_OFFSET UNITYSDK_OFFSET(0x19501F20)
#define CGOIIBFMHOI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19502300)
#define CGOIIBFMHOI_JLKNALIKFCB_OFFSET UNITYSDK_OFFSET(0x19502540)
#define CGOIIBFMHOI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19502680)
#define CGOIIBFMHOI__CTOR_OFFSET UNITYSDK_OFFSET(0x19501DD0)

inline static constexpr unsigned int CGOIIBFMHOI_TypeDefinitionIndex = 12935;

class CGOIIBFMHOI : public ::System::Object
{
public:
	::DAPFCKADGGO HBDPAIKANDB; // 0x10
	::System::String* KGGHFIJGFDI; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* AICFILHLIPF; // 0x30
	::System::Int32 OLFPCGKLMKF; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3C
	::System::Byte ACIOBDEBDNK; // 0x3D
	::System::Byte CNIAANMNOCF; // 0x3E
	::System::Byte _padding0[0x1];
	::System::Int32 CEEBHOAKLFN; // 0x40
	::System::Int32 AAJLELJNOCJ; // 0x44

	::System::Void _ctor(::DAPFCKADGGO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DAPFCKADGGO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CGOIIBFMHOI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 CNGFHHECIEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGOIIBFMHOI_CNGFHHECIEL_OFFSET))(this);
	}

	::System::String* EPKHFGDILDG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGOIIBFMHOI_EPKHFGDILDG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* BNKPNGANFDN()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGOIIBFMHOI_BNKPNGANFDN_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CGOIIBFMHOI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGOIIBFMHOI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 DBBHCKCDMMP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGOIIBFMHOI_DBBHCKCDMMP_OFFSET))(this);
	}

	::System::Int32 JLKNALIKFCB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGOIIBFMHOI_JLKNALIKFCB_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CGOIIBFMHOI_LJANCIBECFG_OFFSET))(this);
	}
};
