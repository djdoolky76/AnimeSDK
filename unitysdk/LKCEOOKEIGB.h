#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Prop { class DeployPuzzleBoard; }
namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define LKCEOOKEIGB_CTOR_OFFSET UNITYSDK_OFFSET(0xB723180)
#define LKCEOOKEIGB_GET_FINISH_OFFSET UNITYSDK_OFFSET(0xB723160)
#define LKCEOOKEIGB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB722DE0)
#define LKCEOOKEIGB_SET_FINISH_OFFSET UNITYSDK_OFFSET(0xB723170)

inline static constexpr unsigned int LKCEOOKEIGB_TypeDefinitionIndex = 78526;

	class LKCEOOKEIGB : public ::System::Object
	{
	public:
		::System::Action* DPANHIICMLD; // 0x10
		::RPG::Client::Prop::DeployPuzzleBoard* GAIENNLBCMM; // 0x18
		::UnityEngine::AnimationCurve* LOHJNDDJAJE; // 0x20
		::UnityEngine::AnimationCurve* EDPIEOEAIMF; // 0x28
		::UnityEngine::Transform* MCLLALGABAB; // 0x30
		::System::Single PMHMEGEJDGP; // 0x38
		::System::UInt32 AMGLFFNJGFN; // 0x3C
		::System::Boolean _Finish_k__BackingField; // 0x40
		::System::Boolean EKOBCMPNOCP; // 0x41
		::System::Boolean GEMLHAGDHKA; // 0x42
		::System::Byte _padding0[0x1];
		::System::Single IEHPFADHJFD; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKCEOOKEIGB_CTOR_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LKCEOOKEIGB_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean get_Finish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LKCEOOKEIGB_GET_FINISH_OFFSET))(this);
		}

		::System::Void set_Finish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LKCEOOKEIGB_SET_FINISH_OFFSET))(this, a1);
		}

	};
