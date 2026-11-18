#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IAFLCPLFNHF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FLNJBNNKODG;
namespace System { class String; }

#define LCEDEKMPKAA_BODCNAHGPJB_OFFSET UNITYSDK_OFFSET(0x1997A710)
#define LCEDEKMPKAA_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1997A600)
#define LCEDEKMPKAA_OLNCMMPNKAD_OFFSET UNITYSDK_OFFSET(0x1997A870)
#define LCEDEKMPKAA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1997A7D0)
#define LCEDEKMPKAA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1997A5F0)
#define LCEDEKMPKAA__CTOR_OFFSET UNITYSDK_OFFSET(0x1997A5D0)

inline static constexpr unsigned int LCEDEKMPKAA_TypeDefinitionIndex = 93009;

class LCEDEKMPKAA : public ::System::Object
{
public:
	::System::String* DAMCGFIEGLP; // 0x10
	::FLNJBNNKODG* FGMCELHPGEK; // 0x18
	::System::UInt32 BFNLGMBNCAD; // 0x20
	::System::Boolean HCOODGGHCKK; // 0x24
	::System::Boolean ODBBDJEGDHF; // 0x25
	::System::Boolean GOHAMPNIING; // 0x26
	::System::Boolean MFACPKCKNFE; // 0x27
	::System::Int32 GNHEHOMMHPB; // 0x28
	::System::Int32 OKJMJOGHBMP; // 0x2C
	::System::UInt32 FPJJKEGPFNG; // 0x30
	::IAFLCPLFNHF CDBNEBDIPKB; // 0x34
	::UnityEngine::Vector3 OHOGDOMNHNK; // 0x38
	::System::Single BIMGODMLNFK; // 0x44
	::System::UInt32 PCKGNNCDFCD; // 0x48

	::System::Void _ctor(::System::Int32 GNHEHOMMHPB, ::UnityEngine::Vector3 OHOGDOMNHNK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LCEDEKMPKAA__CTOR_OFFSET))(this, GNHEHOMMHPB, OHOGDOMNHNK);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEDEKMPKAA__CTOR_1_OFFSET))(this);
	}

	::LCEDEKMPKAA* DGNAAPGKIPL()
	{
		return ((::LCEDEKMPKAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEDEKMPKAA_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Void BODCNAHGPJB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEDEKMPKAA_BODCNAHGPJB_OFFSET))(this);
	}

	::System::Void OLNCMMPNKAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEDEKMPKAA_OLNCMMPNKAD_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEDEKMPKAA_PHOADBJGFBE_OFFSET))(this);
	}
};
