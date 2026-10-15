#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace RPG::Client { class PhotoGraphFilterConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PHOTOGRAPHFILTERCONFIGASSET_CTOR_OFFSET UNITYSDK_OFFSET(0xDAFAC40)

namespace RPG::Client
{
	class PhotoGraphFilterConfigAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphFilterConfig*>* Configs; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERCONFIGASSET_CTOR_OFFSET))(this);
		}

	};
}
