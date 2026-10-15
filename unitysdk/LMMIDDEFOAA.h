#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TimeRewindState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BNGHOKMIDGD;
class DBMDNNBIOAI;
namespace RPG::Client { class Effect_ParticleBackwardMonoPlugin; }
namespace RPG::Client { class Effect_RendererMatBackwardMonoPlugin; }
namespace RPG::Client { class EntityTimelineControlNode; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginFollow; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TimeRewindEffConfig; }

#define LMMIDDEFOAA_AJKLODBHJNC_OFFSET UNITYSDK_OFFSET(0xB7C9410)
#define LMMIDDEFOAA_AKBCAIGIIEH_OFFSET UNITYSDK_OFFSET(0xB7CABF0)
#define LMMIDDEFOAA_CLEAR_OFFSET UNITYSDK_OFFSET(0xB7C9D10)
#define LMMIDDEFOAA_CTOR_OFFSET UNITYSDK_OFFSET(0xB7CAE60)
#define LMMIDDEFOAA_ENJMMHDCAPH_OFFSET UNITYSDK_OFFSET(0xB7CA2C0)
#define LMMIDDEFOAA_FAIIGHLAGBO_OFFSET UNITYSDK_OFFSET(0xB7C99A0)
#define LMMIDDEFOAA_HDOFEPFEOEB_OFFSET UNITYSDK_OFFSET(0xB7C9C80)
#define LMMIDDEFOAA_IDECLIPOEJJ_OFFSET UNITYSDK_OFFSET(0xB7C9330)
#define LMMIDDEFOAA_IHKPOLCCPPL_OFFSET UNITYSDK_OFFSET(0xB7C9680)
#define LMMIDDEFOAA_IJEPAJIMDPA_OFFSET UNITYSDK_OFFSET(0xB7C9DF0)
#define LMMIDDEFOAA_IMNDAPABBAG_OFFSET UNITYSDK_OFFSET(0xB7CA1D0)
#define LMMIDDEFOAA_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB7C9CD0)
#define LMMIDDEFOAA_MHJOIICPHDL_OFFSET UNITYSDK_OFFSET(0xB7CA9F0)
#define LMMIDDEFOAA_MNKMIOIJPCH_OFFSET UNITYSDK_OFFSET(0xB7CACA0)
#define LMMIDDEFOAA_MONODNDCLJI_OFFSET UNITYSDK_OFFSET(0xB7C95C0)
#define LMMIDDEFOAA_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0xB7C9500)
#define LMMIDDEFOAA_PLHDKAPNBCG_OFFSET UNITYSDK_OFFSET(0xB7C9AD0)

inline static constexpr unsigned int LMMIDDEFOAA_TypeDefinitionIndex = 60803;

	class LMMIDDEFOAA : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::Effect_ParticleBackwardMonoPlugin*>* PKBDLIKMEBF; // 0x10
		::RPG::Client::MonoEffectPluginFollow* AIBMIBKCDIP; // 0x18
		::RPG::Client::MonoEffect* HJBEGIDAMBP; // 0x20
		::Il2CppArray<::RPG::Client::Effect_RendererMatBackwardMonoPlugin*>* IEPOMLMMJAM; // 0x28
		::RPG::GameCore::TimeRewindEffConfig* HFFOACNOGFC; // 0x30
		::RPG::Client::EntityTimelineControlNode* KKCAIADKCNE; // 0x38
		::DBMDNNBIOAI* CDAECNCKMJO; // 0x40
		::BNGHOKMIDGD* EPMPEFJBAPM; // 0x48
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x50
		::RPG::GameCore::TimeRewindState PPNPFHEGGCI; // 0x58
		::System::Single BHLNBIGFJIG; // 0x5C
		::System::Boolean AIEALCOCIIK; // 0x60
		::System::Boolean MCAPIAKDMAA; // 0x61
		::System::Byte _padding0[0x2];
		::System::Single HBDJCFFDGDD; // 0x64
		::System::Single CNDJDPHMHNK; // 0x68
		::System::Single KBDPMBDJIOF; // 0x6C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMMIDDEFOAA_CTOR_OFFSET))(this);
		}

		::System::Void IDECLIPOEJJ(::RPG::GameCore::GameEntity* a1, ::BNGHOKMIDGD* a2, ::RPG::GameCore::TimeRewindEffConfig* a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::RPG::Client::EntityTimelineControlNode* a7)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::BNGHOKMIDGD*, ::RPG::GameCore::TimeRewindEffConfig*, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::EntityTimelineControlNode*))((::PBYTE)hIl2Cpp + LMMIDDEFOAA_IDECLIPOEJJ_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void AJKLODBHJNC(::RPG::GameCore::TimeRewindState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + LMMIDDEFOAA_AJKLODBHJNC_OFFSET))(this, a1);
		}

		::System::Void OHMHJFANEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMMIDDEFOAA_OHMHJFANEIF_OFFSET))(this);
		}

		::System::Void MONODNDCLJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMMIDDEFOAA_MONODNDCLJI_OFFSET))(this);
		}

		::System::Void IHKPOLCCPPL(::System::Single a1, ::RPG::GameCore::TimeRewindState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + LMMIDDEFOAA_IHKPOLCCPPL_OFFSET))(this, a1, a2);
		}

		::System::Void FAIIGHLAGBO(::RPG::GameCore::TimeRewindState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + LMMIDDEFOAA_FAIIGHLAGBO_OFFSET))(this, a1);
		}

		::System::Void PLHDKAPNBCG(::RPG::GameCore::TimeRewindState a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindState, ::System::Boolean))((::PBYTE)hIl2Cpp + LMMIDDEFOAA_PLHDKAPNBCG_OFFSET))(this, a1, a2);
		}

		::System::Single HDOFEPFEOEB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LMMIDDEFOAA_HDOFEPFEOEB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMMIDDEFOAA_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMMIDDEFOAA_CLEAR_OFFSET))(this);
		}

		::System::Void IJEPAJIMDPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMMIDDEFOAA_IJEPAJIMDPA_OFFSET))(this);
		}

		::System::Void IMNDAPABBAG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LMMIDDEFOAA_IMNDAPABBAG_OFFSET))(this, a1);
		}

		::System::Void ENJMMHDCAPH(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + LMMIDDEFOAA_ENJMMHDCAPH_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 MHJOIICPHDL(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LMMIDDEFOAA_MHJOIICPHDL_OFFSET))(this, a1);
		}

		::System::Single AKBCAIGIIEH(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LMMIDDEFOAA_AKBCAIGIIEH_OFFSET))(this, a1);
		}

		::System::Void MNKMIOIJPCH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LMMIDDEFOAA_MNKMIOIJPCH_OFFSET))(this, a1);
		}

	};
