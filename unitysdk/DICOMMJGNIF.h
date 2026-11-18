#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/Config/Vector3Range.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

class DICOMMJGNIF_NOFIIJJEALD;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DICOMMJGNIF_BKJGGAPNPAM_OFFSET UNITYSDK_OFFSET(0x19413E80)
#define DICOMMJGNIF_CAHCFODECJP_OFFSET UNITYSDK_OFFSET(0x194140F0)
#define DICOMMJGNIF_DDFJIIFANEA_OFFSET UNITYSDK_OFFSET(0x19414330)
#define DICOMMJGNIF_DGBLGDMBLKO_OFFSET UNITYSDK_OFFSET(0x19414530)
#define DICOMMJGNIF_FDONCJECILO_OFFSET UNITYSDK_OFFSET(0x194144A0)
#define DICOMMJGNIF_FOBFBFNAOJJ_OFFSET UNITYSDK_OFFSET(0x19413B80)
#define DICOMMJGNIF_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x19413C20)
#define DICOMMJGNIF_GLNPIOBKNFB_OFFSET UNITYSDK_OFFSET(0x19413FD0)
#define DICOMMJGNIF_GMMLFPKNBND_OFFSET UNITYSDK_OFFSET(0x19413B10)
#define DICOMMJGNIF_HDNMGIPBFEK_OFFSET UNITYSDK_OFFSET(0x19414270)
#define DICOMMJGNIF_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x19413F50)
#define DICOMMJGNIF_KKOMOMLNPCK_OFFSET UNITYSDK_OFFSET(0x194145F0)
#define DICOMMJGNIF_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x19414410)
#define DICOMMJGNIF_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x19413950)
#define DICOMMJGNIF_PLAIHOMILPM_OFFSET UNITYSDK_OFFSET(0x194140D0)
#define DICOMMJGNIF__CCTOR_OFFSET UNITYSDK_OFFSET(0x19413C70)
#define DICOMMJGNIF__CTOR_OFFSET UNITYSDK_OFFSET(0x19413CF0)

inline static constexpr unsigned int DICOMMJGNIF_TypeDefinitionIndex = 90198;

class DICOMMJGNIF : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x9E; // 0x0
	::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>* DPECJKLOCJF; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* FFFMDEHANJL; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::Vector3Range>* EFFECAAMMNG; // 0x58
	::System::Single LCHCMPMBLIM; // 0x60
	::System::Single GEGBFHOPEHI; // 0x64

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DICOMMJGNIF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICOMMJGNIF__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICOMMJGNIF_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DICOMMJGNIF_GETCLASSID_OFFSET))(this);
	}

	::UnityEngine::RaycastHit BKJGGAPNPAM(::System::Int32 GPAAMOOEKNA)
	{
		return ((::UnityEngine::RaycastHit(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DICOMMJGNIF_BKJGGAPNPAM_OFFSET))(this, GPAAMOOEKNA);
	}

	static ::DICOMMJGNIF* JFDOOELFAOA()
	{
		return ((::DICOMMJGNIF*(*)())((::PBYTE)hIl2Cpp + DICOMMJGNIF_JFDOOELFAOA_OFFSET))();
	}

	::System::Void GMMLFPKNBND()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICOMMJGNIF_GMMLFPKNBND_OFFSET))(this);
	}

	::System::Boolean GLNPIOBKNFB(::UnityEngine::RaycastHit& GIAEPMKCBIB, ::UnityEngine::RaycastHit& GCLICJIGHFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit&, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + DICOMMJGNIF_GLNPIOBKNFB_OFFSET))(this, GIAEPMKCBIB, GCLICJIGHFF);
	}

	::System::Void CAHCFODECJP(::System::Int32 HLJEFIIDMFA, ::System::Single AHAFNGEDPLI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + DICOMMJGNIF_CAHCFODECJP_OFFSET))(this, HLJEFIIDMFA, AHAFNGEDPLI);
	}

	::System::Void HDNMGIPBFEK(::UnityEngine::RaycastHit OFLHPPDJLNL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + DICOMMJGNIF_HDNMGIPBFEK_OFFSET))(this, OFLHPPDJLNL);
	}

	::System::Void DDFJIIFANEA(::DICOMMJGNIF_NOFIIJJEALD* GEGOALONGBI)
	{
		return ((::System::Void(*)(::PVOID, ::DICOMMJGNIF_NOFIIJJEALD*))((::PBYTE)hIl2Cpp + DICOMMJGNIF_DDFJIIFANEA_OFFSET))(this, GEGOALONGBI);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DICOMMJGNIF_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void FDONCJECILO(::System::Int32 FFHBEMEPCOL, ::MoleMole::Config::Vector3Range LNJFKBBFABK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Config::Vector3Range))((::PBYTE)hIl2Cpp + DICOMMJGNIF_FDONCJECILO_OFFSET))(this, FFHBEMEPCOL, LNJFKBBFABK);
	}

	::System::Int32 PLAIHOMILPM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DICOMMJGNIF_PLAIHOMILPM_OFFSET))(this);
	}

	::System::Boolean DGBLGDMBLKO(::System::Int32 HAHLGEFCFND, ::MoleMole::Config::Vector3Range& MJODFDBNJIP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::Config::Vector3Range&))((::PBYTE)hIl2Cpp + DICOMMJGNIF_DGBLGDMBLKO_OFFSET))(this, HAHLGEFCFND, MJODFDBNJIP);
	}

	::System::Void FOBFBFNAOJJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICOMMJGNIF_FOBFBFNAOJJ_OFFSET))(this);
	}

	::System::Void KKOMOMLNPCK(::System::Int32 HLJEFIIDMFA, ::System::Single AHAFNGEDPLI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + DICOMMJGNIF_KKOMOMLNPCK_OFFSET))(this, HLJEFIIDMFA, AHAFNGEDPLI);
	}
};
