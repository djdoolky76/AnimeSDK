#pragma once
#include "unitysdk/unitysdk.h"
class ADHNHMOBGPI;
class HIKAAGHELPH;
class JJLLMEENHJC;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class MonoUIColorSwitcher; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARICONITEMCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xE971D60)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARICONITEMCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE970770)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARICONITEMCONTROL__POPULATING_OFFSET UNITYSDK_OFFSET(0xE9716D0)

namespace Sofa::Demo::GridFight
{
	inline static constexpr unsigned int GridFightAvatarIconItemControl_TypeDefinitionIndex = 49706;

	class GridFightAvatarIconItemControl
	{
	public:
		::UnityEngine::Animation* _Animation; // 0x70
		::UnityEngine::UI::Image* _AvatarImage; // 0x78
		::RPG::Client::AnimatorButton* _RootButton; // 0x80
		::RPG::Client::MonoUIColorSwitcher* _RarityColorSwitcher; // 0x88
		::UnityEngine::RectTransform* _UnreleasedRoot; // 0x90
		::UnityEngine::RectTransform* _UnreleasedTagRoot; // 0x98
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* _StarRanks; // 0xA0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARICONITEMCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARICONITEMCONTROL__BINDING_OFFSET))(this, a1);
		}

		::System::Void _Populating(::JJLLMEENHJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJLLMEENHJC*))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARICONITEMCONTROL__POPULATING_OFFSET))(this, a1);
		}

	};
}
