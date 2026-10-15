#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::GameCore { class FiveDimDashOrbConfig; }
namespace RPG::GameCore { class LevelTriggerInfo; }
namespace UnityEngine { class Collider; }

#define NDHHBHFFIIK_APLNBJLBIIM_OFFSET UNITYSDK_OFFSET(0xBB22900)
#define NDHHBHFFIIK_CTOR_OFFSET UNITYSDK_OFFSET(0xBB22050)
#define NDHHBHFFIIK_DDIGBKIBINC_OFFSET UNITYSDK_OFFSET(0xBB23870)
#define NDHHBHFFIIK_DIACFAPBPCF_OFFSET UNITYSDK_OFFSET(0xBB22400)
#define NDHHBHFFIIK_EALKDLFLAGG_OFFSET UNITYSDK_OFFSET(0xBB23B00)
#define NDHHBHFFIIK_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBB222C0)
#define NDHHBHFFIIK_FLDKLANHBHC_OFFSET UNITYSDK_OFFSET(0xBB23530)
#define NDHHBHFFIIK_HBIFOAPBLBJ_OFFSET UNITYSDK_OFFSET(0xBB22D80)
#define NDHHBHFFIIK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xBB228B0)
#define NDHHBHFFIIK_JGMGPCICLFA_OFFSET UNITYSDK_OFFSET(0xBB23360)
#define NDHHBHFFIIK_JNANELEPMOD_OFFSET UNITYSDK_OFFSET(0xBB22C70)
#define NDHHBHFFIIK_NLOALIICCLK_OFFSET UNITYSDK_OFFSET(0xBB225F0)
#define NDHHBHFFIIK_PDHDIOEDCIJ_OFFSET UNITYSDK_OFFSET(0xBB235B0)
#define NDHHBHFFIIK_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xBB22B30)

inline static constexpr unsigned int NDHHBHFFIIK_TypeDefinitionIndex = 77078;

	class NDHHBHFFIIK : public ::System::Object
	{
	public:
		::Entitas::IGroup_1<::HIOEAKHGILF*>* GCIGELLJPPB; // 0x10
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x18
		::Entitas::ICollector_1<::HIOEAKHGILF*>* EMGHEKNAOAG; // 0x20
		::NDDFLGNNMDK* FKINCGODJEP; // 0x28
		// static const ::System::String* MNNENDHDHLL; // 0x0
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + NDHHBHFFIIK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHHBHFFIIK_EXECUTE_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHHBHFFIIK_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHHBHFFIIK_TEARDOWN_OFFSET))(this);
		}

		::System::Void APLNBJLBIIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHHBHFFIIK_APLNBJLBIIM_OFFSET))(this);
		}

		::System::Void DIACFAPBPCF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHHBHFFIIK_DIACFAPBPCF_OFFSET))(this);
		}

		::System::Void JNANELEPMOD(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + NDHHBHFFIIK_JNANELEPMOD_OFFSET))(this, a1);
		}

		::System::Void NLOALIICCLK(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + NDHHBHFFIIK_NLOALIICCLK_OFFSET))(this, a1);
		}

		::System::Void JGMGPCICLFA(::HIOEAKHGILF* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::Single))((::PBYTE)hIl2Cpp + NDHHBHFFIIK_JGMGPCICLFA_OFFSET))(this, a1, a2);
		}

		::System::Void HBIFOAPBLBJ(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + NDHHBHFFIIK_HBIFOAPBLBJ_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelTriggerInfo* FLDKLANHBHC(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimDashOrbConfig* a2)
		{
			return ((::RPG::GameCore::LevelTriggerInfo*(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimDashOrbConfig*))((::PBYTE)hIl2Cpp + NDHHBHFFIIK_FLDKLANHBHC_OFFSET))(this, a1, a2);
		}

		::System::Void PDHDIOEDCIJ(::HIOEAKHGILF* a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + NDHHBHFFIIK_PDHDIOEDCIJ_OFFSET))(this, a1, a2);
		}

		::System::Void EALKDLFLAGG(::HIOEAKHGILF* a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + NDHHBHFFIIK_EALKDLFLAGG_OFFSET))(this, a1, a2);
		}

		::System::Void DDIGBKIBINC(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + NDHHBHFFIIK_DDIGBKIBINC_OFFSET))(this, a1, a2);
		}

	};
