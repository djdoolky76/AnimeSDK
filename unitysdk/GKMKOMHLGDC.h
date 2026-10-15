#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PropertyStacking.h"
#include "unitysdk/System/Object.h"
class GKMKOMHLGDC;
namespace RPG::GameCore { class PropertyAdsorptionConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Buffers { template <typename T> class ArrayPool_1; }

#define GKMKOMHLGDC_AFEHEFFABFF_OFFSET UNITYSDK_OFFSET(0x15A98AF0)
#define GKMKOMHLGDC_AFHLKKGDBBO_OFFSET UNITYSDK_OFFSET(0x15A98230)
#define GKMKOMHLGDC_BMFIIGLACOD_OFFSET UNITYSDK_OFFSET(0x15A985C0)
#define GKMKOMHLGDC_CCTOR_OFFSET UNITYSDK_OFFSET(0x15A98C80)
#define GKMKOMHLGDC_CELKLIAMBBJ_OFFSET UNITYSDK_OFFSET(0x15A97760)
#define GKMKOMHLGDC_CLEAR_OFFSET UNITYSDK_OFFSET(0x15A97B90)
#define GKMKOMHLGDC_CPNFGPAINBI_OFFSET UNITYSDK_OFFSET(0x15A977C0)
#define GKMKOMHLGDC_CTOR_OFFSET UNITYSDK_OFFSET(0x15A98B40)
#define GKMKOMHLGDC_DAPPBDOIOKG_OFFSET UNITYSDK_OFFSET(0x15A97CB0)
#define GKMKOMHLGDC_DBADMBPBLKP_OFFSET UNITYSDK_OFFSET(0x15A98B00)
#define GKMKOMHLGDC_DEHKGFPOCJN_OFFSET UNITYSDK_OFFSET(0x15A97BE0)
#define GKMKOMHLGDC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A97940)
#define GKMKOMHLGDC_DJFJOEKHFPE_OFFSET UNITYSDK_OFFSET(0x15A986A0)
#define GKMKOMHLGDC_DPBNLPPNAJE_OFFSET UNITYSDK_OFFSET(0x15A98430)
#define GKMKOMHLGDC_FENOMPCEFII_OFFSET UNITYSDK_OFFSET(0x15A98AC0)
#define GKMKOMHLGDC_GET_ISREINIT_OFFSET UNITYSDK_OFFSET(0x15A98B20)
#define GKMKOMHLGDC_GJFCABFFGEG_OFFSET UNITYSDK_OFFSET(0x15A98780)
#define GKMKOMHLGDC_HBEMAGGNLLJ_OFFSET UNITYSDK_OFFSET(0x15A98920)
#define GKMKOMHLGDC_IHEOMJHJIEM_OFFSET UNITYSDK_OFFSET(0x15A98AE0)
#define GKMKOMHLGDC_IMMBBFPKMMH_OFFSET UNITYSDK_OFFSET(0x15A97630)
#define GKMKOMHLGDC_IOBNPOIIHKP_OFFSET UNITYSDK_OFFSET(0x15A98AD0)
#define GKMKOMHLGDC_JICEJCOMFMB_OFFSET UNITYSDK_OFFSET(0x15A97EA0)
#define GKMKOMHLGDC_JJCLOOKDBGN_OFFSET UNITYSDK_OFFSET(0x15A976B0)
#define GKMKOMHLGDC_KLBLLCHLLGE_OFFSET UNITYSDK_OFFSET(0x15A97FE0)
#define GKMKOMHLGDC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15A97000)
#define GKMKOMHLGDC_LANKJCGAEML_OFFSET UNITYSDK_OFFSET(0x15A97570)
#define GKMKOMHLGDC_LMDCAHEIIFL_OFFSET UNITYSDK_OFFSET(0x15A98040)
#define GKMKOMHLGDC_MKOKFPHEHGN_OFFSET UNITYSDK_OFFSET(0x15A98B10)
#define GKMKOMHLGDC_MOHNKIMILIA_OFFSET UNITYSDK_OFFSET(0x15A98500)
#define GKMKOMHLGDC_NDPGDHJGBJC_OFFSET UNITYSDK_OFFSET(0x15A97D50)
#define GKMKOMHLGDC_ODCOLPDKFPK_OFFSET UNITYSDK_OFFSET(0x15A97F10)
#define GKMKOMHLGDC_OICDELILAEJ_OFFSET UNITYSDK_OFFSET(0x15A98490)
#define GKMKOMHLGDC_PLAMKEFFEGD_OFFSET UNITYSDK_OFFSET(0x15A970F0)
#define GKMKOMHLGDC_SET_ISREINIT_OFFSET UNITYSDK_OFFSET(0x15A98B30)

inline static constexpr unsigned int GKMKOMHLGDC_TypeDefinitionIndex = 56339;

	class GKMKOMHLGDC : public ::System::Object
	{
	public:
		::UnityEngine::Buffers::ArrayPool_1<::RPG::GameCore::FixPoint>* OGBJLGDAEJF; // 0x10
		::Il2CppArray<::System::Int32>* GNGAAFIPGJM; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* MBNNBJKFLIL; // 0x20
		::RPG::GameCore::PropertyAdsorptionConfig* MDDDBCJPFFE; // 0x28
		::UnityEngine::Buffers::ArrayPool_1<::System::Int32>* LNEELHFFBCK; // 0x30
		::UnityEngine::Buffers::ArrayPool_1<::System::Boolean>* BKCFEBMDDAD; // 0x38
		::Il2CppArray<::System::Boolean>* ILLGNFNKKME; // 0x40
		::System::Int32 ONFGMFPJLCB; // 0x48
		::RPG::GameCore::PropertyStacking AHACPDOPMFP; // 0x4C
		::System::Boolean _IsReinit_k__BackingField; // 0x50
		::System::Byte _padding0[0x7];
		::RPG::GameCore::FixPoint FJIBCEKMCBP; // 0x58
		::RPG::GameCore::FixPoint GFEABHKFHKG; // 0x60
		::RPG::GameCore::FixPoint KKHLEHJGDLB; // 0x68
		::System::Int32 JMLFEBAGDCB; // 0x70
		::System::Int32 JMCEABGIEGA; // 0x74
		::RPG::GameCore::FixPoint EJNMGLJJEOO; // 0x78
		static ::System::Int32* StaticGet_JPMOPBOOMBO()
		{
			return (::System::Int32*)UnitySDK::FromName("", "GKMKOMHLGDC")->GetStaticField(0x15090);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMKOMHLGDC_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKMKOMHLGDC_CCTOR_OFFSET))();
		}

		::GKMKOMHLGDC* KPJGDHLENIP(::RPG::GameCore::PropertyStacking a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::PropertyAdsorptionConfig* a5)
		{
			return ((::GKMKOMHLGDC*(*)(::PVOID, ::RPG::GameCore::PropertyStacking, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::PropertyAdsorptionConfig*))((::PBYTE)hIl2Cpp + GKMKOMHLGDC_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void IMMBBFPKMMH(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + GKMKOMHLGDC_IMMBBFPKMMH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CELKLIAMBBJ(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + GKMKOMHLGDC_CELKLIAMBBJ_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMKOMHLGDC_DISPOSE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMKOMHLGDC_CLEAR_OFFSET))(this);
		}

		::System::Int32 LANKJCGAEML(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + GKMKOMHLGDC_LANKJCGAEML_OFFSET))(this, a1);
		}

		::System::Void DAPPBDOIOKG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GKMKOMHLGDC_DAPPBDOIOKG_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint JICEJCOMFMB(::System::Int32 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GKMKOMHLGDC_JICEJCOMFMB_OFFSET))(this, a1);
		}

		::System::Void JJCLOOKDBGN(::System::Int32 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + GKMKOMHLGDC_JJCLOOKDBGN_OFFSET))(this, a1, a2);
		}

		::System::Void ODCOLPDKFPK(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + GKMKOMHLGDC_ODCOLPDKFPK_OFFSET))(this, a1);
		}

		::System::Boolean KLBLLCHLLGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMKOMHLGDC_KLBLLCHLLGE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint LMDCAHEIIFL(::System::Int32 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Int32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + GKMKOMHLGDC_LMDCAHEIIFL_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint AFHLKKGDBBO(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + GKMKOMHLGDC_AFHLKKGDBBO_OFFSET))(this, a1);
		}

		::System::Void PLAMKEFFEGD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GKMKOMHLGDC_PLAMKEFFEGD_OFFSET))(this, a1);
		}

		::System::Int32 DEHKGFPOCJN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMKOMHLGDC_DEHKGFPOCJN_OFFSET))(this);
		}

		::System::Void NDPGDHJGBJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMKOMHLGDC_NDPGDHJGBJC_OFFSET))(this);
		}

		::System::Void CPNFGPAINBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMKOMHLGDC_CPNFGPAINBI_OFFSET))(this);
		}

		::System::Void DPBNLPPNAJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMKOMHLGDC_DPBNLPPNAJE_OFFSET))(this);
		}

		::System::Void OICDELILAEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMKOMHLGDC_OICDELILAEJ_OFFSET))(this);
		}

		::System::Void MOHNKIMILIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMKOMHLGDC_MOHNKIMILIA_OFFSET))(this);
		}

		::System::Void BMFIIGLACOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMKOMHLGDC_BMFIIGLACOD_OFFSET))(this);
		}

		::System::Void DJFJOEKHFPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMKOMHLGDC_DJFJOEKHFPE_OFFSET))(this);
		}

		::System::Void GJFCABFFGEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMKOMHLGDC_GJFCABFFGEG_OFFSET))(this);
		}

		::System::Void HBEMAGGNLLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMKOMHLGDC_HBEMAGGNLLJ_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint FENOMPCEFII()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMKOMHLGDC_FENOMPCEFII_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint IOBNPOIIHKP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMKOMHLGDC_IOBNPOIIHKP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint IHEOMJHJIEM()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMKOMHLGDC_IHEOMJHJIEM_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint AFEHEFFABFF()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMKOMHLGDC_AFEHEFFABFF_OFFSET))(this);
		}

		::RPG::GameCore::PropertyAdsorptionConfig* DBADMBPBLKP()
		{
			return ((::RPG::GameCore::PropertyAdsorptionConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMKOMHLGDC_DBADMBPBLKP_OFFSET))(this);
		}

		::RPG::GameCore::PropertyStacking MKOKFPHEHGN()
		{
			return ((::RPG::GameCore::PropertyStacking(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMKOMHLGDC_MKOKFPHEHGN_OFFSET))(this);
		}

		::System::Boolean get_IsReinit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMKOMHLGDC_GET_ISREINIT_OFFSET))(this);
		}

		::System::Void set_IsReinit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GKMKOMHLGDC_SET_ISREINIT_OFFSET))(this, a1);
		}

	};
