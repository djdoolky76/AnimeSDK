#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"
class EDCJJCNBCNL;
namespace RPGTools::Timeline { class PerformerMeta; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TimelineAsset; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define MFIGJKDOHOI_CTOR_OFFSET UNITYSDK_OFFSET(0x17C8C290)
#define MFIGJKDOHOI_ELKKCAIEBAO_OFFSET UNITYSDK_OFFSET(0x17C8C1B0)
#define MFIGJKDOHOI_FOGILPHIAAL_OFFSET UNITYSDK_OFFSET(0x17C89590)
#define MFIGJKDOHOI_FOJFODNFNIH_OFFSET UNITYSDK_OFFSET(0x17C8BA40)
#define MFIGJKDOHOI_GLBAOMBBACM_OFFSET UNITYSDK_OFFSET(0x17C8A5B0)
#define MFIGJKDOHOI_JDEEHBPNCPH_OFFSET UNITYSDK_OFFSET(0x17C8BFE0)
#define MFIGJKDOHOI_NHOCLABMCBP_OFFSET UNITYSDK_OFFSET(0x17C8A3B0)
#define MFIGJKDOHOI_OKIDJEGFFEF_OFFSET UNITYSDK_OFFSET(0x17C8AF00)
#define MFIGJKDOHOI_OLABOONJHMG_1_OFFSET UNITYSDK_OFFSET(0x17C8B4C0)
#define MFIGJKDOHOI_PHKOMPHPILD_1_OFFSET UNITYSDK_OFFSET(0x17C8C120)
#define MFIGJKDOHOI_PHKOMPHPILD_OFFSET UNITYSDK_OFFSET(0x17C8C0D0)

inline static constexpr unsigned int MFIGJKDOHOI_TypeDefinitionIndex = 49561;

	class MFIGJKDOHOI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFIGJKDOHOI_CTOR_OFFSET))(this);
		}

		static ::System::Void FOGILPHIAAL(::UnityEngine::Timeline::TimelineAsset* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Timeline::TimelineAsset*))((::PBYTE)hIl2Cpp + MFIGJKDOHOI_FOGILPHIAAL_OFFSET))(a1);
		}

		static ::UnityEngine::GameObject* NHOCLABMCBP(::RPGTools::Timeline::PerformerMeta* a1, ::UnityEngine::Transform* a2, ::UnityEngine::GameObject* a3)
		{
			return ((::UnityEngine::GameObject*(*)(::RPGTools::Timeline::PerformerMeta*, ::UnityEngine::Transform*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MFIGJKDOHOI_NHOCLABMCBP_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::EDCJJCNBCNL*>* GLBAOMBBACM(::UnityEngine::Timeline::TimelineAsset* a1)
		{
			return ((::Il2CppArray<::EDCJJCNBCNL*>*(*)(::UnityEngine::Timeline::TimelineAsset*))((::PBYTE)hIl2Cpp + MFIGJKDOHOI_GLBAOMBBACM_OFFSET))(a1);
		}

		static ::System::Void OKIDJEGFFEF(::UnityEngine::Playables::PlayableDirector* a1, ::System::String* a2, ::UnityEngine::Object* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::System::String*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + MFIGJKDOHOI_OKIDJEGFFEF_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Timeline::TrackAsset* OLABOONJHMG_1(::UnityEngine::Timeline::TimelineAsset* a1, ::System::String* a2)
		{
			return ((::UnityEngine::Timeline::TrackAsset*(*)(::UnityEngine::Timeline::TimelineAsset*, ::System::String*))((::PBYTE)hIl2Cpp + MFIGJKDOHOI_OLABOONJHMG_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Object* FOJFODNFNIH(::UnityEngine::Timeline::TimelineAsset* a1, ::UnityEngine::Playables::PlayableDirector* a2, ::System::String* a3)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Timeline::TimelineAsset*, ::UnityEngine::Playables::PlayableDirector*, ::System::String*))((::PBYTE)hIl2Cpp + MFIGJKDOHOI_FOJFODNFNIH_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::GenderType JDEEHBPNCPH()
		{
			return ((::RPG::GameCore::GenderType(*)())((::PBYTE)hIl2Cpp + MFIGJKDOHOI_JDEEHBPNCPH_OFFSET))();
		}

		static ::System::Boolean PHKOMPHPILD(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MFIGJKDOHOI_PHKOMPHPILD_OFFSET))(a1);
		}

		static ::System::Boolean PHKOMPHPILD_1(::RPG::GameCore::GenderType a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GenderType, ::System::String*))((::PBYTE)hIl2Cpp + MFIGJKDOHOI_PHKOMPHPILD_1_OFFSET))(a1, a2);
		}

		static ::System::String* ELKKCAIEBAO(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MFIGJKDOHOI_ELKKCAIEBAO_OFFSET))(a1);
		}

	};
