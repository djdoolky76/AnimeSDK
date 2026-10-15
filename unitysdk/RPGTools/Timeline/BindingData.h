#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/BindInfo.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
class ELDKEKGOENH;
namespace RPGTools::Timeline { class ArchiveAsset; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define RPGTOOLS_TIMELINE_BINDINGDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE8BB6D0)
#define RPGTOOLS_TIMELINE_BINDINGDATA_PFMNODOHKGB_OFFSET UNITYSDK_OFFSET(0xE8BB470)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int BindingData_TypeDefinitionIndex = 48510;

	class BindingData : public ::UnityEngine::ScriptableObject
	{
	public:
		::Il2CppArray<::RPGTools::Timeline::ArchiveAsset*>* ArchiveArray; // 0x18
		::Il2CppArray<::RPGTools::Timeline::BindInfo>* BindInfoArray; // 0x20
		// static const ::System::String* DEFAULT_NAME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BINDINGDATA_CTOR_OFFSET))(this);
		}

		::System::Void PFMNODOHKGB(::UnityEngine::Playables::PlayableDirector* a1, ::ELDKEKGOENH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::ELDKEKGOENH*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BINDINGDATA_PFMNODOHKGB_OFFSET))(this, a1, a2);
		}

	};
}
