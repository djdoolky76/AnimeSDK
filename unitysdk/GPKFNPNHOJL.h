#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetMusicVisualRenderEnable; }
namespace RPG::GameCore { class TaskContext; }

#define GPKFNPNHOJL_CTOR_OFFSET UNITYSDK_OFFSET(0x15B5C430)
#define GPKFNPNHOJL_HNEECBMJEDD_OFFSET UNITYSDK_OFFSET(0x15B5C5E0)
#define GPKFNPNHOJL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B5C460)

inline static constexpr unsigned int GPKFNPNHOJL_TypeDefinitionIndex = 53248;

	class GPKFNPNHOJL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMusicVisualRenderEnable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMusicVisualRenderEnable*))((::PBYTE)hIl2Cpp + GPKFNPNHOJL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPKFNPNHOJL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void HNEECBMJEDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPKFNPNHOJL_HNEECBMJEDD_OFFSET))(this);
		}

	};
