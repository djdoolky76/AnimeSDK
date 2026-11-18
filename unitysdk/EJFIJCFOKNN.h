#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHIEAACIFNE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define EJFIJCFOKNN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1662A410)
#define EJFIJCFOKNN_EGGLHJJGCHM_OFFSET UNITYSDK_OFFSET(0x1662A7A0)
#define EJFIJCFOKNN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1662A640)
#define EJFIJCFOKNN_GCNHJNMJFBG_OFFSET UNITYSDK_OFFSET(0x1662A8E0)
#define EJFIJCFOKNN_GOPAOBCNFLJ_OFFSET UNITYSDK_OFFSET(0x1662A650)
#define EJFIJCFOKNN_KJJOFKKNKMG_OFFSET UNITYSDK_OFFSET(0x1662A2D0)
#define EJFIJCFOKNN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1662A790)
#define EJFIJCFOKNN_MCBKKOBAJPN_OFFSET UNITYSDK_OFFSET(0x1662A500)
#define EJFIJCFOKNN__CTOR_OFFSET UNITYSDK_OFFSET(0x1662A2C0)

inline static constexpr unsigned int EJFIJCFOKNN_TypeDefinitionIndex = 17233;

class EJFIJCFOKNN : public ::System::Object
{
public:
	::JHIEAACIFNE HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 MONIBMPMJLO; // 0x28
	::System::Int32 BGMHCOOANDK; // 0x2C
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 FBCNDHLMDIJ; // 0x34
	::System::Int32 DNDOHINECPP; // 0x38
	::System::Int32 DKANDIKFHOP; // 0x3C

	::System::Void _ctor(::JHIEAACIFNE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JHIEAACIFNE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EJFIJCFOKNN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 KJJOFKKNKMG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFIJCFOKNN_KJJOFKKNKMG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFIJCFOKNN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 MCBKKOBAJPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFIJCFOKNN_MCBKKOBAJPN_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EJFIJCFOKNN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 GOPAOBCNFLJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFIJCFOKNN_GOPAOBCNFLJ_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFIJCFOKNN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 EGGLHJJGCHM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFIJCFOKNN_EGGLHJJGCHM_OFFSET))(this);
	}

	::System::Int32 GCNHJNMJFBG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFIJCFOKNN_GCNHJNMJFBG_OFFSET))(this);
	}
};
