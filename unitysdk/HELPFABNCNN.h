#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::GameCore { class CartoonScreenTransfer; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class AnimationCurve; }

#define HELPFABNCNN_AECBMAGLDBL_OFFSET UNITYSDK_OFFSET(0x15C4DB90)
#define HELPFABNCNN_AGKNJDPHJEG_OFFSET UNITYSDK_OFFSET(0x15C4E1B0)
#define HELPFABNCNN_CTOR_OFFSET UNITYSDK_OFFSET(0x15C4DB00)
#define HELPFABNCNN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C4DB10)
#define HELPFABNCNN_MFBGJOPDKPE_OFFSET UNITYSDK_OFFSET(0x15C4DDB0)
#define HELPFABNCNN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C4DC50)
#define HELPFABNCNN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15C4E160)
#define HELPFABNCNN_PBLDOCEJEJM_OFFSET UNITYSDK_OFFSET(0x15C4E060)
#define HELPFABNCNN_TICK_OFFSET UNITYSDK_OFFSET(0x15C4DBF0)

inline static constexpr unsigned int HELPFABNCNN_TypeDefinitionIndex = 57997;

	class HELPFABNCNN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::CartoonScreenTransfer* OFKGLJOAMLD; // 0x20
		::RPG::Client::CameraBlendCurve* NPMCMKAMDNP; // 0x28
		// static const ::System::String* KMDIAJDAHGO; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CartoonScreenTransfer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CartoonScreenTransfer*))((::PBYTE)hIl2Cpp + HELPFABNCNN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HELPFABNCNN_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HELPFABNCNN_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HELPFABNCNN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HELPFABNCNN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void AGKNJDPHJEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HELPFABNCNN_AGKNJDPHJEG_OFFSET))(this);
		}

		::UnityEngine::Vector2 MFBGJOPDKPE()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + HELPFABNCNN_MFBGJOPDKPE_OFFSET))(this);
		}

		::UnityEngine::AnimationCurve* PBLDOCEJEJM()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + HELPFABNCNN_PBLDOCEJEJM_OFFSET))(this);
		}

		::System::Void AECBMAGLDBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HELPFABNCNN_AECBMAGLDBL_OFFSET))(this);
		}

	};
