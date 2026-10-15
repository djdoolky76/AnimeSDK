#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class EKFMIDBJDIA;
class FDNCLPGAKOA;
class JIAHLILDDPL;
class MNBNFBAMKKI;
class OBAFGJPCDOL;
class OIKDEOMMOAM;
namespace RPG::GameCore { class EntityModelDispose; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class Transform; }

#define AGFMDNODMKJ_AOKKGPIFHJK_OFFSET UNITYSDK_OFFSET(0xCF27090)
#define AGFMDNODMKJ_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xCF27B90)
#define AGFMDNODMKJ_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xCF27ED0)
#define AGFMDNODMKJ_CABLOHGOBLK_OFFSET UNITYSDK_OFFSET(0xCF27990)
#define AGFMDNODMKJ_CBCMHHKHPIN_OFFSET UNITYSDK_OFFSET(0xCF26600)
#define AGFMDNODMKJ_CBNMGHGEPFP_OFFSET UNITYSDK_OFFSET(0xCF26CB0)
#define AGFMDNODMKJ_CKLKBJDCIFF_OFFSET UNITYSDK_OFFSET(0xCF245A0)
#define AGFMDNODMKJ_CPPDIDNKGKF_OFFSET UNITYSDK_OFFSET(0xCF250B0)
#define AGFMDNODMKJ_CTOR_OFFSET UNITYSDK_OFFSET(0xCF281D0)
#define AGFMDNODMKJ_DOFNOIEDPFN_OFFSET UNITYSDK_OFFSET(0xCF26130)
#define AGFMDNODMKJ_EAHHPJMJPHD_OFFSET UNITYSDK_OFFSET(0xCF26B50)
#define AGFMDNODMKJ_ECCPAINNCJA_OFFSET UNITYSDK_OFFSET(0xCF26D30)
#define AGFMDNODMKJ_EDEIFPHJLJI_OFFSET UNITYSDK_OFFSET(0xCF27560)
#define AGFMDNODMKJ_EDJCMCJKGAL_OFFSET UNITYSDK_OFFSET(0xCF27210)
#define AGFMDNODMKJ_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xCF25050)
#define AGFMDNODMKJ_EOLNAACINHM_OFFSET UNITYSDK_OFFSET(0xCF24DF0)
#define AGFMDNODMKJ_FHHFPMEALIF_OFFSET UNITYSDK_OFFSET(0xCF27020)
#define AGFMDNODMKJ_GCKNJMINPKN_OFFSET UNITYSDK_OFFSET(0xCF26560)
#define AGFMDNODMKJ_GFAAJKMLNLL_OFFSET UNITYSDK_OFFSET(0xCF26E60)
#define AGFMDNODMKJ_GJABIDBFFHG_OFFSET UNITYSDK_OFFSET(0xCF24D00)
#define AGFMDNODMKJ_IBAIJOGCJPB_OFFSET UNITYSDK_OFFSET(0xCF27AA0)
#define AGFMDNODMKJ_IEBDNJDHIHB_OFFSET UNITYSDK_OFFSET(0xCF24B60)
#define AGFMDNODMKJ_IFCJIBOHKEG_OFFSET UNITYSDK_OFFSET(0xCF26870)
#define AGFMDNODMKJ_JLEEIJLGLMJ_OFFSET UNITYSDK_OFFSET(0xCF24380)
#define AGFMDNODMKJ_KCOLLCMCFCK_OFFSET UNITYSDK_OFFSET(0xCF26F70)
#define AGFMDNODMKJ_LJDOJCKMMDD_OFFSET UNITYSDK_OFFSET(0xCF276E0)
#define AGFMDNODMKJ_MCGBNBJLCHH_OFFSET UNITYSDK_OFFSET(0xCF25E40)
#define AGFMDNODMKJ_MDNEACBIHEP_OFFSET UNITYSDK_OFFSET(0xCF261B0)
#define AGFMDNODMKJ_MIKFPCHCFCD_OFFSET UNITYSDK_OFFSET(0xCF25A60)
#define AGFMDNODMKJ_MMNKJPDCHAC_OFFSET UNITYSDK_OFFSET(0xCF264F0)
#define AGFMDNODMKJ_MPDOKFDEBOD_OFFSET UNITYSDK_OFFSET(0xCF262D0)
#define AGFMDNODMKJ_NBAMLOKMINK_OFFSET UNITYSDK_OFFSET(0xCF26270)
#define AGFMDNODMKJ_NIDIJNIHJPP_OFFSET UNITYSDK_OFFSET(0xCF26930)
#define AGFMDNODMKJ_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xCF23B80)
#define AGFMDNODMKJ_NLNCIGBIAEA_OFFSET UNITYSDK_OFFSET(0xCF26BF0)
#define AGFMDNODMKJ_NMMMAIDANNI_OFFSET UNITYSDK_OFFSET(0xCF25140)
#define AGFMDNODMKJ_OGBPKKJPBGN_OFFSET UNITYSDK_OFFSET(0xCF278C0)
#define AGFMDNODMKJ_OHBMEPNAEIJ_OFFSET UNITYSDK_OFFSET(0xCF26C50)
#define AGFMDNODMKJ_OOJBNDPOCLN_OFFSET UNITYSDK_OFFSET(0xCF24050)
#define AGFMDNODMKJ_PALLOJFPLBA_OFFSET UNITYSDK_OFFSET(0xCF25BD0)
#define AGFMDNODMKJ_PLHNNFGPFDK_OFFSET UNITYSDK_OFFSET(0xCF25840)
#define AGFMDNODMKJ_PNFFCJPEHGF_OFFSET UNITYSDK_OFFSET(0xCF24820)
#define AGFMDNODMKJ_PPBDMLCBMKK_OFFSET UNITYSDK_OFFSET(0xCF277F0)
#define AGFMDNODMKJ__ONBIND_OFFSET UNITYSDK_OFFSET(0xCF23B00)
#define AGFMDNODMKJ__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xCF24270)
#define AGFMDNODMKJ__ONTICK_OFFSET UNITYSDK_OFFSET(0xCF257E0)

inline static constexpr unsigned int AGFMDNODMKJ_TypeDefinitionIndex = 71739;

	class AGFMDNODMKJ : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::List_1<::JIAHLILDDPL*>* DKOPKAEFPBN; // 0x60
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TeamType, ::System::Collections::Generic::List_1<::JIAHLILDDPL*>*>* EKELCLBIMAK; // 0x68
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TeamType, ::System::Collections::Generic::Stack_1<::JIAHLILDDPL*>*>* PIBNONMPLCP; // 0x70
		::System::Collections::Generic::List_1<::JIAHLILDDPL*>* IDNGHFBGLHC; // 0x78
		::RPG::GameCore::GameEntity* NKIKPPOODKK; // 0x80
		::OBAFGJPCDOL* DFBDJBGELKH; // 0x88
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TeamType, ::System::Boolean>* PEPPDACMOEG; // 0x90
		::System::Collections::Generic::Stack_1<::JIAHLILDDPL*>* KEBDMMHEMLL; // 0x98
		::UnityEngine::Transform* CEDHIMICDCH; // 0xA0
		::System::Collections::Generic::Stack_1<::JIAHLILDDPL*>* FKIMKNJBBDN; // 0xA8
		::System::Boolean IDBHEIBEGBA; // 0xB0
		::System::Boolean HLCHJHKHNNH; // 0xB1
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFMDNODMKJ__ONBIND_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFMDNODMKJ__ONDISPOSE_OFFSET))(this);
		}

		::System::Void CKLKBJDCIFF(::OIKDEOMMOAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIKDEOMMOAM*))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_CKLKBJDCIFF_OFFSET))(this, a1);
		}

		::System::Void OOJBNDPOCLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_OOJBNDPOCLN_OFFSET))(this);
		}

		::System::Void JLEEIJLGLMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_JLEEIJLGLMJ_OFFSET))(this);
		}

		::RPG::GameCore::EventManager* IEBDNJDHIHB()
		{
			return ((::RPG::GameCore::EventManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_IEBDNJDHIHB_OFFSET))(this);
		}

		::System::Void GJABIDBFFHG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_GJABIDBFFHG_OFFSET))(this, a1);
		}

		::System::Void EOLNAACINHM(::RPG::GameCore::TeamType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType, ::System::Boolean))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_EOLNAACINHM_OFFSET))(this, a1, a2);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void CPPDIDNKGKF(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_CPPDIDNKGKF_OFFSET))(this, a1);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AGFMDNODMKJ__ONTICK_OFFSET))(this, a1);
		}

		::System::Void PLHNNFGPFDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_PLHNNFGPFDK_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* MIKFPCHCFCD()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_MIKFPCHCFCD_OFFSET))(this);
		}

		::System::Void PALLOJFPLBA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_PALLOJFPLBA_OFFSET))(this, a1);
		}

		::System::Void DOFNOIEDPFN(::RPG::GameCore::LevelGameModeStateChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_DOFNOIEDPFN_OFFSET))(this, a1);
		}

		::System::Void MDNEACBIHEP(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_MDNEACBIHEP_OFFSET))(this, a1);
		}

		::System::Void NBAMLOKMINK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_NBAMLOKMINK_OFFSET))(this, a1);
		}

		::System::Void MPDOKFDEBOD(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_MPDOKFDEBOD_OFFSET))(this, a1);
		}

		::System::Void GCKNJMINPKN(::MNBNFBAMKKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNBNFBAMKKI*))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_GCKNJMINPKN_OFFSET))(this, a1);
		}

		::System::Void CBCMHHKHPIN(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_CBCMHHKHPIN_OFFSET))(this, a1);
		}

		::System::Boolean MMNKJPDCHAC(::MNBNFBAMKKI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MNBNFBAMKKI*))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_MMNKJPDCHAC_OFFSET))(this, a1);
		}

		::System::Void IFCJIBOHKEG(::MNBNFBAMKKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNBNFBAMKKI*))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_IFCJIBOHKEG_OFFSET))(this, a1);
		}

		::System::Void NIDIJNIHJPP(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_NIDIJNIHJPP_OFFSET))(this, a1);
		}

		::System::Void EAHHPJMJPHD(::MNBNFBAMKKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNBNFBAMKKI*))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_EAHHPJMJPHD_OFFSET))(this, a1);
		}

		::System::Void NLNCIGBIAEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_NLNCIGBIAEA_OFFSET))(this);
		}

		::System::Void OHBMEPNAEIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_OHBMEPNAEIJ_OFFSET))(this);
		}

		::System::Void CBNMGHGEPFP(::RPG::GameCore::EntityModelDispose* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityModelDispose*))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_CBNMGHGEPFP_OFFSET))(this, a1);
		}

		::System::Void ECCPAINNCJA(::FDNCLPGAKOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDNCLPGAKOA*))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_ECCPAINNCJA_OFFSET))(this, a1);
		}

		::System::Void NMMMAIDANNI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_NMMMAIDANNI_OFFSET))(this, a1);
		}

		::System::Boolean GFAAJKMLNLL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_GFAAJKMLNLL_OFFSET))(this, a1);
		}

		::JIAHLILDDPL* PNFFCJPEHGF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::JIAHLILDDPL*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_PNFFCJPEHGF_OFFSET))(this, a1);
		}

		::JIAHLILDDPL* EDJCMCJKGAL(::System::UInt32 a1)
		{
			return ((::JIAHLILDDPL*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_EDJCMCJKGAL_OFFSET))(this, a1);
		}

		::JIAHLILDDPL* KCOLLCMCFCK(::RPG::GameCore::TeamType a1)
		{
			return ((::JIAHLILDDPL*(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_KCOLLCMCFCK_OFFSET))(this, a1);
		}

		::System::Void MCGBNBJLCHH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_MCGBNBJLCHH_OFFSET))(this, a1);
		}

		::System::Void EDEIFPHJLJI(::JIAHLILDDPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JIAHLILDDPL*))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_EDEIFPHJLJI_OFFSET))(this, a1);
		}

		::System::Void FHHFPMEALIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_FHHFPMEALIF_OFFSET))(this);
		}

		::JIAHLILDDPL* AOKKGPIFHJK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::JIAHLILDDPL*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_AOKKGPIFHJK_OFFSET))(this, a1);
		}

		::System::Void LJDOJCKMMDD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_LJDOJCKMMDD_OFFSET))(this, a1);
		}

		::System::Void PPBDMLCBMKK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_PPBDMLCBMKK_OFFSET))(this, a1);
		}

		::System::Void OGBPKKJPBGN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_OGBPKKJPBGN_OFFSET))(this, a1);
		}

		::System::Void CABLOHGOBLK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_CABLOHGOBLK_OFFSET))(this, a1);
		}

		::System::Void IBAIJOGCJPB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_IBAIJOGCJPB_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFMDNODMKJ_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
