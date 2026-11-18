#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoPartySceneObject.h"
#include "unitysdk/UnityEngine/Vector3.h"

class NIFLKNJIIEG;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONORECYCLEOBJ_AWAKE_OFFSET UNITYSDK_OFFSET(0x162E6DF0)
#define MOLEMOLE_MONORECYCLEOBJ_DOMMKOEMPJJ_OFFSET UNITYSDK_OFFSET(0x162E72F0)
#define MOLEMOLE_MONORECYCLEOBJ_EGNLNKOEJJH_OFFSET UNITYSDK_OFFSET(0x162E7700)
#define MOLEMOLE_MONORECYCLEOBJ_EJGMFEHOGAF_OFFSET UNITYSDK_OFFSET(0x162E7670)
#define MOLEMOLE_MONORECYCLEOBJ_IFJJJFCAHCC_OFFSET UNITYSDK_OFFSET(0x162E7280)
#define MOLEMOLE_MONORECYCLEOBJ_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x162E74F0)
#define MOLEMOLE_MONORECYCLEOBJ_ONDOUPDATE_OFFSET UNITYSDK_OFFSET(0x162E6F70)
#define MOLEMOLE_MONORECYCLEOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x162E75A0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoRecycleObj_TypeDefinitionIndex = 48044;

	class MonoRecycleObj : public ::MoleMole::MonoPartySceneObject
	{
	public:
		::UnityEngine::GameObject* originObj; // 0x40
		::System::UInt32 timeInternalMS; // 0x48
		::System::Byte _padding0[0x4];
		::Il2CppArray<::UnityEngine::Vector3>* positions; // 0x50
		::UnityEngine::Vector3 rotationEuler; // 0x58
		::System::Single thresholdY; // 0x64
		::System::Int32 PGJOCBEMJBD; // 0x68
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NIFLKNJIIEG*>* generatedItemDict; // 0x70
		::System::Collections::Generic::Queue_1<::NIFLKNJIIEG*>* recycledItems; // 0x78
		::System::Collections::Generic::List_1<::System::UInt32>* toRecycleList; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORECYCLEOBJ__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORECYCLEOBJ_AWAKE_OFFSET))(this);
		}

		::System::Void OnDoUpdate(::System::UInt32 BNNCKJIALIO)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORECYCLEOBJ_ONDOUPDATE_OFFSET))(this, BNNCKJIALIO);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORECYCLEOBJ_ONDESTROY_OFFSET))(this);
		}

		::System::Void DOMMKOEMPJJ(::System::UInt32 BNNCKJIALIO)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORECYCLEOBJ_DOMMKOEMPJJ_OFFSET))(this, BNNCKJIALIO);
		}

		::System::Void EGNLNKOEJJH(::System::UInt32 MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORECYCLEOBJ_EGNLNKOEJJH_OFFSET))(this, MIALFKCCCPI);
		}

		::NIFLKNJIIEG* EJGMFEHOGAF()
		{
			return ((::NIFLKNJIIEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORECYCLEOBJ_EJGMFEHOGAF_OFFSET))(this);
		}

		::System::Void IFJJJFCAHCC(::NIFLKNJIIEG* AFILGFIOLCG)
		{
			return ((::System::Void(*)(::PVOID, ::NIFLKNJIIEG*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORECYCLEOBJ_IFJJJFCAHCC_OFFSET))(this, AFILGFIOLCG);
		}
	};
}
