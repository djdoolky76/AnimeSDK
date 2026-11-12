#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_DEVACCOUNTMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD56A2C0)
#define RPG_CLIENT_DEVACCOUNTMODEL_ISACCOUNTUIDVALID_OFFSET UNITYSDK_OFFSET(0xD56A330)
#define RPG_CLIENT_DEVACCOUNTMODEL_ISUIDVALID_OFFSET UNITYSDK_OFFSET(0xD56A2E0)

namespace RPG::Client
{
	inline static constexpr unsigned int DevAccountModel_TypeDefinitionIndex = 62461;

	class DevAccountModel : public ::System::Object
	{
	public:
		::System::String* AccountUid; // 0x10
		::System::UInt32 Uid; // 0x18
		// static const ::System::String* DevAccoundDevice; // 0x0
		// static const ::System::Object DevAccountChannelId; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEVACCOUNTMODEL_CTOR_OFFSET))(this);
		}

		::System::Boolean IsUidValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEVACCOUNTMODEL_ISUIDVALID_OFFSET))(this);
		}

		::System::Boolean IsAccountUidValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEVACCOUNTMODEL_ISACCOUNTUIDVALID_OFFSET))(this);
		}

	};
}
