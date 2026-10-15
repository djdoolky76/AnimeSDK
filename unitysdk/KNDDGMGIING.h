#pragma once
#include "unitysdk/unitysdk.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitEntityEvent; }
namespace System { class String; }

#define KNDDGMGIING_CTOR_OFFSET UNITYSDK_OFFSET(0xB579220)
#define KNDDGMGIING_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5795D0)
#define KNDDGMGIING_FDNOADPOCHD_OFFSET UNITYSDK_OFFSET(0xB5799F0)
#define KNDDGMGIING_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0xB5798E0)
#define KNDDGMGIING_LIBHFBCFACP_OFFSET UNITYSDK_OFFSET(0xB5797B0)
#define KNDDGMGIING__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB579620)
#define KNDDGMGIING__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB579810)

inline static constexpr unsigned int KNDDGMGIING_TypeDefinitionIndex = 52524;

	class KNDDGMGIING
	{
	public:
		::System::String* FGMKCOANOOK; // 0x68
		::RPG::GameCore::GameEntity* MOOADPLGAIH; // 0x70
		::System::UInt32 JGGDKOCIEGH; // 0x78
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitEntityEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitEntityEvent*))((::PBYTE)hIl2Cpp + KNDDGMGIING_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNDDGMGIING_DISPOSE_OFFSET))(this);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNDDGMGIING__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNDDGMGIING__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void ILEMLGEGLCC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + KNDDGMGIING_ILEMLGEGLCC_OFFSET))(this, a1);
		}

		::System::Boolean FDNOADPOCHD(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KNDDGMGIING_FDNOADPOCHD_OFFSET))(this, a1);
		}

		::System::Void LIBHFBCFACP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNDDGMGIING_LIBHFBCFACP_OFFSET))(this);
		}

	};
