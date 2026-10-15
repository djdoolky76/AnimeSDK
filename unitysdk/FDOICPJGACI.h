#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/UITopEffectType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class CNMJHHJGIAF;
class EANJILGOKBE;
class FDOICPJGACI;
class GBJHJNNIFMB;
class IOIIFAENPNH;
namespace RPG::GameCore { class UIImageNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define FDOICPJGACI_ANALOEDDDHD_OFFSET UNITYSDK_OFFSET(0x156DF7C0)
#define FDOICPJGACI_BAKIIABNOFG_OFFSET UNITYSDK_OFFSET(0x156E06B0)
#define FDOICPJGACI_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0x156DF880)
#define FDOICPJGACI_BNEKJHADLNK_OFFSET UNITYSDK_OFFSET(0x156E0320)
#define FDOICPJGACI_CENGMKDJHOJ_OFFSET UNITYSDK_OFFSET(0x156DF9F0)
#define FDOICPJGACI_CFPMPMNIIIA_OFFSET UNITYSDK_OFFSET(0x156E0530)
#define FDOICPJGACI_CIBBJINBBIF_OFFSET UNITYSDK_OFFSET(0x156E0AC0)
#define FDOICPJGACI_CTOR_OFFSET UNITYSDK_OFFSET(0x156E0B90)
#define FDOICPJGACI_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x156DF210)
#define FDOICPJGACI_DPLBOIIMAEM_OFFSET UNITYSDK_OFFSET(0x156E0120)
#define FDOICPJGACI_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x156DF820)
#define FDOICPJGACI_FNFBPFAOELN_OFFSET UNITYSDK_OFFSET(0x156DFD70)
#define FDOICPJGACI_GDPMPNAOOAL_OFFSET UNITYSDK_OFFSET(0x156E0B30)
#define FDOICPJGACI_GET_SHOWCOUNT_OFFSET UNITYSDK_OFFSET(0x156E0B10)
#define FDOICPJGACI_GMFCFCGIOEB_OFFSET UNITYSDK_OFFSET(0x156E0850)
#define FDOICPJGACI_GNOAMOOGBAC_OFFSET UNITYSDK_OFFSET(0x156DF930)
#define FDOICPJGACI_HCKJDLAGMFA_OFFSET UNITYSDK_OFFSET(0x156E00D0)
#define FDOICPJGACI_ILDBHNDGCIJ_OFFSET UNITYSDK_OFFSET(0x156DFC10)
#define FDOICPJGACI_IOMAGEGAMPH_OFFSET UNITYSDK_OFFSET(0x156DFF60)
#define FDOICPJGACI_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x156E0A50)
#define FDOICPJGACI_KBOJFONKFKN_OFFSET UNITYSDK_OFFSET(0x156DFD30)
#define FDOICPJGACI_LCOBMKPDCFC_OFFSET UNITYSDK_OFFSET(0x156E0060)
#define FDOICPJGACI_LICJMIHBMJP_OFFSET UNITYSDK_OFFSET(0x156E0420)
#define FDOICPJGACI_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x156DFE80)
#define FDOICPJGACI_MNKGOCKIDFA_OFFSET UNITYSDK_OFFSET(0x156DFB00)
#define FDOICPJGACI_NPAOKGGMHNF_OFFSET UNITYSDK_OFFSET(0x156E03A0)
#define FDOICPJGACI_SET_SHOWCOUNT_OFFSET UNITYSDK_OFFSET(0x156E0B20)
#define FDOICPJGACI__ONBIND_OFFSET UNITYSDK_OFFSET(0x156DF280)
#define FDOICPJGACI__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x156DFCE0)
#define FDOICPJGACI__ONTICK_OFFSET UNITYSDK_OFFSET(0x156DFBB0)

inline static constexpr unsigned int FDOICPJGACI_TypeDefinitionIndex = 72018;

	class FDOICPJGACI : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animator* APPGGMLEPLN; // 0x60
		::Il2CppArray<::System::String*>* NFPCFFLCEOE; // 0x68
		::UnityEngine::Animation* PMOJILOJEPE; // 0x70
		::UnityEngine::UI::Text* GEPFFDDHPAI; // 0x78
		::IOIIFAENPNH* IIJGMKEKLIN; // 0x80
		::System::Action_1<::FDOICPJGACI*>* JINBDOJBKKO; // 0x88
		::System::Single LCKKNPIILDM; // 0x90
		::System::Int32 _ShowCount_k__BackingField; // 0x94
		::System::Boolean GFAMGLFOMGI; // 0x98
		::System::Boolean LBLNOBEECDD; // 0x99
		::System::Byte _padding0[0x2];
		::System::Single AOFOCKCLJMD; // 0x9C
		// static const ::System::Object PFOIMJHJJKE; // 0x0
		// static const ::System::Object MJDMGHCGIAC; // 0x0
		// static const ::System::Object LDIDGJLMLDB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDOICPJGACI_CTOR_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + FDOICPJGACI_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDOICPJGACI__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDOICPJGACI_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FDOICPJGACI__ONTICK_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDOICPJGACI__ONDISPOSE_OFFSET))(this);
		}

		::UnityEngine::Transform* KBOJFONKFKN()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDOICPJGACI_KBOJFONKFKN_OFFSET))(this);
		}

		::System::Void FNFBPFAOELN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FDOICPJGACI_FNFBPFAOELN_OFFSET))(this, a1);
		}

		::System::Void LJBCDJNNBJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDOICPJGACI_LJBCDJNNBJH_OFFSET))(this);
		}

		::System::Boolean IOMAGEGAMPH(::RPG::GameCore::UITopEffectType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::UITopEffectType))((::PBYTE)hIl2Cpp + FDOICPJGACI_IOMAGEGAMPH_OFFSET))(this, a1);
		}

		::System::Void HCKJDLAGMFA(::System::Action_1<::FDOICPJGACI*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::FDOICPJGACI*>*))((::PBYTE)hIl2Cpp + FDOICPJGACI_HCKJDLAGMFA_OFFSET))(this, a1);
		}

		::System::Void DPLBOIIMAEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDOICPJGACI_DPLBOIIMAEM_OFFSET))(this);
		}

		::System::Void NPAOKGGMHNF(::GBJHJNNIFMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBJHJNNIFMB*))((::PBYTE)hIl2Cpp + FDOICPJGACI_NPAOKGGMHNF_OFFSET))(this, a1);
		}

		::System::Void CFPMPMNIIIA(::System::Collections::Generic::List_1<::RPG::GameCore::UIImageNode*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::UIImageNode*>*))((::PBYTE)hIl2Cpp + FDOICPJGACI_CFPMPMNIIIA_OFFSET))(this, a1);
		}

		::System::Void LICJMIHBMJP(::System::Collections::Generic::List_1<::CNMJHHJGIAF*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::CNMJHHJGIAF*>*))((::PBYTE)hIl2Cpp + FDOICPJGACI_LICJMIHBMJP_OFFSET))(this, a1);
		}

		::System::Void BAKIIABNOFG(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FDOICPJGACI_BAKIIABNOFG_OFFSET))(this, a1);
		}

		::System::Void GMFCFCGIOEB(::UnityEngine::Animator* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*))((::PBYTE)hIl2Cpp + FDOICPJGACI_GMFCFCGIOEB_OFFSET))(this, a1, a2);
		}

		::System::Void BIOBBNGDGDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDOICPJGACI_BIOBBNGDGDF_OFFSET))(this);
		}

		::System::Void BNEKJHADLNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDOICPJGACI_BNEKJHADLNK_OFFSET))(this);
		}

		::System::Void LCOBMKPDCFC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FDOICPJGACI_LCOBMKPDCFC_OFFSET))(this, a1);
		}

		::System::Void ILDBHNDGCIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDOICPJGACI_ILDBHNDGCIJ_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDOICPJGACI_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void GNOAMOOGBAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDOICPJGACI_GNOAMOOGBAC_OFFSET))(this);
		}

		::System::Void CENGMKDJHOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDOICPJGACI_CENGMKDJHOJ_OFFSET))(this);
		}

		::System::Void MNKGOCKIDFA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDOICPJGACI_MNKGOCKIDFA_OFFSET))(this);
		}

		::EANJILGOKBE* ANALOEDDDHD()
		{
			return ((::EANJILGOKBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDOICPJGACI_ANALOEDDDHD_OFFSET))(this);
		}

		::System::Boolean CIBBJINBBIF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FDOICPJGACI_CIBBJINBBIF_OFFSET))(this);
		}

		::System::Int32 get_ShowCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDOICPJGACI_GET_SHOWCOUNT_OFFSET))(this);
		}

		::System::Void set_ShowCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FDOICPJGACI_SET_SHOWCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean GDPMPNAOOAL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FDOICPJGACI_GDPMPNAOOAL_OFFSET))(this);
		}

	};
