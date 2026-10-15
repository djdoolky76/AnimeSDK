#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHHPIFHIEIB.h"
#include "unitysdk/COAHPDIDOHI_FinalRotationState.h"
#include "unitysdk/JGCJNMMCEHA.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/AdvNavigationState.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AAGOHNBBHNP;
class EDJNAGDJEKB;
class FOOIINCDBFA;
class KFELGAIGHAP;
class NFGIHNCHEDO;
class NNKDKMBKFHC;
class PCFGFOGMLNN;
class PEDAPLLONJD;
class POPMABHOCDI;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifyAdventureCharacterRunSpeedRatio; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define COAHPDIDOHI_ABJDGPMIGPN_OFFSET UNITYSDK_OFFSET(0xDCAD820)
#define COAHPDIDOHI_ABMHNHPLBGM_OFFSET UNITYSDK_OFFSET(0xDCAD330)
#define COAHPDIDOHI_ANCMFKGKMDE_OFFSET UNITYSDK_OFFSET(0xDCAE850)
#define COAHPDIDOHI_BCHGNKAAFJI_OFFSET UNITYSDK_OFFSET(0xDCAED30)
#define COAHPDIDOHI_BEPBDGBNNBC_OFFSET UNITYSDK_OFFSET(0xDCB1560)
#define COAHPDIDOHI_BFIMDHLMDAH_OFFSET UNITYSDK_OFFSET(0xDCB0500)
#define COAHPDIDOHI_BKLKPPFFGJC_OFFSET UNITYSDK_OFFSET(0xDCB0620)
#define COAHPDIDOHI_BPLHGGOHOMB_OFFSET UNITYSDK_OFFSET(0xDCAD2D0)
#define COAHPDIDOHI_CCTOR_OFFSET UNITYSDK_OFFSET(0xDCB1670)
#define COAHPDIDOHI_CGELDICNAAL_OFFSET UNITYSDK_OFFSET(0xDCAFD90)
#define COAHPDIDOHI_CGKEJPMGGPJ_OFFSET UNITYSDK_OFFSET(0xDCAD450)
#define COAHPDIDOHI_CTOR_OFFSET UNITYSDK_OFFSET(0xDCACFA0)
#define COAHPDIDOHI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDCB1510)
#define COAHPDIDOHI_DNMOEDBBLBD_OFFSET UNITYSDK_OFFSET(0xDCB10E0)
#define COAHPDIDOHI_DPCPFGHNOCI_OFFSET UNITYSDK_OFFSET(0xDCAF6A0)
#define COAHPDIDOHI_EAEOHCFMAKH_OFFSET UNITYSDK_OFFSET(0xDCAD5D0)
#define COAHPDIDOHI_ELLNMINFMHE_OFFSET UNITYSDK_OFFSET(0xDCB0C00)
#define COAHPDIDOHI_EOIBMFKIIHL_OFFSET UNITYSDK_OFFSET(0xDCAE340)
#define COAHPDIDOHI_GNPAPJFDAJM_OFFSET UNITYSDK_OFFSET(0xDCB0040)
#define COAHPDIDOHI_HHLNHDADKEG_OFFSET UNITYSDK_OFFSET(0xDCAD240)
#define COAHPDIDOHI_ICCIBKFIDMA_OFFSET UNITYSDK_OFFSET(0xDCAF2D0)
#define COAHPDIDOHI_IIECMNAACJI_OFFSET UNITYSDK_OFFSET(0xDCB09A0)
#define COAHPDIDOHI_ILPNFJDKAPN_OFFSET UNITYSDK_OFFSET(0xDCB0E10)
#define COAHPDIDOHI_JAFIJEPAOOL_OFFSET UNITYSDK_OFFSET(0xDCAD6B0)
#define COAHPDIDOHI_LDIIJODIBOK_OFFSET UNITYSDK_OFFSET(0xDCB0BA0)
#define COAHPDIDOHI_LEAMMPFEHJG_OFFSET UNITYSDK_OFFSET(0xDCADAB0)
#define COAHPDIDOHI_LEHBJIAAIAD_OFFSET UNITYSDK_OFFSET(0xDCAD9B0)
#define COAHPDIDOHI_LLCDDOBNLBJ_OFFSET UNITYSDK_OFFSET(0xDCB0860)
#define COAHPDIDOHI_LMLOBFJFJOP_OFFSET UNITYSDK_OFFSET(0xDCB0910)
#define COAHPDIDOHI_MFIIEPJDFMF_OFFSET UNITYSDK_OFFSET(0xDCAF610)
#define COAHPDIDOHI_NBEBDEPNBLC_OFFSET UNITYSDK_OFFSET(0xDCB0A00)
#define COAHPDIDOHI_NCDLAIAFBGP_OFFSET UNITYSDK_OFFSET(0xDCB0D60)
#define COAHPDIDOHI_NFODBDONHGD_OFFSET UNITYSDK_OFFSET(0xDCAF9A0)
#define COAHPDIDOHI_NKMPEIAGGIG_OFFSET UNITYSDK_OFFSET(0xDCAE8E0)
#define COAHPDIDOHI_NOBHLMDJPCE_OFFSET UNITYSDK_OFFSET(0xDCAF480)
#define COAHPDIDOHI_OFLEBHLIKIP_OFFSET UNITYSDK_OFFSET(0xDCAE6B0)
#define COAHPDIDOHI_OIKODAGECCL_OFFSET UNITYSDK_OFFSET(0xDCAD460)
#define COAHPDIDOHI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDCADB20)
#define COAHPDIDOHI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDCB1090)
#define COAHPDIDOHI_TICK_OFFSET UNITYSDK_OFFSET(0xDCAE450)

	class COAHPDIDOHI
	{
	public:
		::PEDAPLLONJD* KPJMDJAALJF; // 0x28
		::EDJNAGDJEKB* CLEJPDMEOHE; // 0x30
		::System::String* IJMGEMMNNPI; // 0x38
		::KFELGAIGHAP* EBBKDAJNAMB; // 0x40
		::NNKDKMBKFHC* IEEOLIHJOIK; // 0x48
		::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio* JFEJENBHBCO; // 0x50
		::FOOIINCDBFA* CNPNMBNLKFJ; // 0x58
		::POPMABHOCDI* GBLEMMBAAOK; // 0x60
		::NFGIHNCHEDO* HHCIHLGDHOO; // 0x68
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x70
		::KFELGAIGHAP* DDCOIPBBDBI; // 0x78
		::PCFGFOGMLNN* LLMPMHJKOCF; // 0x80
		::System::Boolean JFMJNCKAFKF; // 0x88
		::System::Boolean GHCIDONEONG; // 0x89
		::System::Boolean LJPKHHCHMNN; // 0x8A
		::System::Byte _padding0[0x1];
		::JGCJNMMCEHA FHENGMHHFML; // 0x8C
		::System::UInt32 MNLCONKOFHM; // 0xC4
		::System::UInt32 EHKGELGDIFD; // 0xC8
		::System::UInt32 GGIAIMGEADO; // 0xCC
		::System::UInt32 HOGMFAMFHHD; // 0xD0
		::BHHPIFHIEIB PGOBCIDJGOI; // 0xD4
		::COAHPDIDOHI_FinalRotationState DEIHMACBGPN; // 0xF4
		::System::Boolean LHLGOFCIIPH; // 0xF5
		::System::Boolean HNALEMBOBFE; // 0xF6
		::System::Boolean KBAJODLOGMF; // 0xF7
		::RPG::GameCore::CharacterMotionFlag CPFECINDNEE; // 0xF8
		::System::Int32 PLGMPIDECKN; // 0xFC
		::System::Int32 KOBMKLBOBDF; // 0x100
		::System::Int32 BFMMEDALEBH; // 0x104
		::System::UInt32 HHPGJDAFKKM; // 0x108
		static ::RPG::GameCore::StringHash* StaticGet_EEFMDFABALL()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "COAHPDIDOHI")->GetStaticField(0x13010);
		}

		// static const ::System::String* ODLCPHNIBBD; // 0x0
		// static const ::System::Object ANKNBGLKLAI; // 0x0
		// static const ::System::Object JLDMIDGNLEM; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::AAGOHNBBHNP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::AAGOHNBBHNP*))((::PBYTE)hIl2Cpp + COAHPDIDOHI_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COAHPDIDOHI_CCTOR_OFFSET))();
		}

		::RPG::GameCore::GameEntity* HHLNHDADKEG()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_HHLNHDADKEG_OFFSET))(this);
		}

		::System::String* BPLHGGOHOMB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_BPLHGGOHOMB_OFFSET))(this);
		}

		::AAGOHNBBHNP* CGKEJPMGGPJ()
		{
			return ((::AAGOHNBBHNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_CGKEJPMGGPJ_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* OIKODAGECCL()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_OIKODAGECCL_OFFSET))(this);
		}

		::System::Void EAEOHCFMAKH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + COAHPDIDOHI_EAEOHCFMAKH_OFFSET))(this, a1);
		}

		::System::String* ABMHNHPLBGM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_ABMHNHPLBGM_OFFSET))(this);
		}

		::System::String* JAFIJEPAOOL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_JAFIJEPAOOL_OFFSET))(this);
		}

		::System::Void ABJDGPMIGPN(::NNKDKMBKFHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNKDKMBKFHC*))((::PBYTE)hIl2Cpp + COAHPDIDOHI_ABJDGPMIGPN_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + COAHPDIDOHI_TICK_OFFSET))(this, a1);
		}

		::System::Void BCHGNKAAFJI(::JGCJNMMCEHA a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGCJNMMCEHA))((::PBYTE)hIl2Cpp + COAHPDIDOHI_BCHGNKAAFJI_OFFSET))(this, a1);
		}

		::System::Void NFODBDONHGD(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + COAHPDIDOHI_NFODBDONHGD_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Vector3 CGELDICNAAL(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + COAHPDIDOHI_CGELDICNAAL_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void MFIIEPJDFMF(::JGCJNMMCEHA a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGCJNMMCEHA))((::PBYTE)hIl2Cpp + COAHPDIDOHI_MFIIEPJDFMF_OFFSET))(this, a1);
		}

		::System::Void DPCPFGHNOCI(::JGCJNMMCEHA a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGCJNMMCEHA))((::PBYTE)hIl2Cpp + COAHPDIDOHI_DPCPFGHNOCI_OFFSET))(this, a1);
		}

		::System::Void NOBHLMDJPCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_NOBHLMDJPCE_OFFSET))(this);
		}

		::System::Void ICCIBKFIDMA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + COAHPDIDOHI_ICCIBKFIDMA_OFFSET))(this, a1);
		}

		static ::UnityEngine::Vector3 BFIMDHLMDAH(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::RPG::GameCore::AdvNavigationState a4)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::AdvNavigationState))((::PBYTE)hIl2Cpp + COAHPDIDOHI_BFIMDHLMDAH_OFFSET))(a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 BKLKPPFFGJC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::RPG::GameCore::AdvNavigationState a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::AdvNavigationState))((::PBYTE)hIl2Cpp + COAHPDIDOHI_BKLKPPFFGJC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GNPAPJFDAJM(::JGCJNMMCEHA a1, ::RPG::GameCore::AdvNavigationState a2)
		{
			return ((::System::Void(*)(::PVOID, ::JGCJNMMCEHA, ::RPG::GameCore::AdvNavigationState))((::PBYTE)hIl2Cpp + COAHPDIDOHI_GNPAPJFDAJM_OFFSET))(this, a1, a2);
		}

		::System::Void LLCDDOBNLBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_LLCDDOBNLBJ_OFFSET))(this);
		}

		::System::Void IIECMNAACJI(::RPG::GameCore::AdvNavigationFailReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + COAHPDIDOHI_IIECMNAACJI_OFFSET))(this, a1);
		}

		::System::Void LMLOBFJFJOP(::PEDAPLLONJD* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::PEDAPLLONJD*, ::System::UInt32))((::PBYTE)hIl2Cpp + COAHPDIDOHI_LMLOBFJFJOP_OFFSET))(this, a1, a2);
		}

		::System::Boolean ANCMFKGKMDE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_ANCMFKGKMDE_OFFSET))(this);
		}

		::System::Void LEHBJIAAIAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_LEHBJIAAIAD_OFFSET))(this);
		}

		::System::Void OFLEBHLIKIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_OFLEBHLIKIP_OFFSET))(this);
		}

		::System::Void NBEBDEPNBLC(::PEDAPLLONJD* a1, ::RPG::GameCore::AdvNavigationFailReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::PEDAPLLONJD*, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + COAHPDIDOHI_NBEBDEPNBLC_OFFSET))(this, a1, a2);
		}

		::System::Void NKMPEIAGGIG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + COAHPDIDOHI_NKMPEIAGGIG_OFFSET))(this, a1);
		}

		::System::Void ELLNMINFMHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_ELLNMINFMHE_OFFSET))(this);
		}

		::System::Void NCDLAIAFBGP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + COAHPDIDOHI_NCDLAIAFBGP_OFFSET))(this, a1);
		}

		::System::Single ILPNFJDKAPN(::RPG::GameCore::CharacterMotionFlag a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::CharacterMotionFlag))((::PBYTE)hIl2Cpp + COAHPDIDOHI_ILPNFJDKAPN_OFFSET))(this, a1);
		}

		::System::Void LDIIJODIBOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_LDIIJODIBOK_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_DISPOSE_OFFSET))(this);
		}

		::System::Void DNMOEDBBLBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_DNMOEDBBLBD_OFFSET))(this);
		}

		::System::Void LEAMMPFEHJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_LEAMMPFEHJG_OFFSET))(this);
		}

		::System::Void EOIBMFKIIHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_EOIBMFKIIHL_OFFSET))(this);
		}

		::System::Void BEPBDGBNNBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_BEPBDGBNNBC_OFFSET))(this);
		}

	};
