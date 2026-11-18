#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/BaseTimeline/BaseTimelineBehavior.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_BPKIPGGPCNH_OFFSET UNITYSDK_OFFSET(0x1A09B360)
#define MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_COCALOJNCKB_OFFSET UNITYSDK_OFFSET(0x1A09B7E0)
#define MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_ECONHLNOEPC_OFFSET UNITYSDK_OFFSET(0x1A09AEE0)
#define MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_EEEPHBMCNEN_OFFSET UNITYSDK_OFFSET(0x1A09B8E0)
#define MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x1A09B8F0)
#define MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_JEINNALOJDE_OFFSET UNITYSDK_OFFSET(0x1A09B8C0)
#define MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_MIDMHINHEGI_OFFSET UNITYSDK_OFFSET(0x1A09B900)
#define MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_OFMFPDACPLH_OFFSET UNITYSDK_OFFSET(0x1A09B8D0)
#define MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1A09B5E0)
#define MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A09B780)
#define MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x1A09B310)
#define MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_ONPLAY_OFFSET UNITYSDK_OFFSET(0x1A09AE90)
#define MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_ONPROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1A09B670)
#define MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A09B7D0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int BatchActivationBehaviour_TypeDefinitionIndex = 57658;

	class BatchActivationBehaviour : public ::MoleMole::Timeline::BaseTimeline::BaseTimelineBehavior
	{
	public:
		::System::Boolean isActivationType; // 0x18
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _targets; // 0x20
		::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Boolean>* _initialStates; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_ONPLAY_OFFSET))(this);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_ONPAUSE_OFFSET))(this);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
		}

		::System::Void OnProcessFrame(::UnityEngine::Playables::Playable BBAPGLCBDOF, ::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC, ::System::Single IECOJPMPJMP, ::System::Int32 DFDHKJHBBAD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_ONPROCESSFRAME_OFFSET))(this, BBAPGLCBDOF, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC, IECOJPMPJMP, DFDHKJHBBAD);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_ONDESTROY_OFFSET))(this);
		}

		::System::Void BPKIPGGPCNH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_BPKIPGGPCNH_OFFSET))(this);
		}

		::System::Void COCALOJNCKB(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* LJHOPIIGOHI, ::System::Boolean KGBJODKBJKC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_COCALOJNCKB_OFFSET))(this, LJHOPIIGOHI, KGBJODKBJKC);
		}

		::System::Void JEINNALOJDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_JEINNALOJDE_OFFSET))(this);
		}

		::System::Void OFMFPDACPLH(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::Playable KMGKAIDEIBA, ::UnityEngine::Playables::FrameData FDHMCIFPNCK, ::System::Object* MPBJAGIKPJM, ::System::Single DDMDINPGCFI, ::System::Int32 CEIDLKIHMLC)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_OFMFPDACPLH_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
		}

		::System::Void EEEPHBMCNEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_EEEPHBMCNEN_OFFSET))(this);
		}

		::System::Void IFHNMAGGFAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_IFHNMAGGFAE_OFFSET))(this);
		}

		::System::Void MIDMHINHEGI(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_MIDMHINHEGI_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void ECONHLNOEPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BATCHACTIVATIONBEHAVIOUR_ECONHLNOEPC_OFFSET))(this);
		}
	};
}
