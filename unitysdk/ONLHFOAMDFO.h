#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FGPMDNJDHCF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ONLHFOAMDFO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1736D9D0)
#define ONLHFOAMDFO_FKDADFNFIIE_OFFSET UNITYSDK_OFFSET(0x1736DAC0)
#define ONLHFOAMDFO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1736D9C0)
#define ONLHFOAMDFO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1736D9B0)
#define ONLHFOAMDFO_LJKOBMGLFLO_OFFSET UNITYSDK_OFFSET(0x1736DED0)
#define ONLHFOAMDFO_PIPBPLEIPFK_OFFSET UNITYSDK_OFFSET(0x1736DD90)
#define ONLHFOAMDFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1736D9A0)

inline static constexpr unsigned int ONLHFOAMDFO_TypeDefinitionIndex = 14108;

class ONLHFOAMDFO : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::FGPMDNJDHCF HBDPAIKANDB; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* BMGFIKALJNM; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* CBNOIHEFPPB; // 0x30
	::System::Int32 PCMOJLNOPPM; // 0x38
	::System::Byte CNIAANMNOCF; // 0x3C
	::System::Byte ACIOBDEBDNK; // 0x3D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3E
	::System::Byte _padding0[0x1];
	::System::Int32 OIKCPMJLMGI; // 0x40

	::System::Void _ctor(::FGPMDNJDHCF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FGPMDNJDHCF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ONLHFOAMDFO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLHFOAMDFO_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ONLHFOAMDFO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLHFOAMDFO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* FKDADFNFIIE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLHFOAMDFO_FKDADFNFIIE_OFFSET))(this);
	}

	::System::Int32 PIPBPLEIPFK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLHFOAMDFO_PIPBPLEIPFK_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* LJKOBMGLFLO()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLHFOAMDFO_LJKOBMGLFLO_OFFSET))(this);
	}
};
