#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ELNPPPDBHKC_CJJIBOOIJGP;

#define ELNPPPDBHKC_CLOBBPGCMKK_GIBOIAPGFGM_OFFSET UNITYSDK_OFFSET(0x1417A050)
#define ELNPPPDBHKC_CLOBBPGCMKK_HHPGNJJEMBM_OFFSET UNITYSDK_OFFSET(0x14179FD0)
#define ELNPPPDBHKC_CLOBBPGCMKK__CTOR_OFFSET UNITYSDK_OFFSET(0x14179FC0)

inline static constexpr unsigned int ELNPPPDBHKC_CLOBBPGCMKK_TypeDefinitionIndex = 48246;

class ELNPPPDBHKC_CLOBBPGCMKK : public ::System::Object
{
public:
	::ELNPPPDBHKC_CJJIBOOIJGP* FGBNBFHOKAA; // 0x10
	::System::Int32 ABHBKFJKINO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_CLOBBPGCMKK__CTOR_OFFSET))(this);
	}

	::System::Void HHPGNJJEMBM(::System::Single HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_CLOBBPGCMKK_HHPGNJJEMBM_OFFSET))(this, HFMHOELKCAJ);
	}

	::System::Void GIBOIAPGFGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_CLOBBPGCMKK_GIBOIAPGFGM_OFFSET))(this);
	}
};
