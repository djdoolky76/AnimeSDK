#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/InsertActionType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class EAHCLJPMCIG;
class EKFMIDBJDIA;
class EOKOEJKEFMN;
class OBJANKHLNGO;
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }

#define BJMHJJIELLH_BCEKDFJNCJG_OFFSET UNITYSDK_OFFSET(0xB7A7700)
#define BJMHJJIELLH_CNBDJFOFALP_OFFSET UNITYSDK_OFFSET(0xB7A8180)
#define BJMHJJIELLH_CNIFJPFGJJO_OFFSET UNITYSDK_OFFSET(0xB7A8A60)
#define BJMHJJIELLH_CTOR_OFFSET UNITYSDK_OFFSET(0xB7A6DC0)
#define BJMHJJIELLH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7A73D0)
#define BJMHJJIELLH_DJOCIIMOHDE_OFFSET UNITYSDK_OFFSET(0xB7A7D30)
#define BJMHJJIELLH_DOFNOIEDPFN_OFFSET UNITYSDK_OFFSET(0xB7A8950)
#define BJMHJJIELLH_EAGLHPCNHID_OFFSET UNITYSDK_OFFSET(0xB7A7F80)
#define BJMHJJIELLH_EIIFELKCCJN_OFFSET UNITYSDK_OFFSET(0xB7A78B0)
#define BJMHJJIELLH_FDPPGPDKDGF_OFFSET UNITYSDK_OFFSET(0xB7A7760)
#define BJMHJJIELLH_HBCEGPMECGG_OFFSET UNITYSDK_OFFSET(0xB7A7820)
#define BJMHJJIELLH_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xB7A7280)
#define BJMHJJIELLH_JIAIFACHLIK_OFFSET UNITYSDK_OFFSET(0xB7A8550)
#define BJMHJJIELLH_JNMDIHGCDBK_OFFSET UNITYSDK_OFFSET(0xB7A89E0)
#define BJMHJJIELLH_KFJFPLKMPOP_OFFSET UNITYSDK_OFFSET(0xB7A7150)
#define BJMHJJIELLH_KJNKCEILOAI_OFFSET UNITYSDK_OFFSET(0xB7A84F0)
#define BJMHJJIELLH_LJAIPIJLIIN_OFFSET UNITYSDK_OFFSET(0xB7A74B0)
#define BJMHJJIELLH_LNKMHILKCHJ_OFFSET UNITYSDK_OFFSET(0xB7A7E20)
#define BJMHJJIELLH_MFHNMBNIFFK_OFFSET UNITYSDK_OFFSET(0xB7A8AE0)
#define BJMHJJIELLH_MKGOBICKGDK_OFFSET UNITYSDK_OFFSET(0xB7A7BD0)
#define BJMHJJIELLH_MLKFPOLGJIJ_OFFSET UNITYSDK_OFFSET(0xB7A7420)
#define BJMHJJIELLH_NDLLELALNED_OFFSET UNITYSDK_OFFSET(0xB7A8040)
#define BJMHJJIELLH_NHPPCLBDOKG_OFFSET UNITYSDK_OFFSET(0xB7A7FF0)
#define BJMHJJIELLH_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB7A6F20)
#define BJMHJJIELLH_OENOGHJCOBM_OFFSET UNITYSDK_OFFSET(0xB7A88C0)
#define BJMHJJIELLH_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0xB7A7500)
#define BJMHJJIELLH_OKJJGNBFAOD_1_OFFSET UNITYSDK_OFFSET(0xB7A7640)
#define BJMHJJIELLH_OKJJGNBFAOD_OFFSET UNITYSDK_OFFSET(0xB7A75D0)
#define BJMHJJIELLH_OLNDMANFKGF_OFFSET UNITYSDK_OFFSET(0xB7A7A00)
#define BJMHJJIELLH_PODPCBFDNNI_OFFSET UNITYSDK_OFFSET(0xB7A86B0)

inline static constexpr unsigned int BJMHJJIELLH_TypeDefinitionIndex = 80830;

	class BJMHJJIELLH : public ::System::Object
	{
	public:
		::EOKOEJKEFMN* JJIMIBMNMOI; // 0x10
		::OBJANKHLNGO* GJALMBBNNOF; // 0x18
		::EAHCLJPMCIG* EHBMCGLLEBM; // 0x20
		::Il2CppArray<::System::String*>* EFFDPKIKJGI; // 0x28
		::System::Boolean IKNCOEPENGF; // 0x30
		::System::Boolean LCKENFJKKHJ; // 0x31
		::System::Byte _padding0[0x2];
		::System::Int32 CNFENANGJLA; // 0x34
		::System::Void _ctor(::EOKOEJKEFMN* a1, ::EAHCLJPMCIG* a2, ::OBJANKHLNGO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::EOKOEJKEFMN*, ::EAHCLJPMCIG*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + BJMHJJIELLH_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJMHJJIELLH_NPAFMEBNFOB_OFFSET))(this);
		}

		::RPG::GameCore::EventManager* KFJFPLKMPOP()
		{
			return ((::RPG::GameCore::EventManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJMHJJIELLH_KFJFPLKMPOP_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJMHJJIELLH_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJMHJJIELLH_DISPOSE_OFFSET))(this);
		}

		::System::Void MLKFPOLGJIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJMHJJIELLH_MLKFPOLGJIJ_OFFSET))(this);
		}

		::System::Int32 LJAIPIJLIIN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJMHJJIELLH_LJAIPIJLIIN_OFFSET))(this);
		}

		::System::Void OHMHJFANEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJMHJJIELLH_OHMHJFANEIF_OFFSET))(this);
		}

		::System::Void OKJJGNBFAOD(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BJMHJJIELLH_OKJJGNBFAOD_OFFSET))(this, a1, a2);
		}

		::System::Void OKJJGNBFAOD_1(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BJMHJJIELLH_OKJJGNBFAOD_1_OFFSET))(this, a1, a2);
		}

		::System::Void BCEKDFJNCJG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJMHJJIELLH_BCEKDFJNCJG_OFFSET))(this, a1);
		}

		::System::Void FDPPGPDKDGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJMHJJIELLH_FDPPGPDKDGF_OFFSET))(this, a1);
		}

		::System::Void HBCEGPMECGG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BJMHJJIELLH_HBCEGPMECGG_OFFSET))(this, a1);
		}

		::System::Void EIIFELKCCJN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJMHJJIELLH_EIIFELKCCJN_OFFSET))(this, a1);
		}

		::System::Void OLNDMANFKGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJMHJJIELLH_OLNDMANFKGF_OFFSET))(this, a1);
		}

		::System::UInt32 MKGOBICKGDK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BJMHJJIELLH_MKGOBICKGDK_OFFSET))(this, a1);
		}

		::System::Void DJOCIIMOHDE(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::Boolean a3, ::RPG::GameCore::GameEntity* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Boolean, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BJMHJJIELLH_DJOCIIMOHDE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EAGLHPCNHID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJMHJJIELLH_EAGLHPCNHID_OFFSET))(this);
		}

		::RPG::GameCore::LevelUIComponent* LNKMHILKCHJ()
		{
			return ((::RPG::GameCore::LevelUIComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJMHJJIELLH_LNKMHILKCHJ_OFFSET))(this);
		}

		::System::Void NHPPCLBDOKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJMHJJIELLH_NHPPCLBDOKG_OFFSET))(this);
		}

		::System::Void CNBDJFOFALP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BJMHJJIELLH_CNBDJFOFALP_OFFSET))(this, a1);
		}

		::System::Void NDLLELALNED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJMHJJIELLH_NDLLELALNED_OFFSET))(this);
		}

		::System::Void JIAIFACHLIK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BJMHJJIELLH_JIAIFACHLIK_OFFSET))(this, a1);
		}

		::System::Boolean KJNKCEILOAI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BJMHJJIELLH_KJNKCEILOAI_OFFSET))(this);
		}

		::System::ValueTuple PODPCBFDNNI()
		{
			return ((::System::ValueTuple(*)(::PVOID))((::PBYTE)hIl2Cpp + BJMHJJIELLH_PODPCBFDNNI_OFFSET))(this);
		}

		::System::Void OENOGHJCOBM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BJMHJJIELLH_OENOGHJCOBM_OFFSET))(this, a1);
		}

		::System::Void DOFNOIEDPFN(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + BJMHJJIELLH_DOFNOIEDPFN_OFFSET))(this, a1);
		}

		::System::Void JNMDIHGCDBK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BJMHJJIELLH_JNMDIHGCDBK_OFFSET))(this, a1);
		}

		::System::Void CNIFJPFGJJO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BJMHJJIELLH_CNIFJPFGJJO_OFFSET))(this, a1);
		}

		::System::Void MFHNMBNIFFK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BJMHJJIELLH_MFHNMBNIFFK_OFFSET))(this, a1);
		}

	};
