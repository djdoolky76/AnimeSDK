#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/IGKFNIEJGLM.h"
class DKFJCHNJEPN;
class EANKAFJCEEH;
class EKFMIDBJDIA;
class IGIEKBDFBMN;
class KNOCJADNCOA;
class NMNIJNNFPGP;
class PFELEAAJODJ;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define NNOFIHMOPLG_AJFDLJJCFGA_OFFSET UNITYSDK_OFFSET(0xBCD8D10)
#define NNOFIHMOPLG_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBCD9FA0)
#define NNOFIHMOPLG_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBCDA090)
#define NNOFIHMOPLG_CBHEACHJKPB_OFFSET UNITYSDK_OFFSET(0xBCD9AF0)
#define NNOFIHMOPLG_CBHGEGECCDH_OFFSET UNITYSDK_OFFSET(0xBCD8C50)
#define NNOFIHMOPLG_CTOR_OFFSET UNITYSDK_OFFSET(0xBCDA160)
#define NNOFIHMOPLG_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xBCD7840)
#define NNOFIHMOPLG_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xBCD80B0)
#define NNOFIHMOPLG_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xBCD8450)
#define NNOFIHMOPLG_EOBIEMJGMHG_OFFSET UNITYSDK_OFFSET(0xBCD9C50)
#define NNOFIHMOPLG_GAKGDHHFLHG_OFFSET UNITYSDK_OFFSET(0xBCD9860)
#define NNOFIHMOPLG_HBBLJKMBFAI_OFFSET UNITYSDK_OFFSET(0xBCD90B0)
#define NNOFIHMOPLG_HOFPLCNAACK_OFFSET UNITYSDK_OFFSET(0xBCD9120)
#define NNOFIHMOPLG_IKANLMKJEIO_OFFSET UNITYSDK_OFFSET(0xBCD79A0)
#define NNOFIHMOPLG_JDJGHNLJFPC_OFFSET UNITYSDK_OFFSET(0xBCD9F10)
#define NNOFIHMOPLG_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xBCD8790)
#define NNOFIHMOPLG_LFAFIOAFJDJ_OFFSET UNITYSDK_OFFSET(0xBCD9480)
#define NNOFIHMOPLG_NFBKJLPGIDN_OFFSET UNITYSDK_OFFSET(0xBCD94E0)
#define NNOFIHMOPLG_NFFCFBOBIDA_OFFSET UNITYSDK_OFFSET(0xBCD8910)
#define NNOFIHMOPLG_NKIPEFLMMJN_OFFSET UNITYSDK_OFFSET(0xBCD9420)
#define NNOFIHMOPLG_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xBCD85F0)
#define NNOFIHMOPLG_PJNHKEHMABM_OFFSET UNITYSDK_OFFSET(0xBCD9DB0)
#define NNOFIHMOPLG_PNJKFOILFOB_OFFSET UNITYSDK_OFFSET(0xBCD8DC0)
#define NNOFIHMOPLG__ONBIND_OFFSET UNITYSDK_OFFSET(0xBCD7950)
#define NNOFIHMOPLG__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xBCD8280)

inline static constexpr unsigned int NNOFIHMOPLG_TypeDefinitionIndex = 71986;

	class NNOFIHMOPLG : public ::FMPCODLIOLG
	{
	public:
		::PFELEAAJODJ* CAICEMLCJMI; // 0x60
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
		::IGIEKBDFBMN* CHAPCPPJAAK; // 0x70
		::System::Collections::Generic::Dictionary_2<::RPG::Client::UISkillIndex, ::DKFJCHNJEPN*>* OMBMEAGNBNL; // 0x78
		::IGIEKBDFBMN* KODGCNACHFJ; // 0x80
		::EANKAFJCEEH* MODMKBNMDKC; // 0x88
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x90
		::Il2CppArray<::RPG::Client::UISkillIndex>* BLNNDOGCIMK; // 0x98
		::System::Boolean EINNACFPAEN; // 0xA0
		::System::Byte _padding0[0x3];
		::System::Int32 HKKMKABHLCL; // 0xA4
		::System::Int32 MFMMJALIIAN; // 0xA8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOFIHMOPLG_CTOR_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + NNOFIHMOPLG_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOFIHMOPLG__ONBIND_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOFIHMOPLG_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOFIHMOPLG__ONDISPOSE_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOFIHMOPLG_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::KNOCJADNCOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNOCJADNCOA*))((::PBYTE)hIl2Cpp + NNOFIHMOPLG_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void NFFCFBOBIDA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NNOFIHMOPLG_NFFCFBOBIDA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::NMNIJNNFPGP*>* CBHGEGECCDH(::RPG::Client::UISkillIndex a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::NMNIJNNFPGP*>*(*)(::PVOID, ::RPG::Client::UISkillIndex, ::System::Boolean))((::PBYTE)hIl2Cpp + NNOFIHMOPLG_CBHGEGECCDH_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::NMNIJNNFPGP*>* AJFDLJJCFGA()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::NMNIJNNFPGP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOFIHMOPLG_AJFDLJJCFGA_OFFSET))(this);
		}

		::RPG::Client::UISkillIndex PNJKFOILFOB(::RPG::Client::UISkillIndex a1)
		{
			return ((::RPG::Client::UISkillIndex(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + NNOFIHMOPLG_PNJKFOILFOB_OFFSET))(this, a1);
		}

		::System::Void IKANLMKJEIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOFIHMOPLG_IKANLMKJEIO_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ(::KNOCJADNCOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNOCJADNCOA*))((::PBYTE)hIl2Cpp + NNOFIHMOPLG_KANMCJHEFJJ_OFFSET))(this, a1);
		}

		::System::Void HBBLJKMBFAI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NNOFIHMOPLG_HBBLJKMBFAI_OFFSET))(this, a1);
		}

		::System::Void HOFPLCNAACK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NNOFIHMOPLG_HOFPLCNAACK_OFFSET))(this, a1);
		}

		::System::Void CBHEACHJKPB(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NNOFIHMOPLG_CBHEACHJKPB_OFFSET))(this, a1);
		}

		::System::Void GAKGDHHFLHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOFIHMOPLG_GAKGDHHFLHG_OFFSET))(this);
		}

		::System::Void NKIPEFLMMJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOFIHMOPLG_NKIPEFLMMJN_OFFSET))(this);
		}

		::System::Void LFAFIOAFJDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOFIHMOPLG_LFAFIOAFJDJ_OFFSET))(this);
		}

		::System::Void EOBIEMJGMHG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NNOFIHMOPLG_EOBIEMJGMHG_OFFSET))(this, a1);
		}

		::System::Void PJNHKEHMABM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NNOFIHMOPLG_PJNHKEHMABM_OFFSET))(this, a1);
		}

		::System::Void NFBKJLPGIDN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NNOFIHMOPLG_NFBKJLPGIDN_OFFSET))(this, a1);
		}

		::System::Void JDJGHNLJFPC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NNOFIHMOPLG_JDJGHNLJFPC_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOFIHMOPLG_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOFIHMOPLG_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
