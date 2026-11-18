#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FIFOFMFAFHJ.h"
#include "unitysdk/System/ValueType.h"

class GJJLBGAOKBE;
class PPPHCHDBPKE;

#define BCEFOPHMAGJ_ADGLJKHBNKD_OFFSET UNITYSDK_OFFSET(0x459900)
#define BCEFOPHMAGJ_CDDGEMDLPNJ_OFFSET UNITYSDK_OFFSET(0x7DB720)
#define BCEFOPHMAGJ_IJHPHJKPFPJ_OFFSET UNITYSDK_OFFSET(0x9914B0)
#define BCEFOPHMAGJ_NGCBIMKHIJG_OFFSET UNITYSDK_OFFSET(0x9914C0)
#define BCEFOPHMAGJ_OEDJCOEMKMJ_OFFSET UNITYSDK_OFFSET(0x9914D0)

inline static constexpr unsigned int BCEFOPHMAGJ_TypeDefinitionIndex = 18213;

struct alignas(8) BCEFOPHMAGJ
{
	::System::Int32 DGLPLIAMNIA; // 0x10
	::System::Int32 ALLACGIFBHE; // 0x14
	::System::Int32 LCJKKNJOIMI; // 0x18
	::System::Int32 EBJOPFEIKBN; // 0x1C
	::System::Int32 ABEGMHAMILD; // 0x20
	::System::Int32 LOCOEHDABCB; // 0x24
	::FIFOFMFAFHJ OAPHBCGJCFK; // 0x28
	::System::UInt32 KPFOKCLJPCI; // 0x78
	::System::UInt32 NKPPNGJLICM; // 0x7C
	::System::Boolean MPIEPFPDJPF; // 0x80
	::System::Byte _padding0[0x3];
	::System::Int32 PDLFOFPHNOE; // 0x84
	::System::Int32 OBNLDHNMCLO; // 0x88
	::System::Boolean _EODJHIPIADO_k__BackingField; // 0x8C
	::System::Byte _padding1[0x3];
	::GJJLBGAOKBE* _PBNPMAPKFBE_k__BackingField; // 0x90

	::System::Void IJHPHJKPFPJ(::GJJLBGAOKBE* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::GJJLBGAOKBE*))((::PBYTE)hIl2Cpp + BCEFOPHMAGJ_IJHPHJKPFPJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::GJJLBGAOKBE* CDDGEMDLPNJ()
	{
		return ((::GJJLBGAOKBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCEFOPHMAGJ_CDDGEMDLPNJ_OFFSET))(this);
	}

	::PPPHCHDBPKE* ADGLJKHBNKD()
	{
		return ((::PPPHCHDBPKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCEFOPHMAGJ_ADGLJKHBNKD_OFFSET))(this);
	}

	::System::Void NGCBIMKHIJG(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BCEFOPHMAGJ_NGCBIMKHIJG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean OEDJCOEMKMJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCEFOPHMAGJ_OEDJCOEMKMJ_OFFSET))(this);
	}
};
