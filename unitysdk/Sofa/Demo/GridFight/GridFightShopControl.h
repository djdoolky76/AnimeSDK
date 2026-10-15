#pragma once
#include "unitysdk/unitysdk.h"
class EMHMHPFOBKI;
class HIKAAGHELPH;
class JJLLMEENHJC;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class ListView; }
namespace UnityEngine { class Animation; }

#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTSHOPCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xE9729F0)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTSHOPCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE972180)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTSHOPCONTROL__POPULATING_OFFSET UNITYSDK_OFFSET(0xE972610)

namespace Sofa::Demo::GridFight
{
	inline static constexpr unsigned int GridFightShopControl_TypeDefinitionIndex = 49709;

	class GridFightShopControl
	{
	public:
		::UnityEngine::Animation* Animation; // 0x70
		::RPG::Client::ListView* ItemList; // 0x78
		::RPG::Client::AnimatorButton* RefreshBtn; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTSHOPCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTSHOPCONTROL__BINDING_OFFSET))(this, a1);
		}

		::System::Void _Populating(::JJLLMEENHJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJLLMEENHJC*))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTSHOPCONTROL__POPULATING_OFFSET))(this, a1);
		}

	};
}
