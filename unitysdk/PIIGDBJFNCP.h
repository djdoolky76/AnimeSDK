#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHEGNEBMLN.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
class GNLNKOGLFPF;
class PIIGDBJFNCP_CKDDNLNKPNM;
class PIIGDBJFNCP_MHKMALKHMCJ;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class LevelCharacterBeginAttack; }
namespace RPG::GameCore { class LevelCharacterDie; }
namespace RPG::GameCore { class LevelCharacterEndAttack; }
namespace RPG::GameCore { class LevelDamageEntityPhase1; }
namespace RPG::GameCore { class PVEGameStatistics; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PIIGDBJFNCP_AHKGJFJEJIL_OFFSET UNITYSDK_OFFSET(0xC267250)
#define PIIGDBJFNCP_BPOPNBCAJAM_OFFSET UNITYSDK_OFFSET(0xC2673E0)
#define PIIGDBJFNCP_CFHDPBFLHKI_OFFSET UNITYSDK_OFFSET(0xC266A20)
#define PIIGDBJFNCP_CTOR_OFFSET UNITYSDK_OFFSET(0xC268C50)
#define PIIGDBJFNCP_DCHKBEMDKPD_OFFSET UNITYSDK_OFFSET(0xC266FF0)
#define PIIGDBJFNCP_DEDNCOJJPHD_OFFSET UNITYSDK_OFFSET(0xC268020)
#define PIIGDBJFNCP_DGDNLICDDPG_OFFSET UNITYSDK_OFFSET(0xC266950)
#define PIIGDBJFNCP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC2678A0)
#define PIIGDBJFNCP_ECCKGKMKGEM_OFFSET UNITYSDK_OFFSET(0xC267D20)
#define PIIGDBJFNCP_ECLBKHIEKKM_OFFSET UNITYSDK_OFFSET(0xC268890)
#define PIIGDBJFNCP_ELCMJDDLIMM_OFFSET UNITYSDK_OFFSET(0xC2671F0)
#define PIIGDBJFNCP_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0xC2682F0)
#define PIIGDBJFNCP_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0xC267180)
#define PIIGDBJFNCP_HBIFBEDEAIA_OFFSET UNITYSDK_OFFSET(0xC267BA0)
#define PIIGDBJFNCP_IKDNEFDGIPO_OFFSET UNITYSDK_OFFSET(0xC267190)
#define PIIGDBJFNCP_JFKOEPGLAJM_OFFSET UNITYSDK_OFFSET(0xC2680A0)
#define PIIGDBJFNCP_JLPPDAANMIL_OFFSET UNITYSDK_OFFSET(0xC266EF0)
#define PIIGDBJFNCP_KNJKPFCPKAH_OFFSET UNITYSDK_OFFSET(0xC267A00)
#define PIIGDBJFNCP_NAIKHOMALNJ_OFFSET UNITYSDK_OFFSET(0xC267600)
#define PIIGDBJFNCP_NIOCDJJMPDP_OFFSET UNITYSDK_OFFSET(0xC266940)
#define PIIGDBJFNCP_OFDDFDGKNPJ_OFFSET UNITYSDK_OFFSET(0xC267C30)
#define PIIGDBJFNCP_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0xC267970)
#define PIIGDBJFNCP_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xC2672B0)
#define PIIGDBJFNCP_OPLEBIFOOFL_OFFSET UNITYSDK_OFFSET(0xC266A90)
#define PIIGDBJFNCP_PCPJBFMLKEP_OFFSET UNITYSDK_OFFSET(0xC2682A0)
#define PIIGDBJFNCP_PIMHFOAHCPI_OFFSET UNITYSDK_OFFSET(0xC2679C0)

inline static constexpr unsigned int PIIGDBJFNCP_TypeDefinitionIndex = 55958;

	class PIIGDBJFNCP : public ::LHHEGNEBMLN
	{
	public:
		::Il2CppArray<::System::Object*>* HKKMLKEOGBG; // 0x38
		::System::Collections::Generic::List_1<::System::Object*>* EBMEBJEIJHJ; // 0x40
		::System::Collections::Generic::List_1<::System::Int32>* MDCJLGIBFDF; // 0x48
		::RPG::GameCore::FixPoint ABHLBGIIGMF; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIGDBJFNCP_CTOR_OFFSET))(this);
		}

		::System::Boolean NIOCDJJMPDP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIGDBJFNCP_NIOCDJJMPDP_OFFSET))(this);
		}

		::System::Void DGDNLICDDPG(::System::Int32 a1, ::System::Int32 a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PIIGDBJFNCP_DGDNLICDDPG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OPLEBIFOOFL(::System::UInt32 a1, ::System::Int32 a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PIIGDBJFNCP_OPLEBIFOOFL_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::FixPoint JLPPDAANMIL(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PIIGDBJFNCP_JLPPDAANMIL_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint DCHKBEMDKPD(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + PIIGDBJFNCP_DCHKBEMDKPD_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
		{
			return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIGDBJFNCP_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint IKDNEFDGIPO()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIGDBJFNCP_IKDNEFDGIPO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint ELCMJDDLIMM()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIGDBJFNCP_ELCMJDDLIMM_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint AHKGJFJEJIL()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIGDBJFNCP_AHKGJFJEJIL_OFFSET))(this);
		}

		::System::Void OnInitialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIGDBJFNCP_ONINITIALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIGDBJFNCP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnBattleInstanceCreated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIGDBJFNCP_ONBATTLEINSTANCECREATED_OFFSET))(this);
		}

		::System::Void PIMHFOAHCPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIGDBJFNCP_PIMHFOAHCPI_OFFSET))(this);
		}

		::System::Void NAIKHOMALNJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIGDBJFNCP_NAIKHOMALNJ_OFFSET))(this);
		}

		::PIIGDBJFNCP_MHKMALKHMCJ* CFHDPBFLHKI(::System::Int32 a1)
		{
			return ((::PIIGDBJFNCP_MHKMALKHMCJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PIIGDBJFNCP_CFHDPBFLHKI_OFFSET))(this, a1);
		}

		::System::Void KNJKPFCPKAH(::RPG::GameCore::JsonEnum* a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonEnum*, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PIIGDBJFNCP_KNJKPFCPKAH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HBIFBEDEAIA(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PIIGDBJFNCP_HBIFBEDEAIA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OFDDFDGKNPJ(::RPG::GameCore::LevelCharacterDie* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterDie*))((::PBYTE)hIl2Cpp + PIIGDBJFNCP_OFDDFDGKNPJ_OFFSET))(this, a1);
		}

		::System::Void ECCKGKMKGEM(::RPG::GameCore::LevelCharacterEndAttack* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterEndAttack*))((::PBYTE)hIl2Cpp + PIIGDBJFNCP_ECCKGKMKGEM_OFFSET))(this, a1);
		}

		::System::Void DEDNCOJJPHD(::RPG::GameCore::LevelCharacterBeginAttack* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterBeginAttack*))((::PBYTE)hIl2Cpp + PIIGDBJFNCP_DEDNCOJJPHD_OFFSET))(this, a1);
		}

		::System::Void JFKOEPGLAJM(::RPG::GameCore::LevelDamageEntityPhase1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelDamageEntityPhase1*))((::PBYTE)hIl2Cpp + PIIGDBJFNCP_JFKOEPGLAJM_OFFSET))(this, a1);
		}

		::System::Void BPOPNBCAJAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIGDBJFNCP_BPOPNBCAJAM_OFFSET))(this);
		}

		::System::Void PCPJBFMLKEP(::GNLNKOGLFPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNLNKOGLFPF*))((::PBYTE)hIl2Cpp + PIIGDBJFNCP_PCPJBFMLKEP_OFFSET))(this, a1);
		}

		::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + PIIGDBJFNCP_GENSTATISTICS_OFFSET))(this, a1);
		}

		::PIIGDBJFNCP_CKDDNLNKPNM* ECLBKHIEKKM()
		{
			return ((::PIIGDBJFNCP_CKDDNLNKPNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIGDBJFNCP_ECLBKHIEKKM_OFFSET))(this);
		}

	};
