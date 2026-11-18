#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/GNOIKFOMBFH.h"

namespace System { class String; }

#define LNEGFLBFCGH_ABEFJBHLBKK_OFFSET UNITYSDK_OFFSET(0x1A6289C0)
#define LNEGFLBFCGH_BJMOCICPJIH_OFFSET UNITYSDK_OFFSET(0x1A628A20)
#define LNEGFLBFCGH_FALPNKNOOCG_OFFSET UNITYSDK_OFFSET(0x1A6288F0)
#define LNEGFLBFCGH_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1A628860)
#define LNEGFLBFCGH_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1A6287D0)
#define LNEGFLBFCGH_LFBICCKPNLJ_OFFSET UNITYSDK_OFFSET(0x1A628950)
#define LNEGFLBFCGH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A628750)
#define LNEGFLBFCGH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6287C0)

inline static constexpr unsigned int LNEGFLBFCGH_TypeDefinitionIndex = 45748;

class LNEGFLBFCGH : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x4F; // 0x0
	::System::String* CJGAMEOMLIO; // 0x20
	::System::Int32 IAJLLMALHJJ; // 0x28
	::GNOIKFOMBFH CFFCKJIDPDC; // 0x2C
	::System::Boolean ANDPODJMKJO; // 0x2D
	::System::Byte _padding0[0x2];
	::System::Single OOCBCIGMBGN; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNEGFLBFCGH__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNEGFLBFCGH__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNEGFLBFCGH_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNEGFLBFCGH_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void FALPNKNOOCG(::System::String* HIAIKHDFCLN, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + LNEGFLBFCGH_FALPNKNOOCG_OFFSET))(this, HIAIKHDFCLN, EGEGIMGMJHN);
	}

	::System::Void LFBICCKPNLJ(::System::String* HIAIKHDFCLN, ::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + LNEGFLBFCGH_LFBICCKPNLJ_OFFSET))(this, HIAIKHDFCLN, EGEGIMGMJHN);
	}

	::System::Void ABEFJBHLBKK(::System::String* HIAIKHDFCLN, ::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + LNEGFLBFCGH_ABEFJBHLBKK_OFFSET))(this, HIAIKHDFCLN, EGEGIMGMJHN);
	}

	::System::Void BJMOCICPJIH(::System::String* HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LNEGFLBFCGH_BJMOCICPJIH_OFFSET))(this, HIAIKHDFCLN);
	}
};
