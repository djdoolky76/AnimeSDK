#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GNLHBLPLAOA.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class FBHPDPBIGPK;
class IDGDIFDMIDP;
class OFOAFKKLMFN;

#define MOLEMOLE_UIFRIENDCHATITEMCONTEXT_GET_CHATTYPE_OFFSET UNITYSDK_OFFSET(0x17093ED0)
#define MOLEMOLE_UIFRIENDCHATITEMCONTEXT_GET_CIRCLEDATA_OFFSET UNITYSDK_OFFSET(0x17093F10)
#define MOLEMOLE_UIFRIENDCHATITEMCONTEXT_GET_INFO_OFFSET UNITYSDK_OFFSET(0x17093EF0)
#define MOLEMOLE_UIFRIENDCHATITEMCONTEXT_SET_CHATTYPE_OFFSET UNITYSDK_OFFSET(0x17093EE0)
#define MOLEMOLE_UIFRIENDCHATITEMCONTEXT_SET_CIRCLEDATA_OFFSET UNITYSDK_OFFSET(0x17093F20)
#define MOLEMOLE_UIFRIENDCHATITEMCONTEXT_SET_INFO_OFFSET UNITYSDK_OFFSET(0x17093F00)
#define MOLEMOLE_UIFRIENDCHATITEMCONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17093F90)
#define MOLEMOLE_UIFRIENDCHATITEMCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17093F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatItemContext_TypeDefinitionIndex = 69824;

	class UIFriendChatItemContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::FBHPDPBIGPK* _info_k__BackingField; // 0x28
		::IDGDIFDMIDP* _circleData_k__BackingField; // 0x30
		::GNLHBLPLAOA _chatType_k__BackingField; // 0x38

		::System::Void _ctor(::FBHPDPBIGPK* info)
		{
			return ((::System::Void(*)(::PVOID, ::FBHPDPBIGPK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATITEMCONTEXT__CTOR_OFFSET))(this, info);
		}

		::System::Void _ctor_1(::OFOAFKKLMFN* circleData)
		{
			return ((::System::Void(*)(::PVOID, ::OFOAFKKLMFN*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATITEMCONTEXT__CTOR_1_OFFSET))(this, circleData);
		}

		::GNLHBLPLAOA get_chatType()
		{
			return ((::GNLHBLPLAOA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATITEMCONTEXT_GET_CHATTYPE_OFFSET))(this);
		}

		::System::Void set_chatType(::GNLHBLPLAOA value)
		{
			return ((::System::Void(*)(::PVOID, ::GNLHBLPLAOA))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATITEMCONTEXT_SET_CHATTYPE_OFFSET))(this, value);
		}

		::FBHPDPBIGPK* get_info()
		{
			return ((::FBHPDPBIGPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATITEMCONTEXT_GET_INFO_OFFSET))(this);
		}

		::System::Void set_info(::FBHPDPBIGPK* value)
		{
			return ((::System::Void(*)(::PVOID, ::FBHPDPBIGPK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATITEMCONTEXT_SET_INFO_OFFSET))(this, value);
		}

		::IDGDIFDMIDP* get_circleData()
		{
			return ((::IDGDIFDMIDP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATITEMCONTEXT_GET_CIRCLEDATA_OFFSET))(this);
		}

		::System::Void set_circleData(::IDGDIFDMIDP* value)
		{
			return ((::System::Void(*)(::PVOID, ::IDGDIFDMIDP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATITEMCONTEXT_SET_CIRCLEDATA_OFFSET))(this, value);
		}
	};
}
