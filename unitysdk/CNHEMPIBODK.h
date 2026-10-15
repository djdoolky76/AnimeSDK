#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class CreatePlayerTeam; }
namespace RPG::GameCore { class TaskContext; }

#define CNHEMPIBODK_CTOR_OFFSET UNITYSDK_OFFSET(0xDA49270)
#define CNHEMPIBODK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDA49280)
#define CNHEMPIBODK_LCFENHCPIGP_OFFSET UNITYSDK_OFFSET(0xDA49350)
#define CNHEMPIBODK_NMFEHIMCPCM_OFFSET UNITYSDK_OFFSET(0xDA4A7E0)
#define CNHEMPIBODK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDA492C0)
#define CNHEMPIBODK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDA4A730)
#define CNHEMPIBODK_TICK_OFFSET UNITYSDK_OFFSET(0xDA4A780)

inline static constexpr unsigned int CNHEMPIBODK_TypeDefinitionIndex = 58055;

	class CNHEMPIBODK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::CreatePlayerTeam* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreatePlayerTeam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreatePlayerTeam*))((::PBYTE)hIl2Cpp + CNHEMPIBODK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNHEMPIBODK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNHEMPIBODK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNHEMPIBODK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CNHEMPIBODK_TICK_OFFSET))(this, a1);
		}

		::System::Void LCFENHCPIGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNHEMPIBODK_LCFENHCPIGP_OFFSET))(this);
		}

		::System::Void NMFEHIMCPCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNHEMPIBODK_NMFEHIMCPCM_OFFSET))(this);
		}

	};
