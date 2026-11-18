#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJEMFDNDII.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

class GDAAJAPBNAG;
class HMHKAIANMBE;
namespace MoleMole { class ActivitBGAnimationSequence; }
namespace MoleMole { class ActivitBGSpineSequence; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOACTIVITYBGSETTING_AWAKE_OFFSET UNITYSDK_OFFSET(0x14AF6AE0)
#define MOLEMOLE_MONOACTIVITYBGSETTING_CLEAR_OFFSET UNITYSDK_OFFSET(0x14AF6F50)
#define MOLEMOLE_MONOACTIVITYBGSETTING_DOCOPYRESET_OFFSET UNITYSDK_OFFSET(0x14AF6E90)
#define MOLEMOLE_MONOACTIVITYBGSETTING_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14AF6DA0)
#define MOLEMOLE_MONOACTIVITYBGSETTING_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x14AF6D60)
#define MOLEMOLE_MONOACTIVITYBGSETTING_ONENABLE_OFFSET UNITYSDK_OFFSET(0x14AF6C00)
#define MOLEMOLE_MONOACTIVITYBGSETTING_SETUP_OFFSET UNITYSDK_OFFSET(0x14AF6B60)
#define MOLEMOLE_MONOACTIVITYBGSETTING_STARTPLAY_OFFSET UNITYSDK_OFFSET(0x14AF6CC0)
#define MOLEMOLE_MONOACTIVITYBGSETTING_STARTSPINEANIMATION_OFFSET UNITYSDK_OFFSET(0x14AF6FF0)
#define MOLEMOLE_MONOACTIVITYBGSETTING_STARTUNITYANIMATION_OFFSET UNITYSDK_OFFSET(0x14AF7220)
#define MOLEMOLE_MONOACTIVITYBGSETTING_START_OFFSET UNITYSDK_OFFSET(0x14AF6BC0)
#define MOLEMOLE_MONOACTIVITYBGSETTING_STOPPLAY_OFFSET UNITYSDK_OFFSET(0x14AF7520)
#define MOLEMOLE_MONOACTIVITYBGSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x14AF75C0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoActivityBGSetting_TypeDefinitionIndex = 90115;

	class MonoActivityBGSetting : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::PBJEMFDNDII site; // 0x58
		::System::Boolean useSpineSequence; // 0x5C
		::System::Byte _padding0[0x3];
		::System::Collections::Generic::List_1<::MoleMole::ActivitBGSpineSequence*>* spineSequence; // 0x60
		::System::Boolean useAnimationSequence; // 0x68
		::System::Byte _padding1[0x7];
		::System::Collections::Generic::List_1<::MoleMole::ActivitBGAnimationSequence*>* animationSequence; // 0x70
		::GDAAJAPBNAG* spineSequencePlayer; // 0x78
		::HMHKAIANMBE* animSequencePlayer; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_ONDESTROY_OFFSET))(this);
		}

		::System::Void DoCopyReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_DOCOPYRESET_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_CLEAR_OFFSET))(this);
		}

		::System::Void Setup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_SETUP_OFFSET))(this);
		}

		::System::Void StartSpineAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_STARTSPINEANIMATION_OFFSET))(this);
		}

		::System::Void StartUnityAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_STARTUNITYANIMATION_OFFSET))(this);
		}

		::System::Void StartPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_STARTPLAY_OFFSET))(this);
		}

		::System::Void StopPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_STOPPLAY_OFFSET))(this);
		}
	};
}
