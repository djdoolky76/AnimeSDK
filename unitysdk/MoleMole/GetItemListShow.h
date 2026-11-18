#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"
#include "unitysdk/MoleMole/GetItemListShow_GoBtnData.h"

class HGAJKHIMKJP;
class HJFOMLOOGBE;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GETITEMLISTSHOW_DIRECTSHOW_OFFSET UNITYSDK_OFFSET(0x1A8F8330)
#define MOLEMOLE_GETITEMLISTSHOW_DOPROCESS_OFFSET UNITYSDK_OFFSET(0x1A8F8380)
#define MOLEMOLE_GETITEMLISTSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1A8F7E80)
#define MOLEMOLE_GETITEMLISTSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x1A8F82E0)
#define MOLEMOLE_GETITEMLISTSHOW_SETDETAILANDTTITLE_OFFSET UNITYSDK_OFFSET(0x1A8F8940)
#define MOLEMOLE_GETITEMLISTSHOW_SETGOBTN_1_OFFSET UNITYSDK_OFFSET(0x1A8F8800)
#define MOLEMOLE_GETITEMLISTSHOW_SETGOBTN_OFFSET UNITYSDK_OFFSET(0x1A8F8790)
#define MOLEMOLE_GETITEMLISTSHOW_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x1A8F8280)
#define MOLEMOLE_GETITEMLISTSHOW_SHOWREWARDWINDOW_OFFSET UNITYSDK_OFFSET(0x1A8F83D0)
#define MOLEMOLE_GETITEMLISTSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F7E90)
#define MOLEMOLE_GETITEMLISTSHOW___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x1A8F89A0)

namespace MoleMole
{
	inline static constexpr unsigned int GetItemListShow_TypeDefinitionIndex = 53257;

	class GetItemListShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::String* GainTitle; // 0x28
		::System::String* title; // 0x30
		::HJFOMLOOGBE* _context; // 0x38
		::System::String* detail; // 0x40
		::MoleMole::GetItemListShow_GoBtnData GoData; // 0x48
		::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* items; // 0x68
		::System::Boolean showCustomDetailTitle; // 0x70
		::System::Boolean ShowCustomGainText; // 0x71

		::System::Void _ctor(::HJFOMLOOGBE* context)
		{
			return ((::System::Void(*)(::PVOID, ::HJFOMLOOGBE*))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTSHOW__CTOR_OFFSET))(this, context);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTSHOW_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTSHOW_ONPROCESS_OFFSET))(this);
		}

		::System::Void DirectShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTSHOW_DIRECTSHOW_OFFSET))(this);
		}

		::System::Void DoProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTSHOW_DOPROCESS_OFFSET))(this);
		}

		::System::Void ShowRewardWindow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTSHOW_SHOWREWARDWINDOW_OFFSET))(this);
		}

		::System::Void SetGoBtn(::System::String* key, ::System::Action* callback, ::System::Func_1<::System::Boolean>* showGoPredicate)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTSHOW_SETGOBTN_OFFSET))(this, key, callback, showGoPredicate);
		}

		::System::Void SetGoBtn_1(::System::Int32 accessId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTSHOW_SETGOBTN_1_OFFSET))(this, accessId);
		}

		::System::Void SetDetailAndTtitle(::System::String* title, ::System::String* detail)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTSHOW_SETDETAILANDTTITLE_OFFSET))(this, title, detail);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTSHOW___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
