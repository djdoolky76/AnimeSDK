#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define HGMDKDFHEMD_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x17AF6550)
#define HGMDKDFHEMD_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x17AF64C0)
#define HGMDKDFHEMD_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x17AF6430)
#define HGMDKDFHEMD__CCTOR_OFFSET UNITYSDK_OFFSET(0x17AF63B0)
#define HGMDKDFHEMD__CTOR_OFFSET UNITYSDK_OFFSET(0x17AF6420)

inline static constexpr unsigned int HGMDKDFHEMD_TypeDefinitionIndex = 73949;

class HGMDKDFHEMD : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x3D; // 0x0
	::System::String* NHCJPNOKDNL; // 0x20
	::System::UInt32 MOHFFHFHCIO; // 0x28
	::System::UInt32 PEKGLKGHHNI; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGMDKDFHEMD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGMDKDFHEMD__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGMDKDFHEMD_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGMDKDFHEMD_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 DGMOLEDDPOA, ::System::UInt32 GFLBJOJOOIK, ::System::String* PKGDBDFHOMO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + HGMDKDFHEMD_CNHBDOMKKDE_OFFSET))(this, DGMOLEDDPOA, GFLBJOJOOIK, PKGDBDFHOMO);
	}
};
