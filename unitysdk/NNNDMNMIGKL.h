#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LFDJNJBKOIG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define NNNDMNMIGKL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19125D40)
#define NNNDMNMIGKL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19125F70)
#define NNNDMNMIGKL_LBAGPMHCOCN_OFFSET UNITYSDK_OFFSET(0x191260C0)
#define NNNDMNMIGKL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19126200)
#define NNNDMNMIGKL_LJNBIAFBMIL_OFFSET UNITYSDK_OFFSET(0x19126210)
#define NNNDMNMIGKL_PLPMPDEPKMA_OFFSET UNITYSDK_OFFSET(0x19125E30)
#define NNNDMNMIGKL_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19125F80)
#define NNNDMNMIGKL__CTOR_OFFSET UNITYSDK_OFFSET(0x19125D30)

inline static constexpr unsigned int NNNDMNMIGKL_TypeDefinitionIndex = 9814;

class NNNDMNMIGKL : public ::System::Object
{
public:
	::LFDJNJBKOIG HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 BDLMCMBNHHK; // 0x28
	::System::Int32 PEHLJEEIACG; // 0x2C
	::System::Int32 PDHKKEKEOPO; // 0x30
	::System::Byte CNIAANMNOCF; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x35
	::System::Byte ACIOBDEBDNK; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x38

	::System::Void _ctor(::LFDJNJBKOIG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LFDJNJBKOIG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NNNDMNMIGKL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNNDMNMIGKL_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PLPMPDEPKMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNNDMNMIGKL_PLPMPDEPKMA_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NNNDMNMIGKL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNNDMNMIGKL_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 LBAGPMHCOCN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNNDMNMIGKL_LBAGPMHCOCN_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNNDMNMIGKL_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 LJNBIAFBMIL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNNDMNMIGKL_LJNBIAFBMIL_OFFSET))(this);
	}
};
