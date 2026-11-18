#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GFEMPAOGMGF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MHEHIIIDIDD_BNKPNGANFDN_OFFSET UNITYSDK_OFFSET(0x1AD74890)
#define MHEHIIIDIDD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1AD74400)
#define MHEHIIIDIDD_COKGLHCGLIM_OFFSET UNITYSDK_OFFSET(0x1AD74500)
#define MHEHIIIDIDD_DHPNLFNDKJE_OFFSET UNITYSDK_OFFSET(0x1AD74750)
#define MHEHIIIDIDD_EPIPJHAOOFP_OFFSET UNITYSDK_OFFSET(0x1AD74610)
#define MHEHIIIDIDD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1AD743F0)
#define MHEHIIIDIDD_GHKNFHOABCO_OFFSET UNITYSDK_OFFSET(0x1AD741A0)
#define MHEHIIIDIDD_IAGIGNGNGDF_OFFSET UNITYSDK_OFFSET(0x1AD742B0)
#define MHEHIIIDIDD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1AD744F0)
#define MHEHIIIDIDD__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD74190)

inline static constexpr unsigned int MHEHIIIDIDD_TypeDefinitionIndex = 15713;

class MHEHIIIDIDD : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::GFEMPAOGMGF HBDPAIKANDB; // 0x18
	::System::String* IEBFCLOALHN; // 0x28
	::System::String* KPGGPKFNLDP; // 0x30
	::System::Int32 ACHCFPHBPMP; // 0x38
	::System::Int32 OKAAKEGHDFH; // 0x3C
	::System::Int32 PHLJMOIGGCM; // 0x40
	::System::Int32 AICFILHLIPF; // 0x44
	::System::Byte CNIAANMNOCF; // 0x48
	::System::Byte ACIOBDEBDNK; // 0x49
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4A

	::System::Void _ctor(::GFEMPAOGMGF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GFEMPAOGMGF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MHEHIIIDIDD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* GHKNFHOABCO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHEHIIIDIDD_GHKNFHOABCO_OFFSET))(this);
	}

	::System::Int32 IAGIGNGNGDF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHEHIIIDIDD_IAGIGNGNGDF_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MHEHIIIDIDD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHEHIIIDIDD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MHEHIIIDIDD_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* COKGLHCGLIM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHEHIIIDIDD_COKGLHCGLIM_OFFSET))(this);
	}

	::System::Int32 EPIPJHAOOFP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHEHIIIDIDD_EPIPJHAOOFP_OFFSET))(this);
	}

	::System::Int32 DHPNLFNDKJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHEHIIIDIDD_DHPNLFNDKJE_OFFSET))(this);
	}

	::System::Int32 BNKPNGANFDN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHEHIIIDIDD_BNKPNGANFDN_OFFSET))(this);
	}
};
