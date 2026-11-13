#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinPreCalcPhase.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"
class BMHJDMDLGOA;
class DIAHGNIILIK;
class KFELGAIGHAP;
class MKKGJDHBOMH;
class OOCCBMLAELL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OKLEONFEGAC_AADLMCPCMKH_OFFSET UNITYSDK_OFFSET(0x1788C060)
#define OKLEONFEGAC_AEMNIPBMGDG_OFFSET UNITYSDK_OFFSET(0x17889F00)
#define OKLEONFEGAC_BBMMINIIILK_OFFSET UNITYSDK_OFFSET(0x1788BDD0)
#define OKLEONFEGAC_BECLIOOMKIC_OFFSET UNITYSDK_OFFSET(0x1788BCD0)
#define OKLEONFEGAC_BKMONENKPKJ_OFFSET UNITYSDK_OFFSET(0x1788C000)
#define OKLEONFEGAC_BMEDNBHJKLE_OFFSET UNITYSDK_OFFSET(0x1788BD90)
#define OKLEONFEGAC_CTOR_OFFSET UNITYSDK_OFFSET(0x17889570)
#define OKLEONFEGAC_DDGBNGMFAPE_OFFSET UNITYSDK_OFFSET(0x1788B8F0)
#define OKLEONFEGAC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17889950)
#define OKLEONFEGAC_DMOAKCIMNKF_OFFSET UNITYSDK_OFFSET(0x1788C160)
#define OKLEONFEGAC_GDFOKAAHBLG_OFFSET UNITYSDK_OFFSET(0x1788B130)
#define OKLEONFEGAC_GET_PRECALCCONTEXT_OFFSET UNITYSDK_OFFSET(0x17889940)
#define OKLEONFEGAC_GODEDGBIGPJ_OFFSET UNITYSDK_OFFSET(0x1788C0E0)
#define OKLEONFEGAC_JDJLKLOCKHA_OFFSET UNITYSDK_OFFSET(0x1788B510)
#define OKLEONFEGAC_LDPCEGPMIBP_OFFSET UNITYSDK_OFFSET(0x1788C700)
#define OKLEONFEGAC_LMBIHIGNEFJ_OFFSET UNITYSDK_OFFSET(0x1788BA50)
#define OKLEONFEGAC_MMHKJIDFHHE_OFFSET UNITYSDK_OFFSET(0x1788C430)
#define OKLEONFEGAC_NCNPOOHGBNO_OFFSET UNITYSDK_OFFSET(0x1788C7D0)
#define OKLEONFEGAC_NJNHFKILPAB_OFFSET UNITYSDK_OFFSET(0x1788BF40)
#define OKLEONFEGAC_NMFHKKFCKBD_OFFSET UNITYSDK_OFFSET(0x1788A240)
#define OKLEONFEGAC_PNJODACLLPH_OFFSET UNITYSDK_OFFSET(0x1788C820)

inline static constexpr unsigned int OKLEONFEGAC_TypeDefinitionIndex = 57176;

	class OKLEONFEGAC : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MKKGJDHBOMH*>* GMLFCKNGLHF; // 0x10
		::DIAHGNIILIK* _PreCalcContext_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::KFELGAIGHAP*>* BONMFOCKDPK; // 0x20
		::BMHJDMDLGOA* CDDBIPLDAIE; // 0x28
		::OOCCBMLAELL* FEANHCMJMOE; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::KFELGAIGHAP*>* LKJPJLMEHFM; // 0x38
		::RPG::GameCore::TaskContext* OBKLPOKMIEA; // 0x40
		::System::UInt32 LFCODNPFEJC; // 0x48
		::System::Boolean GGBNIPJIGPG; // 0x4C
		::System::Byte _padding0[0x3];
		::RPG::GameCore::TurnState MPOFPAHJCGH; // 0x50
		::System::Void _ctor(::OOCCBMLAELL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOCCBMLAELL*))((::PBYTE)hIl2Cpp + OKLEONFEGAC_CTOR_OFFSET))(this, a1);
		}

		::DIAHGNIILIK* get_PreCalcContext()
		{
			return ((::DIAHGNIILIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLEONFEGAC_GET_PRECALCCONTEXT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLEONFEGAC_DISPOSE_OFFSET))(this);
		}

		::System::Void AEMNIPBMGDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLEONFEGAC_AEMNIPBMGDG_OFFSET))(this);
		}

		::System::Void NMFHKKFCKBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLEONFEGAC_NMFHKKFCKBD_OFFSET))(this);
		}

		::System::Void DDGBNGMFAPE(::RPG::GameCore::FateRinPreCalcPhase a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinPreCalcPhase, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OKLEONFEGAC_DDGBNGMFAPE_OFFSET))(this, a1, a2);
		}

		::System::Void LMBIHIGNEFJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLEONFEGAC_LMBIHIGNEFJ_OFFSET))(this);
		}

		::System::Void BECLIOOMKIC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OKLEONFEGAC_BECLIOOMKIC_OFFSET))(this, a1);
		}

		::System::Void BBMMINIIILK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OKLEONFEGAC_BBMMINIIILK_OFFSET))(this, a1);
		}

		::System::Void BKMONENKPKJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OKLEONFEGAC_BKMONENKPKJ_OFFSET))(this, a1);
		}

		::System::Void AADLMCPCMKH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OKLEONFEGAC_AADLMCPCMKH_OFFSET))(this, a1);
		}

		::System::Void GODEDGBIGPJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OKLEONFEGAC_GODEDGBIGPJ_OFFSET))(this, a1);
		}

		::System::Void GDFOKAAHBLG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OKLEONFEGAC_GDFOKAAHBLG_OFFSET))(this, a1);
		}

		::System::Void JDJLKLOCKHA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OKLEONFEGAC_JDJLKLOCKHA_OFFSET))(this, a1);
		}

		::KFELGAIGHAP* DMOAKCIMNKF(::System::String* a1)
		{
			return ((::KFELGAIGHAP*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OKLEONFEGAC_DMOAKCIMNKF_OFFSET))(this, a1);
		}

		::KFELGAIGHAP* MMHKJIDFHHE(::System::String* a1)
		{
			return ((::KFELGAIGHAP*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OKLEONFEGAC_MMHKJIDFHHE_OFFSET))(this, a1);
		}

		::System::Void LDPCEGPMIBP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLEONFEGAC_LDPCEGPMIBP_OFFSET))(this);
		}

		::System::Void BMEDNBHJKLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLEONFEGAC_BMEDNBHJKLE_OFFSET))(this);
		}

		::MKKGJDHBOMH* NJNHFKILPAB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::MKKGJDHBOMH*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OKLEONFEGAC_NJNHFKILPAB_OFFSET))(this, a1);
		}

		::MKKGJDHBOMH* NCNPOOHGBNO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::MKKGJDHBOMH*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OKLEONFEGAC_NCNPOOHGBNO_OFFSET))(this, a1);
		}

		::System::Boolean PNJODACLLPH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLEONFEGAC_PNJODACLLPH_OFFSET))(this);
		}

	};
