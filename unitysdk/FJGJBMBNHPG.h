#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class PlayMessage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define FJGJBMBNHPG_CTOR_OFFSET UNITYSDK_OFFSET(0x157B7EF0)
#define FJGJBMBNHPG_DHDOFJLPGDC_OFFSET UNITYSDK_OFFSET(0x157B8060)
#define FJGJBMBNHPG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157B7F00)
#define FJGJBMBNHPG_IPKNOCPECCK_OFFSET UNITYSDK_OFFSET(0x157B8320)
#define FJGJBMBNHPG_OALDKNMMFCD_OFFSET UNITYSDK_OFFSET(0x157B8250)
#define FJGJBMBNHPG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157B7F40)
#define FJGJBMBNHPG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x157B81A0)
#define FJGJBMBNHPG_TICK_OFFSET UNITYSDK_OFFSET(0x157B81F0)

inline static constexpr unsigned int FJGJBMBNHPG_TypeDefinitionIndex = 58268;

	class FJGJBMBNHPG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::PlayMessage* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayMessage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayMessage*))((::PBYTE)hIl2Cpp + FJGJBMBNHPG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGJBMBNHPG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGJBMBNHPG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGJBMBNHPG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FJGJBMBNHPG_TICK_OFFSET))(this, a1);
		}

		::System::Void DHDOFJLPGDC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FJGJBMBNHPG_DHDOFJLPGDC_OFFSET))(this, a1);
		}

		::System::Void OALDKNMMFCD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJGJBMBNHPG_OALDKNMMFCD_OFFSET))(this, a1);
		}

		::System::Void IPKNOCPECCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGJBMBNHPG_IPKNOCPECCK_OFFSET))(this);
		}

	};
