#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }

#define RPG_CLIENT_MATERIALSWITCHMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xD5E0490)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialSwitchMonoPlugin_TypeDefinitionIndex = 70724;

	class MaterialSwitchMonoPlugin
	{
	public:
		::System::Int32 TargetMatBlockAmount; // 0x30
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Object*>* TargetMatBlocks; // 0x38
		::System::Int32 MatConfigAmount; // 0x40
		::System::Byte _padding1[0x4];
		::Il2CppArray<::System::Object*>* MatPathConfigs; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSWITCHMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}
