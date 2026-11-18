#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

class JPKMBBAHKDH;
class KPNIFGIKELE;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ELOPDAHLHMH_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x10F44400)
#define ELOPDAHLHMH_DHHOKBFFLFG_OFFSET UNITYSDK_OFFSET(0x10F441F0)
#define ELOPDAHLHMH_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x10F44740)
#define ELOPDAHLHMH_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x10F442B0)
#define ELOPDAHLHMH_HHGNGAAHPGD_OFFSET UNITYSDK_OFFSET(0x10F443E0)
#define ELOPDAHLHMH_JFGFJFIGKKC_OFFSET UNITYSDK_OFFSET(0x10F443F0)
#define ELOPDAHLHMH_MICHCIEIDHJ_OFFSET UNITYSDK_OFFSET(0x10F447D0)
#define ELOPDAHLHMH_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x10F44340)
#define ELOPDAHLHMH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x10F440A0)
#define ELOPDAHLHMH__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F44230)
#define ELOPDAHLHMH__CTOR_OFFSET UNITYSDK_OFFSET(0x10F442A0)

inline static constexpr unsigned int ELOPDAHLHMH_TypeDefinitionIndex = 64346;

class ELOPDAHLHMH : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x86; // 0x0
	::JPKMBBAHKDH* BNEEOEOEKGL; // 0x20
	::KPNIFGIKELE* _KABGHANLAKI_k__BackingField; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* MFPOAHLPFHA; // 0x30
	::System::UInt32 BBDCIEAPOIP; // 0x38
	::System::Boolean HGKDNNDJJEF; // 0x3C
	::System::Boolean DOABPFJGNDN; // 0x3D

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELOPDAHLHMH__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOPDAHLHMH__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOPDAHLHMH_PHOADBJGFBE_OFFSET))(this);
	}

	::KPNIFGIKELE* DHHOKBFFLFG()
	{
		return ((::KPNIFGIKELE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOPDAHLHMH_DHHOKBFFLFG_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOPDAHLHMH_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOPDAHLHMH_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void HHGNGAAHPGD(::KPNIFGIKELE* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + ELOPDAHLHMH_HHGNGAAHPGD_OFFSET))(this, EGEGIMGMJHN);
	}

	::KPNIFGIKELE* JFGFJFIGKKC()
	{
		return ((::KPNIFGIKELE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOPDAHLHMH_JFGFJFIGKKC_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 NMPJMCCBNLO, ::System::UInt32 BBDCIEAPOIP, ::KPNIFGIKELE* IKHJEGECGJA, ::JPKMBBAHKDH* BCCOFAHJEII)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::KPNIFGIKELE*, ::JPKMBBAHKDH*))((::PBYTE)hIl2Cpp + ELOPDAHLHMH_CNHBDOMKKDE_OFFSET))(this, NMPJMCCBNLO, BBDCIEAPOIP, IKHJEGECGJA, BCCOFAHJEII);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOPDAHLHMH_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void MICHCIEIDHJ(::System::Collections::Generic::HashSet_1<::System::Int32>* BIJEENDPILB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + ELOPDAHLHMH_MICHCIEIDHJ_OFFSET))(this, BIJEENDPILB);
	}
};
