#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_CHECKITEMFINISHQUEST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B97D0)
#define RPG_CLIENT_CHECKITEMFINISHQUEST_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x1D7B97F0)
#define RPG_CLIENT_CHECKITEMFINISHQUEST_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D7B9930)
#define RPG_CLIENT_CHECKITEMFINISHQUEST__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x1D7B9880)

namespace RPG::Client
{
	inline static constexpr unsigned int CheckItemFinishQuest_TypeDefinitionIndex = 61164;

	class CheckItemFinishQuest : public ::RPG::Client::SyncCheckItemBase
	{
	public:
		::System::UInt32 _TargetQuestID; // 0x10
		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMFINISHQUEST_CTOR_OFFSET))(this, a1);
		}

		::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMFINISHQUEST_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
		}

		::System::Boolean _DoCheckImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMFINISHQUEST__DOCHECKIMPL_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMFINISHQUEST_TOSTRING_OFFSET))(this);
		}

	};
}
