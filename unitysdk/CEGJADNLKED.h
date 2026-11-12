#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/SOFinishReason.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BACCOPOCMPC;
class FBDDCJDENFP;
class GELIALJDFBL;
class HKEMHFGCCAL;
class IBHOBOHAAIA;
namespace RPG::GameCore { class SOConfigInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CEGJADNLKED_AINEGEBHAJF_OFFSET UNITYSDK_OFFSET(0xD0F3B10)
#define CEGJADNLKED_BIKCAGPMJKH_OFFSET UNITYSDK_OFFSET(0xD0F4440)
#define CEGJADNLKED_BJGDNGNEIPK_OFFSET UNITYSDK_OFFSET(0xD0F3EE0)
#define CEGJADNLKED_CGLFDGOHOHM_OFFSET UNITYSDK_OFFSET(0xD0F6E60)
#define CEGJADNLKED_CKKBNFONOAI_OFFSET UNITYSDK_OFFSET(0xD0F5740)
#define CEGJADNLKED_CLMMBDCCNAP_OFFSET UNITYSDK_OFFSET(0xD0F5630)
#define CEGJADNLKED_CTOR_OFFSET UNITYSDK_OFFSET(0xD0F3950)
#define CEGJADNLKED_DBIELBAPKIK_OFFSET UNITYSDK_OFFSET(0xD0F5B10)
#define CEGJADNLKED_DGFBDBFFDJC_OFFSET UNITYSDK_OFFSET(0xD0F6E70)
#define CEGJADNLKED_DHFBDMHFNIK_OFFSET UNITYSDK_OFFSET(0xD0F59E0)
#define CEGJADNLKED_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD0F3AC0)
#define CEGJADNLKED_GMCADCGFGPA_OFFSET UNITYSDK_OFFSET(0xD0F5840)
#define CEGJADNLKED_GMJDGFODDPA_OFFSET UNITYSDK_OFFSET(0xD0F46B0)
#define CEGJADNLKED_HCGIPLMMEIN_OFFSET UNITYSDK_OFFSET(0xD0F57C0)
#define CEGJADNLKED_HLKDADAHKHA_OFFSET UNITYSDK_OFFSET(0xD0F47F0)
#define CEGJADNLKED_HNALGDBPDMB_OFFSET UNITYSDK_OFFSET(0xD0F54A0)
#define CEGJADNLKED_HNGEEMJOEEL_OFFSET UNITYSDK_OFFSET(0xD0F4570)
#define CEGJADNLKED_IBFMFIFCDGC_OFFSET UNITYSDK_OFFSET(0xD0F43E0)
#define CEGJADNLKED_IGHDLIAIJLC_OFFSET UNITYSDK_OFFSET(0xD0F6E50)
#define CEGJADNLKED_JMNJBFJDJML_OFFSET UNITYSDK_OFFSET(0xD0F4A60)
#define CEGJADNLKED_JPCDJPLGCAE_OFFSET UNITYSDK_OFFSET(0xD0F4380)
#define CEGJADNLKED_KMBPCMGLBNH_OFFSET UNITYSDK_OFFSET(0xD0F58C0)
#define CEGJADNLKED_KMOKGHLKKBF_OFFSET UNITYSDK_OFFSET(0xD0F4620)
#define CEGJADNLKED_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xD0F3E50)
#define CEGJADNLKED_MNLBEIIOFEK_OFFSET UNITYSDK_OFFSET(0xD0F5590)
#define CEGJADNLKED_MOIOCMLALLL_OFFSET UNITYSDK_OFFSET(0xD0F4490)
#define CEGJADNLKED_MOKNCFJICIC_OFFSET UNITYSDK_OFFSET(0xD0F59A0)
#define CEGJADNLKED_NFAHMEHMMOI_OFFSET UNITYSDK_OFFSET(0xD0F6BE0)
#define CEGJADNLKED_OIAILFLOBIA_OFFSET UNITYSDK_OFFSET(0xD0F4B10)
#define CEGJADNLKED_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0xD0F4300)
#define CEGJADNLKED_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0xD0F4340)
#define CEGJADNLKED_OOKDABLIIBB_OFFSET UNITYSDK_OFFSET(0xD0F6E80)
#define CEGJADNLKED_PHDABOGDLFN_OFFSET UNITYSDK_OFFSET(0xD0F6D10)
#define CEGJADNLKED_PLONMNJMJAC_OFFSET UNITYSDK_OFFSET(0xD0F5A20)
#define CEGJADNLKED_TICK_OFFSET UNITYSDK_OFFSET(0xD0F6180)

inline static constexpr unsigned int CEGJADNLKED_TypeDefinitionIndex = 58095;

	class CEGJADNLKED : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::BACCOPOCMPC* PJLGDHFHFLO; // 0x18
		::IBHOBOHAAIA* AKDKGMDOBNB; // 0x20
		::HKEMHFGCCAL* BFGMODICHLM; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FBDDCJDENFP*>* IPLCHKLPLKI; // 0x30
		::System::Collections::Generic::List_1<::System::Object*>* GBOENHFINMI; // 0x38
		::RPG::GameCore::SOConfigInfo* DOCOKGINHBL; // 0x40
		::System::Boolean KLBDGKFGCIJ; // 0x48
		::System::Boolean MHEAIOMEGCA; // 0x49
		::System::Boolean PFCKLCHAFEC; // 0x4A
		::System::Byte _padding0[0x1];
		::System::UInt32 ACILBNNGDEK; // 0x4C
		::System::UInt64 HFPFPMDIIHP; // 0x50
		::System::UInt32 GDMKHLLFIGK; // 0x58
		::System::Byte _padding1[0x4];
		::System::UInt64 FCAEOGIFPCC; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEGJADNLKED_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEGJADNLKED_DISPOSE_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::RPG::GameCore::SOConfigInfo* a1, ::FBDDCJDENFP* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SOConfigInfo*, ::FBDDCJDENFP*, ::System::Boolean))((::PBYTE)hIl2Cpp + CEGJADNLKED_LMCEDCHJKFF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnModelRootLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEGJADNLKED_ONMODELROOTLOADED_OFFSET))(this);
		}

		::System::Void OnModelRootUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEGJADNLKED_ONMODELROOTUNLOADED_OFFSET))(this);
		}

		::System::Boolean JPCDJPLGCAE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CEGJADNLKED_JPCDJPLGCAE_OFFSET))(this);
		}

		::System::Void IBFMFIFCDGC(::System::UInt64 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt32))((::PBYTE)hIl2Cpp + CEGJADNLKED_IBFMFIFCDGC_OFFSET))(this, a1, a2);
		}

		::System::Void BIKCAGPMJKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEGJADNLKED_BIKCAGPMJKH_OFFSET))(this);
		}

		::System::UInt32 MOIOCMLALLL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEGJADNLKED_MOIOCMLALLL_OFFSET))(this);
		}

		::FBDDCJDENFP* HNGEEMJOEEL(::System::UInt32 a1)
		{
			return ((::FBDDCJDENFP*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CEGJADNLKED_HNGEEMJOEEL_OFFSET))(this, a1);
		}

		::System::Boolean KMOKGHLKKBF(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CEGJADNLKED_KMOKGHLKKBF_OFFSET))(this, a1);
		}

		::System::Void GMJDGFODDPA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CEGJADNLKED_GMJDGFODDPA_OFFSET))(this, a1);
		}

		::System::Void HLKDADAHKHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEGJADNLKED_HLKDADAHKHA_OFFSET))(this);
		}

		::System::Boolean JMNJBFJDJML(::System::UInt64 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::UInt32))((::PBYTE)hIl2Cpp + CEGJADNLKED_JMNJBFJDJML_OFFSET))(this, a1, a2);
		}

		::System::Boolean OIAILFLOBIA(::HKEMHFGCCAL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HKEMHFGCCAL*))((::PBYTE)hIl2Cpp + CEGJADNLKED_OIAILFLOBIA_OFFSET))(this, a1);
		}

		::System::Void CKKBNFONOAI(::System::UInt64 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt32))((::PBYTE)hIl2Cpp + CEGJADNLKED_CKKBNFONOAI_OFFSET))(this, a1, a2);
		}

		::System::Void HCGIPLMMEIN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CEGJADNLKED_HCGIPLMMEIN_OFFSET))(this, a1);
		}

		::System::Boolean GMCADCGFGPA(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CEGJADNLKED_GMCADCGFGPA_OFFSET))(this, a1);
		}

		::System::Boolean KMBPCMGLBNH(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CEGJADNLKED_KMBPCMGLBNH_OFFSET))(this, a1, a2);
		}

		::System::Void MOKNCFJICIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEGJADNLKED_MOKNCFJICIC_OFFSET))(this);
		}

		::System::Void DHFBDMHFNIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEGJADNLKED_DHFBDMHFNIK_OFFSET))(this);
		}

		::System::Void PLONMNJMJAC(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CEGJADNLKED_PLONMNJMJAC_OFFSET))(this, a1, a2, a3);
		}

		::System::String* DBIELBAPKIK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEGJADNLKED_DBIELBAPKIK_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CEGJADNLKED_TICK_OFFSET))(this, a1);
		}

		::System::Void BJGDNGNEIPK(::FBDDCJDENFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBDDCJDENFP*))((::PBYTE)hIl2Cpp + CEGJADNLKED_BJGDNGNEIPK_OFFSET))(this, a1);
		}

		::System::Void AINEGEBHAJF(::RPG::GameCore::SOFinishReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SOFinishReason))((::PBYTE)hIl2Cpp + CEGJADNLKED_AINEGEBHAJF_OFFSET))(this, a1);
		}

		::GELIALJDFBL* CLMMBDCCNAP(::GELIALJDFBL* a1)
		{
			return ((::GELIALJDFBL*(*)(::PVOID, ::GELIALJDFBL*))((::PBYTE)hIl2Cpp + CEGJADNLKED_CLMMBDCCNAP_OFFSET))(this, a1);
		}

		::System::Void HNALGDBPDMB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CEGJADNLKED_HNALGDBPDMB_OFFSET))(this, a1);
		}

		::System::Void MNLBEIIOFEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEGJADNLKED_MNLBEIIOFEK_OFFSET))(this);
		}

		::System::Void NFAHMEHMMOI(::GELIALJDFBL* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::GELIALJDFBL*, ::System::Boolean))((::PBYTE)hIl2Cpp + CEGJADNLKED_NFAHMEHMMOI_OFFSET))(this, a1, a2);
		}

		::System::Boolean PHDABOGDLFN(::GELIALJDFBL* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GELIALJDFBL*, ::System::Boolean))((::PBYTE)hIl2Cpp + CEGJADNLKED_PHDABOGDLFN_OFFSET))(this, a1, a2);
		}

		::System::UInt64 IGHDLIAIJLC()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CEGJADNLKED_IGHDLIAIJLC_OFFSET))(this);
		}

		::System::UInt32 CGLFDGOHOHM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEGJADNLKED_CGLFDGOHOHM_OFFSET))(this);
		}

		::RPG::GameCore::SOConfigInfo* DGFBDBFFDJC()
		{
			return ((::RPG::GameCore::SOConfigInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEGJADNLKED_DGFBDBFFDJC_OFFSET))(this);
		}

		::FBDDCJDENFP* OOKDABLIIBB()
		{
			return ((::FBDDCJDENFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEGJADNLKED_OOKDABLIIBB_OFFSET))(this);
		}

	};
