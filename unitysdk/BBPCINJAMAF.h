#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define BBPCINJAMAF_BPEEGLFJOEJ_OFFSET UNITYSDK_OFFSET(0x14C2AF50)
#define BBPCINJAMAF_DMMHANOOMGC_OFFSET UNITYSDK_OFFSET(0x14C2AFA0)
#define BBPCINJAMAF_EQUALS_OFFSET UNITYSDK_OFFSET(0x14C2AD90)
#define BBPCINJAMAF_GMEFNOAAOJD_OFFSET UNITYSDK_OFFSET(0x14C2AF60)
#define BBPCINJAMAF_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x14C2AF90)
#define BBPCINJAMAF_KBPCBLKMFEI_OFFSET UNITYSDK_OFFSET(0x14C2AF70)
#define BBPCINJAMAF_PJAKIGJMLBM_OFFSET UNITYSDK_OFFSET(0x14C2AF80)
#define BBPCINJAMAF__CTOR_OFFSET UNITYSDK_OFFSET(0x14C2AD50)

inline static constexpr unsigned int BBPCINJAMAF_TypeDefinitionIndex = 82149;

class BBPCINJAMAF : public ::System::Object
{
public:
	::System::String* CAACJPDPLFE; // 0x10
	::System::String* KLNPDBIIFEL; // 0x18
	::System::String* GLBPBKDPCBD; // 0x20
	::System::String* MPKEONOCOAE; // 0x28
	::System::String* GFDBEJEKCLB; // 0x30
	::System::Int32 _FGBKLNMKAHM_k__BackingField; // 0x38
	::System::Int32 _IPAODPNINPN_k__BackingField; // 0x3C
	::System::Int32 FKFEGMOBDOJ; // 0x40

	::System::Void _ctor(::System::String* GLBPBKDPCBD, ::System::String* GFDBEJEKCLB, ::System::Int32 FKFEGMOBDOJ, ::System::String* KLNPDBIIFEL, ::System::String* MPKEONOCOAE, ::System::String* CAACJPDPLFE, ::System::Int32 BEIAGPOOBPJ, ::System::Int32 CLCJDDCIPKA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BBPCINJAMAF__CTOR_OFFSET))(this, GLBPBKDPCBD, GFDBEJEKCLB, FKFEGMOBDOJ, KLNPDBIIFEL, MPKEONOCOAE, CAACJPDPLFE, BEIAGPOOBPJ, CLCJDDCIPKA);
	}

	::System::Boolean Equals(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BBPCINJAMAF_EQUALS_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void BPEEGLFJOEJ(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BBPCINJAMAF_BPEEGLFJOEJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GMEFNOAAOJD(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BBPCINJAMAF_GMEFNOAAOJD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 KBPCBLKMFEI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBPCINJAMAF_KBPCBLKMFEI_OFFSET))(this);
	}

	::System::Int32 PJAKIGJMLBM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBPCINJAMAF_PJAKIGJMLBM_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BBPCINJAMAF_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::UInt64 DMMHANOOMGC()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BBPCINJAMAF_DMMHANOOMGC_OFFSET))(this);
	}
};
