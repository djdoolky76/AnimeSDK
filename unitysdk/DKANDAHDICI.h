#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtMoveStopReason.h"
class EFLNKIPDCAJ;
class IFMBINHDMOI;
namespace UnityEngine { class Animator; }

#define DKANDAHDICI_AIFBNMPDJOO_OFFSET UNITYSDK_OFFSET(0xFFD76E0)
#define DKANDAHDICI_CTOR_OFFSET UNITYSDK_OFFSET(0xFFD7BE0)
#define DKANDAHDICI_LDGDOGKJOOD_OFFSET UNITYSDK_OFFSET(0xFFD72E0)
#define DKANDAHDICI_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0xFFD7760)
#define DKANDAHDICI_ONINIT_OFFSET UNITYSDK_OFFSET(0xFFD71A0)
#define DKANDAHDICI_ONREFRESHPOS_OFFSET UNITYSDK_OFFSET(0xFFD79B0)
#define DKANDAHDICI_ONREFRESHROT_OFFSET UNITYSDK_OFFSET(0xFFD7A40)
#define DKANDAHDICI_ONSTART_OFFSET UNITYSDK_OFFSET(0xFFD7270)
#define DKANDAHDICI_ONSTOP_OFFSET UNITYSDK_OFFSET(0xFFD7590)
#define DKANDAHDICI_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xFFD7220)
#define DKANDAHDICI_PKMMBEABKFM_OFFSET UNITYSDK_OFFSET(0xFFD7690)

inline static constexpr unsigned int DKANDAHDICI_TypeDefinitionIndex = 55359;

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
