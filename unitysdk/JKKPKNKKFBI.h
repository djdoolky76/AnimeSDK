#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define JKKPKNKKFBI_CTOR_OFFSET UNITYSDK_OFFSET(0xB219B70)
#define JKKPKNKKFBI_OKJFHINKGOM_OFFSET UNITYSDK_OFFSET(0xB219800)
#define JKKPKNKKFBI_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xB2197A0)
#define JKKPKNKKFBI_OOGBIKEGJPH_OFFSET UNITYSDK_OFFSET(0xB2199B0)

inline static constexpr unsigned int JKKPKNKKFBI_TypeDefinitionIndex = 48790;

	class JKKPKNKKFBI : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKPKNKKFBI_CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + JKKPKNKKFBI_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void OOGBIKEGJPH(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>*))((::PBYTE)hIl2Cpp + JKKPKNKKFBI_OOGBIKEGJPH_OFFSET))(this, a1);
		}

		::System::Void OKJFHINKGOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKPKNKKFBI_OKJFHINKGOM_OFFSET))(this);
		}

	};
