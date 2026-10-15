#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/WorldType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class FeatureData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_IDENTITYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD33C730)
#define RPG_CLIENT_IDENTITYDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xD33C6F0)

namespace RPG::Client
{
	class IdentityData : public ::System::Object
	{
	public:
		::System::String* IdentityID; // 0x10
		::RPG::GameCore::WorldType World; // 0x18
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::RPG::Client::FeatureData*>* FeatureDatas; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IDENTITYDATA_CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IDENTITYDATA_TOSTRING_OFFSET))(this);
		}

	};
}
