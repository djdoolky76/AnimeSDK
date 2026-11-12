#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PropertyStacking.h"
#include "unitysdk/System/Object.h"
class GKMKOMHLGDC;
namespace RPG::GameCore { class PropertyAdsorptionConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Buffers { template <typename T> class ArrayPool_1; }

#define GKMKOMHLGDC_AFEHEFFABFF_OFFSET UNITYSDK_OFFSET(0x169E1500)
#define GKMKOMHLGDC_AFHLKKGDBBO_OFFSET UNITYSDK_OFFSET(0x169E0AC0)
#define GKMKOMHLGDC_BMFIIGLACOD_OFFSET UNITYSDK_OFFSET(0x169E0FD0)
#define GKMKOMHLGDC_CCTOR_OFFSET UNITYSDK_OFFSET(0x169E1690)
#define GKMKOMHLGDC_CELKLIAMBBJ_OFFSET UNITYSDK_OFFSET(0x169DFFF0)
#define GKMKOMHLGDC_CLEAR_OFFSET UNITYSDK_OFFSET(0x169E0420)
#define GKMKOMHLGDC_CPNFGPAINBI_OFFSET UNITYSDK_OFFSET(0x169E0050)
#define GKMKOMHLGDC_CTOR_OFFSET UNITYSDK_OFFSET(0x169E1550)
#define GKMKOMHLGDC_DAPPBDOIOKG_OFFSET UNITYSDK_OFFSET(0x169E0540)
#define GKMKOMHLGDC_DBADMBPBLKP_OFFSET UNITYSDK_OFFSET(0x169E1510)
#define GKMKOMHLGDC_DEHKGFPOCJN_OFFSET UNITYSDK_OFFSET(0x169E0470)
#define GKMKOMHLGDC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x169E01D0)
#define GKMKOMHLGDC_DJFJOEKHFPE_OFFSET UNITYSDK_OFFSET(0x169E10B0)
#define GKMKOMHLGDC_DPBNLPPNAJE_OFFSET UNITYSDK_OFFSET(0x169E0E40)
#define GKMKOMHLGDC_FENOMPCEFII_OFFSET UNITYSDK_OFFSET(0x169E14D0)
#define GKMKOMHLGDC_GET_ISREINIT_OFFSET UNITYSDK_OFFSET(0x169E1530)
#define GKMKOMHLGDC_GJFCABFFGEG_OFFSET UNITYSDK_OFFSET(0x169E1190)
#define GKMKOMHLGDC_HBEMAGGNLLJ_OFFSET UNITYSDK_OFFSET(0x169E1330)
#define GKMKOMHLGDC_IHEOMJHJIEM_OFFSET UNITYSDK_OFFSET(0x169E14F0)
#define GKMKOMHLGDC_IMMBBFPKMMH_OFFSET UNITYSDK_OFFSET(0x169DFEC0)
#define GKMKOMHLGDC_IOBNPOIIHKP_OFFSET UNITYSDK_OFFSET(0x169E14E0)
#define GKMKOMHLGDC_JICEJCOMFMB_OFFSET UNITYSDK_OFFSET(0x169E0730)
#define GKMKOMHLGDC_JJCLOOKDBGN_OFFSET UNITYSDK_OFFSET(0x169DFF40)
#define GKMKOMHLGDC_KEGDJIHHELL_OFFSET UNITYSDK_OFFSET(0x169E0CC0)
#define GKMKOMHLGDC_KLBLLCHLLGE_OFFSET UNITYSDK_OFFSET(0x169E0870)
#define GKMKOMHLGDC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x169DF890)
#define GKMKOMHLGDC_LANKJCGAEML_OFFSET UNITYSDK_OFFSET(0x169DFE00)
#define GKMKOMHLGDC_LMDCAHEIIFL_OFFSET UNITYSDK_OFFSET(0x169E08D0)
#define GKMKOMHLGDC_MKOKFPHEHGN_OFFSET UNITYSDK_OFFSET(0x169E1520)
#define GKMKOMHLGDC_MOHNKIMILIA_OFFSET UNITYSDK_OFFSET(0x169E0F10)
#define GKMKOMHLGDC_NDPGDHJGBJC_OFFSET UNITYSDK_OFFSET(0x169E05E0)
#define GKMKOMHLGDC_ODCOLPDKFPK_OFFSET UNITYSDK_OFFSET(0x169E07A0)
#define GKMKOMHLGDC_OICDELILAEJ_OFFSET UNITYSDK_OFFSET(0x169E0EA0)
#define GKMKOMHLGDC_PLAMKEFFEGD_OFFSET UNITYSDK_OFFSET(0x169DF980)
#define GKMKOMHLGDC_SET_ISREINIT_OFFSET UNITYSDK_OFFSET(0x169E1540)

inline static constexpr unsigned int GKMKOMHLGDC_TypeDefinitionIndex = 57553;

	class GKMKOMHLGDC : public ::System::Object
	{
	public:
		::RPG::GameCore::PropertyAdsorptionConfig* MDDDBCJPFFE; // 0x10
		::UnityEngine::Buffers::ArrayPool_1<::System::Int32>* LNEELHFFBCK; // 0x18
		::UnityEngine::Buffers::ArrayPool_1<::RPG::GameCore::FixPoint>* OGBJLGDAEJF; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* MBNNBJKFLIL; // 0x28
		::UnityEngine::Buffers::ArrayPool_1<::System::Boolean>* BKCFEBMDDAD; // 0x30
		::Il2CppArray<::System::Boolean>* ILLGNFNKKME; // 0x38
		::Il2CppArray<::System::Int32>* GNGAAFIPGJM; // 0x40
		::RPG::GameCore::FixPoint KKHLEHJGDLB; // 0x48
		::RPG::GameCore::PropertyStacking AHACPDOPMFP; // 0x50
		::System::Int32 JMCEABGIEGA; // 0x54
		::RPG::GameCore::FixPoint GFEABHKFHKG; // 0x58
		::System::Int32 JMLFEBAGDCB; // 0x60
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint FJIBCEKMCBP; // 0x68
		::System::Int32 ONFGMFPJLCB; // 0x70
		::System::Boolean _IsReinit_k__BackingField; // 0x74
		::System::Byte _padding1[0x3];
		::RPG::GameCore::FixPoint EJNMGLJJEOO; // 0x78
		static ::System::Int32* StaticGet_JPMOPBOOMBO()
		{
			return (::System::Int32*)UnitySDK::FromName("", "GKMKOMHLGDC")->GetStaticField(0x15810);
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

		::System::Int32 KEGDJIHHELL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMKOMHLGDC_KEGDJIHHELL_OFFSET))(this);
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
