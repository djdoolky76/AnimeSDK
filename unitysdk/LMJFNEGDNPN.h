#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EIAFBAEBLMD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LMJFNEGDNPN_ALIOMOBGPFH_OFFSET UNITYSDK_OFFSET(0x19DAB580)
#define LMJFNEGDNPN_BNKPNGANFDN_OFFSET UNITYSDK_OFFSET(0x19DAB440)
#define LMJFNEGDNPN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19DAB070)
#define LMJFNEGDNPN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19DAB690)
#define LMJFNEGDNPN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19DAB160)
#define LMJFNEGDNPN_OOGJNLDFOLO_OFFSET UNITYSDK_OFFSET(0x19DAB170)
#define LMJFNEGDNPN_OPKBMBDBPHH_OFFSET UNITYSDK_OFFSET(0x19DAAF60)
#define LMJFNEGDNPN__CTOR_OFFSET UNITYSDK_OFFSET(0x19DAAF50)

inline static constexpr unsigned int LMJFNEGDNPN_TypeDefinitionIndex = 14674;

class LMJFNEGDNPN : public ::System::Object
{
public:
	::System::String* FMFKJJBGEOF; // 0x10
	::EIAFBAEBLMD HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* FNPCPGNGNAC; // 0x30
	::System::String* GLBKOMPHOBI; // 0x38
	::System::String* AANNEIALCFM; // 0x40
	::System::Int32 AICFILHLIPF; // 0x48
	::System::Int32 MJECCDOJDKG; // 0x4C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x50
	::System::Byte CNIAANMNOCF; // 0x51
	::System::Byte ACIOBDEBDNK; // 0x52
	::System::Byte _padding0[0x1];
	::System::Int32 CEEBHOAKLFN; // 0x54
	::System::Int32 DHHIHOALLFH; // 0x58

	::System::Void _ctor(::EIAFBAEBLMD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EIAFBAEBLMD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LMJFNEGDNPN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* OPKBMBDBPHH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMJFNEGDNPN_OPKBMBDBPHH_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMJFNEGDNPN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LMJFNEGDNPN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* OOGJNLDFOLO()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMJFNEGDNPN_OOGJNLDFOLO_OFFSET))(this);
	}

	::System::Int32 BNKPNGANFDN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMJFNEGDNPN_BNKPNGANFDN_OFFSET))(this);
	}

	::System::String* ALIOMOBGPFH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMJFNEGDNPN_ALIOMOBGPFH_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LMJFNEGDNPN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
