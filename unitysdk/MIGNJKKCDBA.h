#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MIGNJKKCDBA_TransformIndexPath.h"
class SkirtIK;
namespace RPG::Client { class SkirtIKConfig_Runtime; }
namespace RPG::Client { class SkirtIKConfig_TransformLUT; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MIGNJKKCDBA_ELNGGGPEAIA_OFFSET UNITYSDK_OFFSET(0xB957EE0)
#define MIGNJKKCDBA_GNIOPFFLONN_OFFSET UNITYSDK_OFFSET(0xB958560)
#define MIGNJKKCDBA_IHJNKAGADCG_1_OFFSET UNITYSDK_OFFSET(0xB958450)
#define MIGNJKKCDBA_IHJNKAGADCG_OFFSET UNITYSDK_OFFSET(0xB958AF0)

inline static constexpr unsigned int MIGNJKKCDBA_TypeDefinitionIndex = 47247;

	class MIGNJKKCDBA : public ::System::Object
	{
	public:
		static ::System::Void ELNGGGPEAIA(::RPG::Client::SkirtIKConfig_Runtime* a1, ::RPG::Client::SkirtIKConfig_TransformLUT* a2, ::SkirtIK* a3, ::UnityEngine::Transform* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::RPG::Client::SkirtIKConfig_Runtime*, ::RPG::Client::SkirtIKConfig_TransformLUT*, ::SkirtIK*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIGNJKKCDBA_ELNGGGPEAIA_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean GNIOPFFLONN(::UnityEngine::Transform* a1, ::System::String* a2, ::System::UInt64 a3, ::System::UInt64 a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*, ::System::String*, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + MIGNJKKCDBA_GNIOPFFLONN_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Transform* IHJNKAGADCG(::UnityEngine::Transform* a1, ::MIGNJKKCDBA_TransformIndexPath a2)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::MIGNJKKCDBA_TransformIndexPath))((::PBYTE)hIl2Cpp + MIGNJKKCDBA_IHJNKAGADCG_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Transform* IHJNKAGADCG_1(::UnityEngine::Transform* a1, ::System::UInt64 a2, ::System::UInt64 a3)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + MIGNJKKCDBA_IHJNKAGADCG_1_OFFSET))(a1, a2, a3);
		}

	};
