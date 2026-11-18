#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

class DynamicBone;
namespace MoleMole { class DynamicBonePara; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_DYNAMICBONEPARASWITCH_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B4579F0)
#define MOLEMOLE_DYNAMICBONEPARASWITCH_CHANGEIMMPART_OFFSET UNITYSDK_OFFSET(0x1B457650)
#define MOLEMOLE_DYNAMICBONEPARASWITCH_DEALDAMPINGUPDATE_OFFSET UNITYSDK_OFFSET(0x1B457CB0)
#define MOLEMOLE_DYNAMICBONEPARASWITCH_DEALELASTICITY_OFFSET UNITYSDK_OFFSET(0x1B457DD0)
#define MOLEMOLE_DYNAMICBONEPARASWITCH_DEALINERT_OFFSET UNITYSDK_OFFSET(0x1B458010)
#define MOLEMOLE_DYNAMICBONEPARASWITCH_DEALSTIFFNESS_OFFSET UNITYSDK_OFFSET(0x1B457EF0)
#define MOLEMOLE_DYNAMICBONEPARASWITCH_DORECORD_OFFSET UNITYSDK_OFFSET(0x1B457790)
#define MOLEMOLE_DYNAMICBONEPARASWITCH_SWITCHTOKEY_OFFSET UNITYSDK_OFFSET(0x1B4573A0)
#define MOLEMOLE_DYNAMICBONEPARASWITCH_TRYTEST_OFFSET UNITYSDK_OFFSET(0x1B457350)
#define MOLEMOLE_DYNAMICBONEPARASWITCH_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B457BC0)
#define MOLEMOLE_DYNAMICBONEPARASWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B458130)

namespace MoleMole
{
	inline static constexpr unsigned int DynamicBoneParaSwitch_TypeDefinitionIndex = 62201;

	class DynamicBoneParaSwitch : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::DynamicBonePara*>* switchParas; // 0x58
		::System::String* ToKey; // 0x60
		::DynamicBone* target; // 0x68
		::System::Single startTime; // 0x70
		::System::Byte _padding0[0x4];
		::MoleMole::DynamicBonePara* curPara; // 0x78
		::System::Boolean isSwitching; // 0x80
		::System::Byte _padding1[0x3];
		::System::Single startDamping; // 0x84
		::UnityEngine::AnimationCurve* dampingCurve; // 0x88
		::System::Single startElasticity; // 0x90
		::System::Byte _padding2[0x4];
		::UnityEngine::AnimationCurve* elasticityCurve; // 0x98
		::System::Single startStiffness; // 0xA0
		::System::Byte _padding3[0x4];
		::UnityEngine::AnimationCurve* stiffnessCurve; // 0xA8
		::System::Single startInert; // 0xB0
		::System::Byte _padding4[0x4];
		::UnityEngine::AnimationCurve* inertCurve; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEPARASWITCH__CTOR_OFFSET))(this);
		}

		::System::Void TryTest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEPARASWITCH_TRYTEST_OFFSET))(this);
		}

		::System::Void SwitchToKey(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEPARASWITCH_SWITCHTOKEY_OFFSET))(this, key);
		}

		::System::Void DoRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEPARASWITCH_DORECORD_OFFSET))(this);
		}

		::System::Void ChangeImmPart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEPARASWITCH_CHANGEIMMPART_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEPARASWITCH_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEPARASWITCH_UPDATE_OFFSET))(this);
		}

		::System::Void DealDampingUpdate(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEPARASWITCH_DEALDAMPINGUPDATE_OFFSET))(this, progress);
		}

		::System::Void DealElasticity(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEPARASWITCH_DEALELASTICITY_OFFSET))(this, progress);
		}

		::System::Void DealStiffness(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEPARASWITCH_DEALSTIFFNESS_OFFSET))(this, progress);
		}

		::System::Void DealInert(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEPARASWITCH_DEALINERT_OFFSET))(this, progress);
		}
	};
}
