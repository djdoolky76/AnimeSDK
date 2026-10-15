#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace RPG::Client { class CameraNormalConfigTemplate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAMERANORMALCONFIGTEMPLATELIST_CTOR_OFFSET UNITYSDK_OFFSET(0xC938DC0)
#define RPG_CLIENT_CAMERANORMALCONFIGTEMPLATELIST_PBOLKOGPJJG_OFFSET UNITYSDK_OFFSET(0xC930D10)

namespace RPG::Client
{
	class CameraNormalConfigTemplateList : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::CameraNormalConfigTemplate*>* NormalConfigTemplateList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERANORMALCONFIGTEMPLATELIST_CTOR_OFFSET))(this);
		}

		::RPG::Client::CameraNormalConfigTemplate* PBOLKOGPJJG(::System::String* a1)
		{
			return ((::RPG::Client::CameraNormalConfigTemplate*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERANORMALCONFIGTEMPLATELIST_PBOLKOGPJJG_OFFSET))(this, a1);
		}

	};
}
