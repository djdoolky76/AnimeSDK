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

#define OKLEONFEGAC_AADLMCPCMKH_OFFSET UNITYSDK_OFFSET(0xC7E8350)
#define OKLEONFEGAC_AEMNIPBMGDG_OFFSET UNITYSDK_OFFSET(0xC7E6200)
#define OKLEONFEGAC_BBMMINIIILK_OFFSET UNITYSDK_OFFSET(0xC7E80C0)
#define OKLEONFEGAC_BECLIOOMKIC_OFFSET UNITYSDK_OFFSET(0xC7E7FC0)
#define OKLEONFEGAC_BKMONENKPKJ_OFFSET UNITYSDK_OFFSET(0xC7E82F0)
#define OKLEONFEGAC_BMEDNBHJKLE_OFFSET UNITYSDK_OFFSET(0xC7E8080)
#define OKLEONFEGAC_CTOR_OFFSET UNITYSDK_OFFSET(0xC7E5860)
#define OKLEONFEGAC_DDGBNGMFAPE_OFFSET UNITYSDK_OFFSET(0xC7E7BE0)
#define OKLEONFEGAC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC7E5C40)
#define OKLEONFEGAC_DMOAKCIMNKF_OFFSET UNITYSDK_OFFSET(0xC7E8450)
#define OKLEONFEGAC_GDFOKAAHBLG_OFFSET UNITYSDK_OFFSET(0xC7E7420)
#define OKLEONFEGAC_GET_PRECALCCONTEXT_OFFSET UNITYSDK_OFFSET(0xC7E5C30)
#define OKLEONFEGAC_GODEDGBIGPJ_OFFSET UNITYSDK_OFFSET(0xC7E83D0)
#define OKLEONFEGAC_JDJLKLOCKHA_OFFSET UNITYSDK_OFFSET(0xC7E7800)
#define OKLEONFEGAC_LDPCEGPMIBP_OFFSET UNITYSDK_OFFSET(0xC7E89F0)
#define OKLEONFEGAC_LMBIHIGNEFJ_OFFSET UNITYSDK_OFFSET(0xC7E7D40)
#define OKLEONFEGAC_MMHKJIDFHHE_OFFSET UNITYSDK_OFFSET(0xC7E8720)
#define OKLEONFEGAC_NCNPOOHGBNO_OFFSET UNITYSDK_OFFSET(0xC7E8AC0)
#define OKLEONFEGAC_NJNHFKILPAB_OFFSET UNITYSDK_OFFSET(0xC7E8230)
#define OKLEONFEGAC_NMFHKKFCKBD_OFFSET UNITYSDK_OFFSET(0xC7E6530)
#define OKLEONFEGAC_PNJODACLLPH_OFFSET UNITYSDK_OFFSET(0xC7E8B10)

inline static constexpr unsigned int OKLEONFEGAC_TypeDefinitionIndex = 57176;

	class OKLEONFEGAC : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MKKGJDHBOMH*>* GMLFCKNGLHF; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::KFELGAIGHAP*>* BONMFOCKDPK; // 0x18
		::BMHJDMDLGOA* CDDBIPLDAIE; // 0x20
		::OOCCBMLAELL* FEANHCMJMOE; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::KFELGAIGHAP*>* LKJPJLMEHFM; // 0x30
		::DIAHGNIILIK* _PreCalcContext_k__BackingField; // 0x38
		::RPG::GameCore::TaskContext* OBKLPOKMIEA; // 0x40
		::System::Boolean GGBNIPJIGPG; // 0x48
		::System::Byte _padding0[0x3];
		::RPG::GameCore::TurnState MPOFPAHJCGH; // 0x4C
		::System::UInt32 LFCODNPFEJC; // 0x50
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
