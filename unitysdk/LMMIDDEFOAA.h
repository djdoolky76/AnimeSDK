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

#define LMMIDDEFOAA_AJKLODBHJNC_OFFSET UNITYSDK_OFFSET(0x1AFD5A20)
#define LMMIDDEFOAA_AKBCAIGIIEH_OFFSET UNITYSDK_OFFSET(0x1AFD7220)
#define LMMIDDEFOAA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1AFD6320)
#define LMMIDDEFOAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1AFD7490)
#define LMMIDDEFOAA_ENJMMHDCAPH_OFFSET UNITYSDK_OFFSET(0x1AFD68F0)
#define LMMIDDEFOAA_FAIIGHLAGBO_OFFSET UNITYSDK_OFFSET(0x1AFD5FB0)
#define LMMIDDEFOAA_HDOFEPFEOEB_OFFSET UNITYSDK_OFFSET(0x1AFD6290)
#define LMMIDDEFOAA_IDECLIPOEJJ_OFFSET UNITYSDK_OFFSET(0x1AFD5940)
#define LMMIDDEFOAA_IHKPOLCCPPL_OFFSET UNITYSDK_OFFSET(0x1AFD5C90)
#define LMMIDDEFOAA_IJEPAJIMDPA_OFFSET UNITYSDK_OFFSET(0x1AFD6400)
#define LMMIDDEFOAA_IMNDAPABBAG_OFFSET UNITYSDK_OFFSET(0x1AFD67E0)
#define LMMIDDEFOAA_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1AFD62E0)
#define LMMIDDEFOAA_MHJOIICPHDL_OFFSET UNITYSDK_OFFSET(0x1AFD7020)
#define LMMIDDEFOAA_MNKMIOIJPCH_OFFSET UNITYSDK_OFFSET(0x1AFD72D0)
#define LMMIDDEFOAA_MONODNDCLJI_OFFSET UNITYSDK_OFFSET(0x1AFD5BD0)
#define LMMIDDEFOAA_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0x1AFD5B10)
#define LMMIDDEFOAA_PLHDKAPNBCG_OFFSET UNITYSDK_OFFSET(0x1AFD60E0)

inline static constexpr unsigned int LMMIDDEFOAA_TypeDefinitionIndex = 62182;

	class LMMIDDEFOAA : public ::System::Object
	{
	public:
		::DBMDNNBIOAI* CDAECNCKMJO; // 0x10
		::RPG::GameCore::TimeRewindEffConfig* HFFOACNOGFC; // 0x18
		::RPG::Client::EntityTimelineControlNode* KKCAIADKCNE; // 0x20
		::Il2CppArray<::RPG::Client::Effect_ParticleBackwardMonoPlugin*>* PKBDLIKMEBF; // 0x28
		::RPG::Client::MonoEffectPluginFollow* AIBMIBKCDIP; // 0x30
		::Il2CppArray<::RPG::Client::Effect_RendererMatBackwardMonoPlugin*>* IEPOMLMMJAM; // 0x38
		::BNGHOKMIDGD* EPMPEFJBAPM; // 0x40
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x48
		::RPG::Client::MonoEffect* HJBEGIDAMBP; // 0x50
		::System::Single BHLNBIGFJIG; // 0x58
		::System::Single KBDPMBDJIOF; // 0x5C
		::System::Single HBDJCFFDGDD; // 0x60
		::System::Single CNDJDPHMHNK; // 0x64
		::System::Boolean MCAPIAKDMAA; // 0x68
		::System::Boolean AIEALCOCIIK; // 0x69
		::System::Byte _padding0[0x2];
		::RPG::GameCore::TimeRewindState PPNPFHEGGCI; // 0x6C
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
