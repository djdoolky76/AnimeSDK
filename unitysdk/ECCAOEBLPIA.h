#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PlayerRemoteControlOtherEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }

#define ECCAOEBLPIA_CTOR_OFFSET UNITYSDK_OFFSET(0x12D06EC0)
#define ECCAOEBLPIA_DGEPNNEEABE_OFFSET UNITYSDK_OFFSET(0x12D08090)
#define ECCAOEBLPIA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12D082C0)
#define ECCAOEBLPIA_FHCKGDFAPFN_OFFSET UNITYSDK_OFFSET(0x12D07BB0)
#define ECCAOEBLPIA_HCBNFOEDAIA_OFFSET UNITYSDK_OFFSET(0x12D07C70)
#define ECCAOEBLPIA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12D06ED0)
#define ECCAOEBLPIA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12D08030)
#define ECCAOEBLPIA_TICK_OFFSET UNITYSDK_OFFSET(0x12D08300)

inline static constexpr unsigned int ECCAOEBLPIA_TypeDefinitionIndex = 58292;

	class ECCAOEBLPIA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PlayerRemoteControlOtherEntity* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayerRemoteControlOtherEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayerRemoteControlOtherEntity*))((::PBYTE)hIl2Cpp + ECCAOEBLPIA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCAOEBLPIA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCAOEBLPIA_ONTASKRESET_OFFSET))(this);
		}

		::System::Collections::IEnumerator* FHCKGDFAPFN(::System::Nullable_1<::UnityEngine::Vector3> a1, ::System::Nullable_1<::UnityEngine::Quaternion> a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + ECCAOEBLPIA_FHCKGDFAPFN_OFFSET))(this, a1, a2);
		}

		::System::Void HCBNFOEDAIA(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Nullable_1<::UnityEngine::Vector3> a5, ::System::Nullable_1<::UnityEngine::Quaternion> a6, ::System::String* a7, ::System::Nullable_1<::UnityEngine::Vector3> a8, ::System::Nullable_1<::UnityEngine::Quaternion> a9, ::System::Boolean a10)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::Boolean, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::String*, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Boolean))((::PBYTE)hIl2Cpp + ECCAOEBLPIA_HCBNFOEDAIA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::System::Void DGEPNNEEABE(::System::Boolean a1, ::System::Nullable_1<::UnityEngine::Vector3> a2, ::System::Nullable_1<::UnityEngine::Quaternion> a3)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + ECCAOEBLPIA_DGEPNNEEABE_OFFSET))(a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCAOEBLPIA_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ECCAOEBLPIA_TICK_OFFSET))(this, a1);
		}

	};
