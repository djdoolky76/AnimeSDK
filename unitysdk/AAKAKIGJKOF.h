#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EEGNIAOPEMM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define AAKAKIGJKOF_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x1AD9FB30)
#define AAKAKIGJKOF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1AD9FC70)
#define AAKAKIGJKOF_CPPMMKLJJOP_OFFSET UNITYSDK_OFFSET(0x1ADA0020)
#define AAKAKIGJKOF_EDEJBBDHHAC_OFFSET UNITYSDK_OFFSET(0x1AD9FD70)
#define AAKAKIGJKOF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1AD9FD60)
#define AAKAKIGJKOF_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x1AD9F9F0)
#define AAKAKIGJKOF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1AD9FEB0)
#define AAKAKIGJKOF_MOHPPPHBEGN_OFFSET UNITYSDK_OFFSET(0x1AD9FEC0)
#define AAKAKIGJKOF__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD9F9E0)

inline static constexpr unsigned int AAKAKIGJKOF_TypeDefinitionIndex = 9986;

class AAKAKIGJKOF : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::EEGNIAOPEMM HBDPAIKANDB; // 0x18
	::System::Byte CNIAANMNOCF; // 0x28
	::System::Boolean DLHNKAHAJNP; // 0x29
	::System::Byte ACIOBDEBDNK; // 0x2A
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2B
	::System::Int32 MKBNEBCHJLB; // 0x2C
	::System::Int32 PFEJMPLKDPP; // 0x30
	::System::Int32 POKJNGILNLB; // 0x34
	::System::Int32 BPMHKHIBGEJ; // 0x38

	::System::Void _ctor(::EEGNIAOPEMM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EEGNIAOPEMM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AAKAKIGJKOF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKAKIGJKOF_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKAKIGJKOF_APCKPKCNFJE_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKAKIGJKOF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AAKAKIGJKOF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 EDEJBBDHHAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKAKIGJKOF_EDEJBBDHHAC_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKAKIGJKOF_LJANCIBECFG_OFFSET))(this);
	}

	::System::Boolean MOHPPPHBEGN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKAKIGJKOF_MOHPPPHBEGN_OFFSET))(this);
	}

	::System::Int32 CPPMMKLJJOP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKAKIGJKOF_CPPMMKLJJOP_OFFSET))(this);
	}
};
