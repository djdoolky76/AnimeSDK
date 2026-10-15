#pragma once
#include "unitysdk/unitysdk.h"
class EHBJBLKFBEA;
class HIKAAGHELPH;
class JJLLMEENHJC;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTSHOPITEMCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xE97E150)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTSHOPITEMCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE97D070)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTSHOPITEMCONTROL__POPULATING_OFFSET UNITYSDK_OFFSET(0xE97DD90)

namespace Sofa::Demo::GridFight
{
	inline static constexpr unsigned int GridFightShopItemControl_TypeDefinitionIndex = 49712;

	class GridFightShopItemControl
	{
	public:
		::UnityEngine::RectTransform* _EmptyRoot; // 0x70
		::UnityEngine::RectTransform* _RoleRoot; // 0x78
		::RPG::Client::LocalizedText* _NameText; // 0x80
		::UnityEngine::UI::Image* _AvatarImage; // 0x88
		::RPG::Client::AnimatorButton* _BuyButton; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTSHOPITEMCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTSHOPITEMCONTROL__BINDING_OFFSET))(this, a1);
		}

		::System::Void _Populating(::JJLLMEENHJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJLLMEENHJC*))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTSHOPITEMCONTROL__POPULATING_OFFSET))(this, a1);
		}

	};
}
