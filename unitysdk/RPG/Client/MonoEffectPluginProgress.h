#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
class LMGBJIFBAAN;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD806AD0)
#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_CTOR_OFFSET UNITYSDK_OFFSET(0xD806CF0)
#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xD806B90)
#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD806A40)
#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xD806C50)
#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xD806CE0)
#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xD806950)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginProgress_TypeDefinitionIndex = 70097;

	class MonoEffectPluginProgress : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::System::Single CurrentProgress; // 0x28
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* ModifyMaterialParams; // 0x30
		::System::Collections::Generic::List_1<::System::Object*>* ModifyTransformParams; // 0x38
		::LMGBJIFBAAN* KADDKEGNCHE; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_CTOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::LMGBJIFBAAN* get_Behavior()
		{
			return ((::LMGBJIFBAAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_GET_BEHAVIOR_OFFSET))(this);
		}

	};
}
