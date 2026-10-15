#pragma once
#include "unitysdk/unitysdk.h"
class NJFHGODIBPN;
class NJFHGODIBPN_BNDKBMLLKBO;
namespace RPG::GameCore { class ST_Main_PlayInteract; }
namespace RPG::GameCore { class TaskContext; }

#define CHGEGDNBEII_AGKNJDPHJEG_OFFSET UNITYSDK_OFFSET(0xCF48F20)
#define CHGEGDNBEII_CTOR_OFFSET UNITYSDK_OFFSET(0xCF48A60)
#define CHGEGDNBEII_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF48B20)
#define CHGEGDNBEII_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF48BB0)
#define CHGEGDNBEII_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCF48E80)

inline static constexpr unsigned int CHGEGDNBEII_TypeDefinitionIndex = 52218;

	class CHGEGDNBEII
	{
	public:
		::NJFHGODIBPN_BNDKBMLLKBO* IAHKANFGGDM; // 0x28
		::NJFHGODIBPN* CPIIOIPAAKK; // 0x30
		::System::Boolean IDENJCNNPLA; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_PlayInteract* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_PlayInteract*))((::PBYTE)hIl2Cpp + CHGEGDNBEII_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGEGDNBEII_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGEGDNBEII_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGEGDNBEII_ONTASKRESET_OFFSET))(this);
		}

		::System::Void AGKNJDPHJEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGEGDNBEII_AGKNJDPHJEG_OFFSET))(this);
		}

	};
