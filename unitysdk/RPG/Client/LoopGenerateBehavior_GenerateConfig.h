#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LoopGenerateBehavior_SegmentType.h"
#include "unitysdk/UnityEngine/Bounds.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GENERATECONFIG_CNNLJJFFJPE_OFFSET UNITYSDK_OFFSET(0xD4E3300)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GENERATECONFIG_DJPEJOPFANL_OFFSET UNITYSDK_OFFSET(0xEA920)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GENERATECONFIG_GFJEPOCNAPC_OFFSET UNITYSDK_OFFSET(0xEA910)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GENERATECONFIG_KJMDJMBNCPE_OFFSET UNITYSDK_OFFSET(0xEA930)

namespace RPG::Client
{
	inline static constexpr unsigned int LoopGenerateBehavior_GenerateConfig_TypeDefinitionIndex = 70905;

	struct alignas(8) LoopGenerateBehavior_GenerateConfig
	{
		::RPG::Client::LoopGenerateBehavior_SegmentType SegmentType; // 0x10
		::System::Single EndpointOffset; // 0x14
		::System::Single Speed; // 0x18
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* GroupWeightPairs; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* SliderTemplates; // 0x28
		::System::Void GFJEPOCNAPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_GENERATECONFIG_GFJEPOCNAPC_OFFSET))(this);
		}

		static ::UnityEngine::Bounds CNNLJJFFJPE(::UnityEngine::GameObject* a1)
		{
			return ((::UnityEngine::Bounds(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_GENERATECONFIG_CNNLJJFFJPE_OFFSET))(a1);
		}

		::System::Void DJPEJOPFANL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_GENERATECONFIG_DJPEJOPFANL_OFFSET))(this);
		}

		::System::Void KJMDJMBNCPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_GENERATECONFIG_KJMDJMBNCPE_OFFSET))(this);
		}

	};
}
