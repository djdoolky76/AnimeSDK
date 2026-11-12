#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_PREDOWNLOADMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE6A3E80)
#define RPG_CLIENT_PREDOWNLOADMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE6A3EB0)
#define RPG_CLIENT_PREDOWNLOADMANAGER___C___CTOR_B__12_0_OFFSET UNITYSDK_OFFSET(0xE6A3EC0)

namespace RPG::Client
{
	inline static constexpr unsigned int PreDownloadManager___c_TypeDefinitionIndex = 70251;

	class PreDownloadManager___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__12_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x4A050);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x4A058);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADMANAGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADMANAGER___C_CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADMANAGER___C___CTOR_B__12_0_OFFSET))(this);
		}

	};
}
