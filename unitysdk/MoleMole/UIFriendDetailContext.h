#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDEHNBMOHMG.h"
#include "unitysdk/EFIFKJHLKCF.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class GBINEPNHKKO;
class IDGDIFDMIDP;
class JGBMOOJHMBF;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_CIRCLEDATA_OFFSET UNITYSDK_OFFSET(0x178382C0)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_CIRCLEMEMBERDATA_OFFSET UNITYSDK_OFFSET(0x178382E0)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_EXTRAREPORTTYPES_OFFSET UNITYSDK_OFFSET(0x17838320)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_IDENTITY_OFFSET UNITYSDK_OFFSET(0x17838280)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_INFO_OFFSET UNITYSDK_OFFSET(0x17838240)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_ISREALPLAYER_OFFSET UNITYSDK_OFFSET(0x178382A0)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_MODULEID_OFFSET UNITYSDK_OFFSET(0x17838260)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_OVERRIDEREPORTBTNACTION_OFFSET UNITYSDK_OFFSET(0x17838300)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_SETUPCIRCLEPARAMS_OFFSET UNITYSDK_OFFSET(0x178383B0)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_SETUPREPORTPARAMS_OFFSET UNITYSDK_OFFSET(0x17838410)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_CIRCLEDATA_OFFSET UNITYSDK_OFFSET(0x178382D0)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_CIRCLEMEMBERDATA_OFFSET UNITYSDK_OFFSET(0x178382F0)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_EXTRAREPORTTYPES_OFFSET UNITYSDK_OFFSET(0x17838330)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_IDENTITY_OFFSET UNITYSDK_OFFSET(0x17838290)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_INFO_OFFSET UNITYSDK_OFFSET(0x17838250)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_ISREALPLAYER_OFFSET UNITYSDK_OFFSET(0x178382B0)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_MODULEID_OFFSET UNITYSDK_OFFSET(0x17838270)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_OVERRIDEREPORTBTNACTION_OFFSET UNITYSDK_OFFSET(0x17838310)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17838340)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendDetailContext_TypeDefinitionIndex = 43936;

	class UIFriendDetailContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::UnityEngine::Events::UnityAction* _overrideReportBtnAction_k__BackingField; // 0x28
		::GBINEPNHKKO* _CircleMemberData_k__BackingField; // 0x30
		::IDGDIFDMIDP* _CircleData_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::BDEHNBMOHMG>* _extraReportTypes_k__BackingField; // 0x40
		::JGBMOOJHMBF* _Info_k__BackingField; // 0x48
		::EFIFKJHLKCF _Identity_k__BackingField; // 0x50
		::System::Int32 _ModuleID_k__BackingField; // 0x54
		::System::Boolean _isRealPlayer_k__BackingField; // 0x58

		::System::Void _ctor(::JGBMOOJHMBF* playerInfo, ::System::Int32 ModuleID, ::EFIFKJHLKCF identityID, ::System::Boolean isRealPlayer)
		{
			return ((::System::Void(*)(::PVOID, ::JGBMOOJHMBF*, ::System::Int32, ::EFIFKJHLKCF, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT__CTOR_OFFSET))(this, playerInfo, ModuleID, identityID, isRealPlayer);
		}

		::JGBMOOJHMBF* get_Info()
		{
			return ((::JGBMOOJHMBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_INFO_OFFSET))(this);
		}

		::System::Void set_Info(::JGBMOOJHMBF* value)
		{
			return ((::System::Void(*)(::PVOID, ::JGBMOOJHMBF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_INFO_OFFSET))(this, value);
		}

		::System::Int32 get_ModuleID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_MODULEID_OFFSET))(this);
		}

		::System::Void set_ModuleID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_MODULEID_OFFSET))(this, value);
		}

		::EFIFKJHLKCF get_Identity()
		{
			return ((::EFIFKJHLKCF(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_IDENTITY_OFFSET))(this);
		}

		::System::Void set_Identity(::EFIFKJHLKCF value)
		{
			return ((::System::Void(*)(::PVOID, ::EFIFKJHLKCF))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_IDENTITY_OFFSET))(this, value);
		}

		::System::Boolean get_isRealPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_ISREALPLAYER_OFFSET))(this);
		}

		::System::Void set_isRealPlayer(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_ISREALPLAYER_OFFSET))(this, value);
		}

		::IDGDIFDMIDP* get_CircleData()
		{
			return ((::IDGDIFDMIDP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_CIRCLEDATA_OFFSET))(this);
		}

		::System::Void set_CircleData(::IDGDIFDMIDP* value)
		{
			return ((::System::Void(*)(::PVOID, ::IDGDIFDMIDP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_CIRCLEDATA_OFFSET))(this, value);
		}

		::GBINEPNHKKO* get_CircleMemberData()
		{
			return ((::GBINEPNHKKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_CIRCLEMEMBERDATA_OFFSET))(this);
		}

		::System::Void set_CircleMemberData(::GBINEPNHKKO* value)
		{
			return ((::System::Void(*)(::PVOID, ::GBINEPNHKKO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_CIRCLEMEMBERDATA_OFFSET))(this, value);
		}

		::UnityEngine::Events::UnityAction* get_overrideReportBtnAction()
		{
			return ((::UnityEngine::Events::UnityAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_OVERRIDEREPORTBTNACTION_OFFSET))(this);
		}

		::System::Void set_overrideReportBtnAction(::UnityEngine::Events::UnityAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_OVERRIDEREPORTBTNACTION_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::BDEHNBMOHMG>* get_extraReportTypes()
		{
			return ((::System::Collections::Generic::List_1<::BDEHNBMOHMG>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_EXTRAREPORTTYPES_OFFSET))(this);
		}

		::System::Void set_extraReportTypes(::System::Collections::Generic::List_1<::BDEHNBMOHMG>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::BDEHNBMOHMG>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_EXTRAREPORTTYPES_OFFSET))(this, value);
		}

		::System::Void SetupCircleParams(::IDGDIFDMIDP* circleDataExt, ::GBINEPNHKKO* memberData)
		{
			return ((::System::Void(*)(::PVOID, ::IDGDIFDMIDP*, ::GBINEPNHKKO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_SETUPCIRCLEPARAMS_OFFSET))(this, circleDataExt, memberData);
		}

		::System::Void SetupReportParams(::UnityEngine::Events::UnityAction* overrideReportBtnAction, ::System::Collections::Generic::List_1<::BDEHNBMOHMG>* extraReportTypes)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*, ::System::Collections::Generic::List_1<::BDEHNBMOHMG>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_SETUPREPORTPARAMS_OFFSET))(this, overrideReportBtnAction, extraReportTypes);
		}
	};
}
