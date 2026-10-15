#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
namespace System { class Object; }
namespace UnityEngine { class Component; }

#define RPG_CLIENT_MONOEFFECTPLUGINVIEWMODECONTROL_CBMHAHEIGDM_OFFSET UNITYSDK_OFFSET(0xD8104E0)
#define RPG_CLIENT_MONOEFFECTPLUGINVIEWMODECONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD8109B0)
#define RPG_CLIENT_MONOEFFECTPLUGINVIEWMODECONTROL_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD810370)
#define RPG_CLIENT_MONOEFFECTPLUGINVIEWMODECONTROL_GJGCJFJMKCL_OFFSET UNITYSDK_OFFSET(0xD8107B0)
#define RPG_CLIENT_MONOEFFECTPLUGINVIEWMODECONTROL_JFNDBOOCBCJ_OFFSET UNITYSDK_OFFSET(0xD8106F0)
#define RPG_CLIENT_MONOEFFECTPLUGINVIEWMODECONTROL_MANUALLYINVOKE_OFFSET UNITYSDK_OFFSET(0xD810490)
#define RPG_CLIENT_MONOEFFECTPLUGINVIEWMODECONTROL_PGLIGPHKLEJ_OFFSET UNITYSDK_OFFSET(0xD810750)
#define RPG_CLIENT_MONOEFFECTPLUGINVIEWMODECONTROL_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xD810250)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginViewModeControl_TypeDefinitionIndex = 70017;

	class MonoEffectPluginViewModeControl : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::System::Boolean ONOBOHPOBEE; // 0x28
		::System::Byte _padding0[0x7];
		::Il2CppArray<::UnityEngine::Component*>* _PluginList; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVIEWMODECONTROL_CTOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVIEWMODECONTROL_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVIEWMODECONTROL_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void ManuallyInvoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVIEWMODECONTROL_MANUALLYINVOKE_OFFSET))(this);
		}

		::System::Void JFNDBOOCBCJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVIEWMODECONTROL_JFNDBOOCBCJ_OFFSET))(this, a1);
		}

		::System::Void PGLIGPHKLEJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVIEWMODECONTROL_PGLIGPHKLEJ_OFFSET))(this, a1);
		}

		::System::Void CBMHAHEIGDM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVIEWMODECONTROL_CBMHAHEIGDM_OFFSET))(this, a1);
		}

		::System::Void GJGCJFJMKCL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVIEWMODECONTROL_GJGCJFJMKCL_OFFSET))(this);
		}

	};
}
