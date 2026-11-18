#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LFNOPCNEFGL.h"
#include "unitysdk/System/Object.h"

class EGCDMJENIJF;
namespace MoleMole { class UICinemaCollectTabWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OJFJNOLABHO_ANJPMFIOBEG_OFFSET UNITYSDK_OFFSET(0x11B367A0)
#define OJFJNOLABHO_BJILJLEAOMG_OFFSET UNITYSDK_OFFSET(0x11B36AF0)
#define OJFJNOLABHO_BNEPLBLHMPK_OFFSET UNITYSDK_OFFSET(0x11B36E70)
#define OJFJNOLABHO_DEKDOBOFBPF_OFFSET UNITYSDK_OFFSET(0x11B36A80)
#define OJFJNOLABHO_JEBLMBPLPEM_OFFSET UNITYSDK_OFFSET(0x11B36880)
#define OJFJNOLABHO_LNOKDMLNEKE_OFFSET UNITYSDK_OFFSET(0x11B36E10)
#define OJFJNOLABHO__CTOR_OFFSET UNITYSDK_OFFSET(0x11B36790)

inline static constexpr unsigned int OJFJNOLABHO_TypeDefinitionIndex = 40374;

class OJFJNOLABHO : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* GLANHBJILCK; // 0x10
	::MoleMole::UICinemaCollectTabWidgetController* HIGCDKBCFAB; // 0x18
	::System::Int32 KMBGIDCGDLC; // 0x20
	::System::Boolean DBBIDCBDBDB; // 0x24
	::System::Boolean LIEJIGMGGOL; // 0x25
	::System::Byte _padding0[0x2];
	::System::Int32 PBFHMNMHGBJ; // 0x28
	::LFNOPCNEFGL JNHMPDGNCIC; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFJNOLABHO__CTOR_OFFSET))(this);
	}

	::EGCDMJENIJF* ANJPMFIOBEG()
	{
		return ((::EGCDMJENIJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFJNOLABHO_ANJPMFIOBEG_OFFSET))(this);
	}

	::System::Void JEBLMBPLPEM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFJNOLABHO_JEBLMBPLPEM_OFFSET))(this);
	}

	::System::Void DEKDOBOFBPF(::MoleMole::UICinemaCollectTabWidgetController* AGDJKGNHBPH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICinemaCollectTabWidgetController*))((::PBYTE)hIl2Cpp + OJFJNOLABHO_DEKDOBOFBPF_OFFSET))(this, AGDJKGNHBPH);
	}

	::System::Void BJILJLEAOMG(::System::Int32 KMBGIDCGDLC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OJFJNOLABHO_BJILJLEAOMG_OFFSET))(this, KMBGIDCGDLC);
	}

	::System::Void LNOKDMLNEKE(::System::Boolean KCBDGFHGNJN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OJFJNOLABHO_LNOKDMLNEKE_OFFSET))(this, KCBDGFHGNJN);
	}

	::System::Void BNEPLBLHMPK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFJNOLABHO_BNEPLBLHMPK_OFFSET))(this);
	}
};
