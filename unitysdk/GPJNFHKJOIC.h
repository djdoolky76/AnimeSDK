#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
class FMDCBILJCGE;
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define GPJNFHKJOIC_CTOR_OFFSET UNITYSDK_OFFSET(0x15B5B2D0)
#define GPJNFHKJOIC_KHFJAKGCILD_OFFSET UNITYSDK_OFFSET(0x15B5B070)
#define GPJNFHKJOIC_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x15B5B270)
#define GPJNFHKJOIC_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x15B5ABD0)

inline static constexpr unsigned int GPJNFHKJOIC_TypeDefinitionIndex = 74969;

	class GPJNFHKJOIC : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::Transform* MFFPFAAMKLM; // 0x10
		::UnityEngine::Transform* GKNBCPMJHMN; // 0x18
		::UnityEngine::Transform* OAKPFPKNNBI; // 0x20
		::UnityEngine::Vector3 AELNGFIBDLB; // 0x28
		::System::Boolean BFDJMNFOMLL; // 0x34
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 CFOPAPAGLDK; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJNFHKJOIC_CTOR_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + GPJNFHKJOIC_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + GPJNFHKJOIC_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void KHFJAKGCILD(::UnityEngine::Transform* a1, ::FMDCBILJCGE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::FMDCBILJCGE*))((::PBYTE)hIl2Cpp + GPJNFHKJOIC_KHFJAKGCILD_OFFSET))(this, a1, a2);
		}

	};
