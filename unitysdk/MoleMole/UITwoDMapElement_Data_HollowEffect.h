#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JLEKMHHGMEM.h"
#include "unitysdk/MoleMole/UITwoDMapElement_Data.h"
#include "unitysdk/UnityEngine/Vector2.h"

class CEOBNFILPCM;
namespace MoleMole { class UITwoDMapElement_UIController; }
namespace MoleMole { class UIWindowController; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_CREATEUICONTROLLER_OFFSET UNITYSDK_OFFSET(0x1055D990)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_GETICONSIZE_OFFSET UNITYSDK_OFFSET(0x1055D860)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_GETICONTYPE_OFFSET UNITYSDK_OFFSET(0x1055D800)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_GETOFFSETPOSITION_OFFSET UNITYSDK_OFFSET(0x1055D900)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_GET_FORCEACTIVE_OFFSET UNITYSDK_OFFSET(0x1055D720)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_GET_ICONID_OFFSET UNITYSDK_OFFSET(0x1055D850)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_GET_ROOTNAME_OFFSET UNITYSDK_OFFSET(0x1055DAB0)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1055D730)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT___BASE_GETICONSIZE_OFFSET UNITYSDK_OFFSET(0x1055DAF0)

namespace MoleMole
{
	inline static constexpr unsigned int UITwoDMapElement_Data_HollowEffect_TypeDefinitionIndex = 88195;

	class UITwoDMapElement_Data_HollowEffect : public ::MoleMole::UITwoDMapElement_Data
	{
	public:
		::System::Int32 _id; // 0x58
		::System::Int32 _effectType; // 0x5C
		::UnityEngine::Vector2 Offset2; // 0x60
		::UnityEngine::Vector2 Offset; // 0x68

		::System::Void _ctor(::System::Int32 id, ::System::Int32 effectType, ::CEOBNFILPCM* posProvider)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::CEOBNFILPCM*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT__CTOR_OFFSET))(this, id, effectType, posProvider);
		}

		::System::Boolean get_ForceActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_GET_FORCEACTIVE_OFFSET))(this);
		}

		::JLEKMHHGMEM GetIconType()
		{
			return ((::JLEKMHHGMEM(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_GETICONTYPE_OFFSET))(this);
		}

		::System::Int32 get_IconId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_GET_ICONID_OFFSET))(this);
		}

		::System::Single GetIconSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_GETICONSIZE_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetOffsetPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_GETOFFSETPOSITION_OFFSET))(this);
		}

		::MoleMole::UITwoDMapElement_UIController* CreateUIController(::MoleMole::UIWindowController* parent, ::UnityEngine::Transform* root)
		{
			return ((::MoleMole::UITwoDMapElement_UIController*(*)(::PVOID, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_CREATEUICONTROLLER_OFFSET))(this, parent, root);
		}

		::System::String* get_RootName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_GET_ROOTNAME_OFFSET))(this);
		}

		::System::Single __base_GetIconSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT___BASE_GETICONSIZE_OFFSET))(this);
		}
	};
}
