#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JLEKMHHGMEM.h"
#include "unitysdk/MoleMole/UITwoDMapElement_Data.h"
#include "unitysdk/UnityEngine/Vector2.h"

class CEOBNFILPCM;
class GLNLDCFEGNN;
namespace MoleMole { class UITwoDMapElement_UIController; }
namespace MoleMole { class UIWindowController; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UITWODMAPELEMENT_DATA_STREETICON_CREATEUICONTROLLER_OFFSET UNITYSDK_OFFSET(0x14E1B830)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_STREETICON_GETICONTYPE_OFFSET UNITYSDK_OFFSET(0x14E1B730)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_STREETICON_GETOFFSETPOSITION_OFFSET UNITYSDK_OFFSET(0x14E1B7A0)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_STREETICON_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x14E1B530)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_STREETICON_GET_ICONID_OFFSET UNITYSDK_OFFSET(0x14E1B780)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_STREETICON_GET_ROOTNAME_OFFSET UNITYSDK_OFFSET(0x14E1B900)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_STREETICON_SHOWPROGRESS_OFFSET UNITYSDK_OFFSET(0x14E1B940)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_STREETICON__CTOR_OFFSET UNITYSDK_OFFSET(0x14E1B540)

namespace MoleMole
{
	inline static constexpr unsigned int UITwoDMapElement_Data_StreetIcon_TypeDefinitionIndex = 64004;

	class UITwoDMapElement_Data_StreetIcon : public ::MoleMole::UITwoDMapElement_Data
	{
	public:
		::System::Action_2<::MoleMole::UITwoDMapElement_Data_StreetIcon*, ::System::Single>* OnScrollTo; // 0x58
		::GLNLDCFEGNN* _config; // 0x60
		::UnityEngine::Vector2 _offset; // 0x68

		::System::Void _ctor(::System::Int32 streetId, ::System::Single rate, ::CEOBNFILPCM* posProvider, ::System::Action_2<::MoleMole::UITwoDMapElement_Data_StreetIcon*, ::System::Single>* onScrollTo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::CEOBNFILPCM*, ::System::Action_2<::MoleMole::UITwoDMapElement_Data_StreetIcon*, ::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_STREETICON__CTOR_OFFSET))(this, streetId, rate, posProvider, onScrollTo);
		}

		::GLNLDCFEGNN* get_Config()
		{
			return ((::GLNLDCFEGNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_STREETICON_GET_CONFIG_OFFSET))(this);
		}

		::JLEKMHHGMEM GetIconType()
		{
			return ((::JLEKMHHGMEM(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_STREETICON_GETICONTYPE_OFFSET))(this);
		}

		::System::Int32 get_IconId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_STREETICON_GET_ICONID_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetOffsetPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_STREETICON_GETOFFSETPOSITION_OFFSET))(this);
		}

		::MoleMole::UITwoDMapElement_UIController* CreateUIController(::MoleMole::UIWindowController* parent, ::UnityEngine::Transform* root)
		{
			return ((::MoleMole::UITwoDMapElement_UIController*(*)(::PVOID, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_STREETICON_CREATEUICONTROLLER_OFFSET))(this, parent, root);
		}

		::System::String* get_RootName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_STREETICON_GET_ROOTNAME_OFFSET))(this);
		}

		::System::Boolean ShowProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_STREETICON_SHOWPROGRESS_OFFSET))(this);
		}
	};
}
