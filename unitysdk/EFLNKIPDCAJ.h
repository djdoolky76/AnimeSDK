#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
#include "unitysdk/RPG/GameCore/RtMoveStopReason.h"
class CEOAOADFGLI;
class IFMBINHDMOI;
class KAOOFGPIBGF;
class LNHNKDOIOAG;
class MJNGFEGNCOA;
class MOMODPMFIKE;
class OIGMKDJOFJC;
namespace RPG::GameCore { class RtCharacterMotionParam; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EFLNKIPDCAJ_CFKCFDIFEML_OFFSET UNITYSDK_OFFSET(0x13A5AB00)
#define EFLNKIPDCAJ_CONHCMOGADH_OFFSET UNITYSDK_OFFSET(0x13A5AAF0)
#define EFLNKIPDCAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x13A5AB10)
#define EFLNKIPDCAJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A58760)
#define EFLNKIPDCAJ_EBLMEKGAKAD_OFFSET UNITYSDK_OFFSET(0x13A58800)
#define EFLNKIPDCAJ_FLCPHONNELH_OFFSET UNITYSDK_OFFSET(0x13A5AAD0)
#define EFLNKIPDCAJ_GET_MOTIONPARAM_OFFSET UNITYSDK_OFFSET(0x13A5A9F0)
#define EFLNKIPDCAJ_GKAJOHLHPLD_OFFSET UNITYSDK_OFFSET(0x13A5AA10)
#define EFLNKIPDCAJ_HNOCOHMGFMC_OFFSET UNITYSDK_OFFSET(0x13A5AA60)
#define EFLNKIPDCAJ_JKKKNKOIAGG_OFFSET UNITYSDK_OFFSET(0x13A592C0)
#define EFLNKIPDCAJ_KCKGCEBBCIE_OFFSET UNITYSDK_OFFSET(0x13A59430)
#define EFLNKIPDCAJ_KGLIDGCDFBP_OFFSET UNITYSDK_OFFSET(0x13A58C60)
#define EFLNKIPDCAJ_LCJHBLOMABA_OFFSET UNITYSDK_OFFSET(0x13A58B40)
#define EFLNKIPDCAJ_LPFBANCOMPE_OFFSET UNITYSDK_OFFSET(0x13A58CF0)
#define EFLNKIPDCAJ_PGDMPPKFDMH_OFFSET UNITYSDK_OFFSET(0x13A5AAE0)
#define EFLNKIPDCAJ_SET_MOTIONPARAM_OFFSET UNITYSDK_OFFSET(0x13A5AA00)
#define EFLNKIPDCAJ__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x13A58570)

inline static constexpr unsigned int EFLNKIPDCAJ_TypeDefinitionIndex = 54204;

	class EFLNKIPDCAJ : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::MOMODPMFIKE* IHAFOIJJLHE; // 0x18
		::System::Collections::Generic::List_1<::CEOAOADFGLI*>* MPDDCNCBDAF; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::IVec2>* KMELJDKNDNA; // 0x28
		::KAOOFGPIBGF* JAIGGDJJADB; // 0x30
		::RPG::GameCore::RtCharacterMotionParam* _MotionParam_k__BackingField; // 0x38
		::LNHNKDOIOAG* NKMHIDCDADC; // 0x40
		::OIGMKDJOFJC* EDHHLDCELMK; // 0x48
		::MOMODPMFIKE* KJKBINDMEEE; // 0x50
		::RPG::GameCore::FixPoint ELLAGDBDHFL; // 0x58
		::System::Boolean FCBJKKGDOIC; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLNKIPDCAJ_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLNKIPDCAJ__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLNKIPDCAJ_DISPOSE_OFFSET))(this);
		}

		::System::Void LCJHBLOMABA(::CEOAOADFGLI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEOAOADFGLI*))((::PBYTE)hIl2Cpp + EFLNKIPDCAJ_LCJHBLOMABA_OFFSET))(this, a1);
		}

		::System::Void KGLIDGCDFBP(::CEOAOADFGLI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEOAOADFGLI*))((::PBYTE)hIl2Cpp + EFLNKIPDCAJ_KGLIDGCDFBP_OFFSET))(this, a1);
		}

		::RPG::GameCore::RtMoveStopReason LPFBANCOMPE(::IFMBINHDMOI* a1)
		{
			return ((::RPG::GameCore::RtMoveStopReason(*)(::PVOID, ::IFMBINHDMOI*))((::PBYTE)hIl2Cpp + EFLNKIPDCAJ_LPFBANCOMPE_OFFSET))(this, a1);
		}

		::System::Void EBLMEKGAKAD(::IFMBINHDMOI* a1, ::RPG::GameCore::RtMoveStopReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::IFMBINHDMOI*, ::RPG::GameCore::RtMoveStopReason))((::PBYTE)hIl2Cpp + EFLNKIPDCAJ_EBLMEKGAKAD_OFFSET))(this, a1, a2);
		}

		::System::Void KCKGCEBBCIE(::MJNGFEGNCOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJNGFEGNCOA*))((::PBYTE)hIl2Cpp + EFLNKIPDCAJ_KCKGCEBBCIE_OFFSET))(this, a1);
		}

		::RPG::GameCore::RtCharacterMotionParam* get_MotionParam()
		{
			return ((::RPG::GameCore::RtCharacterMotionParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLNKIPDCAJ_GET_MOTIONPARAM_OFFSET))(this);
		}

		::System::Void set_MotionParam(::RPG::GameCore::RtCharacterMotionParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtCharacterMotionParam*))((::PBYTE)hIl2Cpp + EFLNKIPDCAJ_SET_MOTIONPARAM_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint GKAJOHLHPLD()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLNKIPDCAJ_GKAJOHLHPLD_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint HNOCOHMGFMC()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLNKIPDCAJ_HNOCOHMGFMC_OFFSET))(this);
		}

		::System::Boolean JKKKNKOIAGG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLNKIPDCAJ_JKKKNKOIAGG_OFFSET))(this);
		}

		::System::Boolean FLCPHONNELH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLNKIPDCAJ_FLCPHONNELH_OFFSET))(this);
		}

		::System::Void PGDMPPKFDMH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EFLNKIPDCAJ_PGDMPPKFDMH_OFFSET))(this, a1);
		}

		::System::Boolean CONHCMOGADH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLNKIPDCAJ_CONHCMOGADH_OFFSET))(this);
		}

		::IFMBINHDMOI* CFKCFDIFEML()
		{
			return ((::IFMBINHDMOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLNKIPDCAJ_CFKCFDIFEML_OFFSET))(this);
		}

	};
