#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Prop { class DeployPuzzleBoard; }
namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define LKCEOOKEIGB_CTOR_OFFSET UNITYSDK_OFFSET(0x18CCBA10)
#define LKCEOOKEIGB_GET_FINISH_OFFSET UNITYSDK_OFFSET(0x18CCB9F0)
#define LKCEOOKEIGB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x18CCB670)
#define LKCEOOKEIGB_SET_FINISH_OFFSET UNITYSDK_OFFSET(0x18CCBA00)

inline static constexpr unsigned int LKCEOOKEIGB_TypeDefinitionIndex = 81261;

	class LKCEOOKEIGB : public ::System::Object
	{
	public:
		::UnityEngine::Transform* MCLLALGABAB; // 0x10
		::RPG::Client::Prop::DeployPuzzleBoard* GAIENNLBCMM; // 0x18
		::System::Action* DPANHIICMLD; // 0x20
		::UnityEngine::AnimationCurve* LOHJNDDJAJE; // 0x28
		::UnityEngine::AnimationCurve* EDPIEOEAIMF; // 0x30
		::System::Single PMHMEGEJDGP; // 0x38
		::System::Boolean GEMLHAGDHKA; // 0x3C
		::System::Boolean _Finish_k__BackingField; // 0x3D
		::System::Boolean EKOBCMPNOCP; // 0x3E
		::System::Byte _padding0[0x1];
		::System::Single IEHPFADHJFD; // 0x40
		::System::UInt32 AMGLFFNJGFN; // 0x44
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
