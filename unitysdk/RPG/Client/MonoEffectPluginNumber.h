#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
class PGAMAPPLPKF;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOEFFECTPLUGINNUMBER_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD8028D0)
#define RPG_CLIENT_MONOEFFECTPLUGINNUMBER_CTOR_OFFSET UNITYSDK_OFFSET(0xD802AD0)
#define RPG_CLIENT_MONOEFFECTPLUGINNUMBER_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xD802A00)
#define RPG_CLIENT_MONOEFFECTPLUGINNUMBER_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD802890)
#define RPG_CLIENT_MONOEFFECTPLUGINNUMBER_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xD802AC0)
#define RPG_CLIENT_MONOEFFECTPLUGINNUMBER_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xD802830)

namespace RPG::Client
{
	class MonoEffectPluginNumber : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* DigitDatas; // 0x28
		::PGAMAPPLPKF* KADDKEGNCHE; // 0x30
		// static const ::System::Object LBHPFHJNMJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINNUMBER_CTOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINNUMBER_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINNUMBER_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINNUMBER_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINNUMBER_DESTROYPLUGIN_OFFSET))(this);
		}

		::PGAMAPPLPKF* get_Behavior()
		{
			return ((::PGAMAPPLPKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINNUMBER_GET_BEHAVIOR_OFFSET))(this);
		}

	};
}
