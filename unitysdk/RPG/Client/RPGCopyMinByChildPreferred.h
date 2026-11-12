#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_RPGCOPYMINBYCHILDPREFERRED_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0xE882740)
#define RPG_CLIENT_RPGCOPYMINBYCHILDPREFERRED_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0xE882780)
#define RPG_CLIENT_RPGCOPYMINBYCHILDPREFERRED_CNOAKEJFFJN_OFFSET UNITYSDK_OFFSET(0xE8823A0)
#define RPG_CLIENT_RPGCOPYMINBYCHILDPREFERRED_CTOR_OFFSET UNITYSDK_OFFSET(0xE8827C0)
#define RPG_CLIENT_RPGCOPYMINBYCHILDPREFERRED_GET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0xE882620)
#define RPG_CLIENT_RPGCOPYMINBYCHILDPREFERRED_GET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0xE882670)
#define RPG_CLIENT_RPGCOPYMINBYCHILDPREFERRED_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0xE882530)
#define RPG_CLIENT_RPGCOPYMINBYCHILDPREFERRED_GET_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0xE8826C0)
#define RPG_CLIENT_RPGCOPYMINBYCHILDPREFERRED_GET_MAXWIDTH_OFFSET UNITYSDK_OFFSET(0xE882700)
#define RPG_CLIENT_RPGCOPYMINBYCHILDPREFERRED_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0xE882470)
#define RPG_CLIENT_RPGCOPYMINBYCHILDPREFERRED_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0xE8822E0)
#define RPG_CLIENT_RPGCOPYMINBYCHILDPREFERRED_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0xE8825D0)
#define RPG_CLIENT_RPGCOPYMINBYCHILDPREFERRED_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0xE882580)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGCopyMinByChildPreferred_TypeDefinitionIndex = 74717;

	class RPGCopyMinByChildPreferred : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::System::Boolean CopyMinHeight; // 0x18
		::System::Boolean CopyMinWidth; // 0x19
		::System::Byte _padding0[0x2];
		::System::Single PaddingHeight; // 0x1C
		::System::Single PaddingWidth; // 0x20
		::System::Byte _padding1[0x4];
		::UnityEngine::RectTransform* EKOJGEPBLIL; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCOPYMINBYCHILDPREFERRED_CTOR_OFFSET))(this);
		}

		::System::Single get_minWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCOPYMINBYCHILDPREFERRED_GET_MINWIDTH_OFFSET))(this);
		}

		::System::Single get_minHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCOPYMINBYCHILDPREFERRED_GET_MINHEIGHT_OFFSET))(this);
		}

		::UnityEngine::RectTransform* CNOAKEJFFJN()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCOPYMINBYCHILDPREFERRED_CNOAKEJFFJN_OFFSET))(this);
		}

		::System::Int32 get_layoutPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCOPYMINBYCHILDPREFERRED_GET_LAYOUTPRIORITY_OFFSET))(this);
		}

		::System::Single get_preferredWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCOPYMINBYCHILDPREFERRED_GET_PREFERREDWIDTH_OFFSET))(this);
		}

		::System::Single get_preferredHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCOPYMINBYCHILDPREFERRED_GET_PREFERREDHEIGHT_OFFSET))(this);
		}

		::System::Single get_flexibleHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCOPYMINBYCHILDPREFERRED_GET_FLEXIBLEHEIGHT_OFFSET))(this);
		}

		::System::Single get_flexibleWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCOPYMINBYCHILDPREFERRED_GET_FLEXIBLEWIDTH_OFFSET))(this);
		}

		::System::Single get_maxHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCOPYMINBYCHILDPREFERRED_GET_MAXHEIGHT_OFFSET))(this);
		}

		::System::Single get_maxWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCOPYMINBYCHILDPREFERRED_GET_MAXWIDTH_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCOPYMINBYCHILDPREFERRED_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCOPYMINBYCHILDPREFERRED_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(this);
		}

	};
}
