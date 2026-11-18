#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KEMEPEDJAFB;
namespace System { class Action; }

#define MMCAKIMPPOI_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x1319F3D0)
#define MMCAKIMPPOI_GPGBMJIEOGL_OFFSET UNITYSDK_OFFSET(0x1319F430)
#define MMCAKIMPPOI_JJEJHGOJOII_OFFSET UNITYSDK_OFFSET(0x1319F4F0)
#define MMCAKIMPPOI_KECMJDOEIFF_OFFSET UNITYSDK_OFFSET(0x1319F3C0)
#define MMCAKIMPPOI_MHILCNJENKJ_OFFSET UNITYSDK_OFFSET(0x1319F370)
#define MMCAKIMPPOI_PGJNANIHLPO_OFFSET UNITYSDK_OFFSET(0x1319F550)
#define MMCAKIMPPOI_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x1319F5B0)
#define MMCAKIMPPOI__CTOR_OFFSET UNITYSDK_OFFSET(0x1319F360)

inline static constexpr unsigned int MMCAKIMPPOI_TypeDefinitionIndex = 54520;

class MMCAKIMPPOI : public ::System::Object
{
public:
	::System::Action* FADMEHGPCAD; // 0x10
	::System::Action* DIIMPPOAGAE; // 0x18
	::KEMEPEDJAFB* IDPNNHDGFBB; // 0x20
	::System::Int32 HPPOKOLGBJG; // 0x28
	::System::Single KKJKPJEGKJC; // 0x2C
	::System::Int32 EFHCAGOPNBE; // 0x30
	::System::Single GIHBIEOCLMJ; // 0x34
	::System::Single EHLEIGPINON; // 0x38
	::System::Boolean KNGHAMCPHFH; // 0x3C
	::System::Byte _padding0[0x3];
	::System::Single HLMJGDACAOA; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMCAKIMPPOI__CTOR_OFFSET))(this);
	}

	::System::Void MHILCNJENKJ(::KEMEPEDJAFB* KFNDLDDABKD)
	{
		return ((::System::Void(*)(::PVOID, ::KEMEPEDJAFB*))((::PBYTE)hIl2Cpp + MMCAKIMPPOI_MHILCNJENKJ_OFFSET))(this, KFNDLDDABKD);
	}

	::System::Boolean KECMJDOEIFF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMCAKIMPPOI_KECMJDOEIFF_OFFSET))(this);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMCAKIMPPOI_EDEFLFIKNFK_OFFSET))(this);
	}

	::System::Void GPGBMJIEOGL(::System::Single HPCILAJBBHH, ::System::Int32 ANHMGGKIMME, ::System::Action* HFJADAPAJJA, ::System::Action* KEEHLCFNHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MMCAKIMPPOI_GPGBMJIEOGL_OFFSET))(this, HPCILAJBBHH, ANHMGGKIMME, HFJADAPAJJA, KEEHLCFNHIL);
	}

	::System::Void JJEJHGOJOII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMCAKIMPPOI_JJEJHGOJOII_OFFSET))(this);
	}

	::System::Void PGJNANIHLPO(::System::Int32 GCMEBAIINGO, ::System::Int32 NKJJODOJPGB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MMCAKIMPPOI_PGJNANIHLPO_OFFSET))(this, GCMEBAIINGO, NKJJODOJPGB);
	}

	::System::Void PLPONJAKNEB(::System::Int32 GCMEBAIINGO, ::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MMCAKIMPPOI_PLPONJAKNEB_OFFSET))(this, GCMEBAIINGO, PBCAAADNEPK);
	}
};
