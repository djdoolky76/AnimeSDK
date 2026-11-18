#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIJMAMJKLBD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define BDDIIHFGFEM_BNKPNGANFDN_OFFSET UNITYSDK_OFFSET(0x19AC4330)
#define BDDIIHFGFEM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19AC4100)
#define BDDIIHFGFEM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19AC3EA0)
#define BDDIIHFGFEM_ICLBICFJAPP_OFFSET UNITYSDK_OFFSET(0x19AC3EB0)
#define BDDIIHFGFEM_KCFBOPKOLKI_OFFSET UNITYSDK_OFFSET(0x19AC3FC0)
#define BDDIIHFGFEM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19AC3E90)
#define BDDIIHFGFEM_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19AC41F0)
#define BDDIIHFGFEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19AC3E80)

inline static constexpr unsigned int BDDIIHFGFEM_TypeDefinitionIndex = 14737;

class BDDIIHFGFEM : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* GPNJCCHKLIP; // 0x18
	::KIJMAMJKLBD HBDPAIKANDB; // 0x20
	::System::String* BKHNMBKJHJK; // 0x30
	::System::Int32 MFAAMEMILEM; // 0x38
	::System::Int32 PCMOJLNOPPM; // 0x3C
	::System::Int32 AICFILHLIPF; // 0x40
	::System::Byte CNIAANMNOCF; // 0x44
	::System::Byte ACIOBDEBDNK; // 0x45
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x46
	::System::Byte _padding0[0x1];
	::System::Int32 OLFPCGKLMKF; // 0x48
	::System::Int32 KPGDFEHJOOB; // 0x4C

	::System::Void _ctor(::KIJMAMJKLBD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KIJMAMJKLBD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BDDIIHFGFEM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDIIHFGFEM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BDDIIHFGFEM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* ICLBICFJAPP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDIIHFGFEM_ICLBICFJAPP_OFFSET))(this);
	}

	::System::Int32 KCFBOPKOLKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDIIHFGFEM_KCFBOPKOLKI_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDIIHFGFEM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDIIHFGFEM_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 BNKPNGANFDN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDIIHFGFEM_BNKPNGANFDN_OFFSET))(this);
	}
};
