#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening { class Tween; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class FXFog; }

#define DFCGMKDMKHH_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1536D000)
#define DFCGMKDMKHH_BGJJPHMLMCF_OFFSET UNITYSDK_OFFSET(0x1536CC10)
#define DFCGMKDMKHH_BPFBNCHAMDM_OFFSET UNITYSDK_OFFSET(0x1536D6D0)
#define DFCGMKDMKHH_CBIOJPKCDEB_OFFSET UNITYSDK_OFFSET(0x1536E040)
#define DFCGMKDMKHH_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x1536CF70)
#define DFCGMKDMKHH_CPNBDCJIEJM_OFFSET UNITYSDK_OFFSET(0x1536CE50)
#define DFCGMKDMKHH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1536C8C0)
#define DFCGMKDMKHH_EMPONEDECGN_OFFSET UNITYSDK_OFFSET(0x1536D440)
#define DFCGMKDMKHH_KACOKHIHGJF_OFFSET UNITYSDK_OFFSET(0x1536DE50)
#define DFCGMKDMKHH_MAJPIFNJGJF_OFFSET UNITYSDK_OFFSET(0x1536C920)
#define DFCGMKDMKHH_PEDANHBGIGE_OFFSET UNITYSDK_OFFSET(0x1536DC10)
#define DFCGMKDMKHH_PHEBOBOGNPA_OFFSET UNITYSDK_OFFSET(0x1536CC90)
#define DFCGMKDMKHH__CTOR_OFFSET UNITYSDK_OFFSET(0x1536C910)

inline static constexpr unsigned int DFCGMKDMKHH_TypeDefinitionIndex = 69375;

class DFCGMKDMKHH : public ::System::Object
{
public:
	::DG::Tweening::Tween* KGLFIBNFJOL; // 0x10
	::UnityEngine::Rendering::Universal::FXFog* GCJJKFHPBMA; // 0x18
	::DG::Tweening::Tween* NMKAMAPLMIM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFCGMKDMKHH__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFCGMKDMKHH_DISPOSE_OFFSET))(this);
	}

	::System::Void MAJPIFNJGJF(::System::Int32 LPEOAPIEJNE, ::System::Int32 PMKCDPBIGIK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DFCGMKDMKHH_MAJPIFNJGJF_OFFSET))(this, LPEOAPIEJNE, PMKCDPBIGIK);
	}

	::System::Void CPNBDCJIEJM(::System::Single GEGOALONGBI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DFCGMKDMKHH_CPNBDCJIEJM_OFFSET))(this, GEGOALONGBI);
	}

	static ::DFCGMKDMKHH* COKNIICCODC(::UnityEngine::Rendering::Volume* DHCKJJIBFDE)
	{
		return ((::DFCGMKDMKHH*(*)(::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + DFCGMKDMKHH_COKNIICCODC_OFFSET))(DHCKJJIBFDE);
	}

	::System::Void EMPONEDECGN(::System::Int32 LPEOAPIEJNE, ::System::Int32 PMKCDPBIGIK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DFCGMKDMKHH_EMPONEDECGN_OFFSET))(this, LPEOAPIEJNE, PMKCDPBIGIK);
	}

	::System::Void BBOMJDBNHIC(::UnityEngine::Rendering::Volume* DHCKJJIBFDE)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + DFCGMKDMKHH_BBOMJDBNHIC_OFFSET))(this, DHCKJJIBFDE);
	}

	::System::Void BGJJPHMLMCF(::System::Single HPBKLNALJLG, ::System::Single JEECDNGILNJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DFCGMKDMKHH_BGJJPHMLMCF_OFFSET))(this, HPBKLNALJLG, JEECDNGILNJ);
	}

	::System::Void BPFBNCHAMDM(::System::Single GKAOHBNJJJC, ::System::Single FNDGICFLLFH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DFCGMKDMKHH_BPFBNCHAMDM_OFFSET))(this, GKAOHBNJJJC, FNDGICFLLFH);
	}

	::System::Void KACOKHIHGJF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFCGMKDMKHH_KACOKHIHGJF_OFFSET))(this);
	}

	::System::Void PEDANHBGIGE(::System::Boolean HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DFCGMKDMKHH_PEDANHBGIGE_OFFSET))(this, HFMHOELKCAJ);
	}

	::System::Void PHEBOBOGNPA(::System::Single JEECDNGILNJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DFCGMKDMKHH_PHEBOBOGNPA_OFFSET))(this, JEECDNGILNJ);
	}

	::System::Void CBIOJPKCDEB(::System::Single GEGOALONGBI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DFCGMKDMKHH_CBIOJPKCDEB_OFFSET))(this, GEGOALONGBI);
	}
};
