#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtMoveStopReason.h"
class EFLNKIPDCAJ;
class IFMBINHDMOI;
namespace UnityEngine { class Animator; }

#define DKANDAHDICI_AIFBNMPDJOO_OFFSET UNITYSDK_OFFSET(0xF254550)
#define DKANDAHDICI_CTOR_OFFSET UNITYSDK_OFFSET(0xF254A50)
#define DKANDAHDICI_LDGDOGKJOOD_OFFSET UNITYSDK_OFFSET(0xF254150)
#define DKANDAHDICI_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0xF2545D0)
#define DKANDAHDICI_ONINIT_OFFSET UNITYSDK_OFFSET(0xF254010)
#define DKANDAHDICI_ONREFRESHPOS_OFFSET UNITYSDK_OFFSET(0xF254820)
#define DKANDAHDICI_ONREFRESHROT_OFFSET UNITYSDK_OFFSET(0xF2548B0)
#define DKANDAHDICI_ONSTART_OFFSET UNITYSDK_OFFSET(0xF2540E0)
#define DKANDAHDICI_ONSTOP_OFFSET UNITYSDK_OFFSET(0xF254400)
#define DKANDAHDICI_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xF254090)
#define DKANDAHDICI_PKMMBEABKFM_OFFSET UNITYSDK_OFFSET(0xF254500)

inline static constexpr unsigned int DKANDAHDICI_TypeDefinitionIndex = 54195;

	class DKANDAHDICI
	{
	public:
		::EFLNKIPDCAJ* CBIGILEOMHK; // 0x50
		::System::Single OGPBNBNLLEN; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKANDAHDICI_CTOR_OFFSET))(this);
		}

		::System::Void OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKANDAHDICI_ONINIT_OFFSET))(this);
		}

		::System::Void OnUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKANDAHDICI_ONUNINIT_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKANDAHDICI_ONSTART_OFFSET))(this);
		}

		::System::Void OnStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKANDAHDICI_ONSTOP_OFFSET))(this);
		}

		::System::Void PKMMBEABKFM(::IFMBINHDMOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFMBINHDMOI*))((::PBYTE)hIl2Cpp + DKANDAHDICI_PKMMBEABKFM_OFFSET))(this, a1);
		}

		::System::Void AIFBNMPDJOO(::IFMBINHDMOI* a1, ::RPG::GameCore::RtMoveStopReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::IFMBINHDMOI*, ::RPG::GameCore::RtMoveStopReason))((::PBYTE)hIl2Cpp + DKANDAHDICI_AIFBNMPDJOO_OFFSET))(this, a1, a2);
		}

		::System::Void OnAnimatorMove(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + DKANDAHDICI_ONANIMATORMOVE_OFFSET))(this, a1);
		}

		::System::Void OnRefreshPos(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DKANDAHDICI_ONREFRESHPOS_OFFSET))(this, a1);
		}

		::System::Void OnRefreshRot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKANDAHDICI_ONREFRESHROT_OFFSET))(this);
		}

		::System::Void LDGDOGKJOOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKANDAHDICI_LDGDOGKJOOD_OFFSET))(this);
		}

	};
