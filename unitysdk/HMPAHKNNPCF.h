#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/GridFightBattleEventHintType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class KNHJKDBPNOI;
class MDFIHKILAPL;
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define HMPAHKNNPCF_CABHEAGLNDD_OFFSET UNITYSDK_OFFSET(0x15D7CD90)
#define HMPAHKNNPCF_CFPOLHDHFIB_OFFSET UNITYSDK_OFFSET(0x15D7D150)
#define HMPAHKNNPCF_CTOR_OFFSET UNITYSDK_OFFSET(0x15D7D320)
#define HMPAHKNNPCF_EEDOOMCMFIN_OFFSET UNITYSDK_OFFSET(0x15D7CE10)
#define HMPAHKNNPCF_GNDFNHNEDAH_OFFSET UNITYSDK_OFFSET(0x15D7D220)
#define HMPAHKNNPCF_HABFIFCKMKG_OFFSET UNITYSDK_OFFSET(0x15D7CDD0)
#define HMPAHKNNPCF_LNONCNOBEJP_OFFSET UNITYSDK_OFFSET(0x15D7D1D0)
#define HMPAHKNNPCF_NBDFJCDMKJF_OFFSET UNITYSDK_OFFSET(0x15D7D2B0)
#define HMPAHKNNPCF_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x15D7CE60)
#define HMPAHKNNPCF_PHIMKHKMNOH_OFFSET UNITYSDK_OFFSET(0x15D7CF80)
#define HMPAHKNNPCF__ONBIND_OFFSET UNITYSDK_OFFSET(0x15D7CAA0)
#define HMPAHKNNPCF___ONBIND_B__0_0_OFFSET UNITYSDK_OFFSET(0x15D7D350)

inline static constexpr unsigned int HMPAHKNNPCF_TypeDefinitionIndex = 72241;

	class HMPAHKNNPCF : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Image* AFJIGEDHIPO; // 0x60
		::RPG::Client::RPGAnimationEvent* DDCODMNKPIP; // 0x68
		::UnityEngine::UI::Text* GOGNOECLBFD; // 0x70
		::UnityEngine::Animation* PMOJILOJEPE; // 0x78
		::System::Action_1<::KNHJKDBPNOI*>* CIFOILLJFNF; // 0x80
		::RPG::GameCore::GridFightBattleEventHintType BDAGIIBEPJA; // 0x88
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* INHDCOPAFPF; // 0x0
		// static const ::System::String* OGGNOKPOMHB; // 0x0
		// static const ::System::String* EHJFHMEKFDI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMPAHKNNPCF_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMPAHKNNPCF__ONBIND_OFFSET))(this);
		}

		::System::Void CABHEAGLNDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMPAHKNNPCF_CABHEAGLNDD_OFFSET))(this);
		}

		::System::Void HABFIFCKMKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMPAHKNNPCF_HABFIFCKMKG_OFFSET))(this);
		}

		::System::Void EEDOOMCMFIN(::System::Action_1<::KNHJKDBPNOI*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::KNHJKDBPNOI*>*))((::PBYTE)hIl2Cpp + HMPAHKNNPCF_EEDOOMCMFIN_OFFSET))(this, a1);
		}

		::System::Void NKPPGDENJAE(::MDFIHKILAPL* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MDFIHKILAPL*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HMPAHKNNPCF_NKPPGDENJAE_OFFSET))(this, a1, a2);
		}

		::System::Void PHIMKHKMNOH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HMPAHKNNPCF_PHIMKHKMNOH_OFFSET))(this, a1);
		}

		::System::Void CFPOLHDHFIB(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + HMPAHKNNPCF_CFPOLHDHFIB_OFFSET))(this, a1);
		}

		::System::Void LNONCNOBEJP(::RPG::GameCore::GridFightBattleEventHintType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightBattleEventHintType))((::PBYTE)hIl2Cpp + HMPAHKNNPCF_LNONCNOBEJP_OFFSET))(this, a1);
		}

		::System::Void GNDFNHNEDAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMPAHKNNPCF_GNDFNHNEDAH_OFFSET))(this);
		}

		::System::Void NBDFJCDMKJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMPAHKNNPCF_NBDFJCDMKJF_OFFSET))(this);
		}

		::System::Void __OnBind_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMPAHKNNPCF___ONBIND_B__0_0_OFFSET))(this);
		}

	};
