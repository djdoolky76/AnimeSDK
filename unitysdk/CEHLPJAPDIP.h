#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"
class KAKADGHNMFK;

#define CEHLPJAPDIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8DD690)

inline static constexpr unsigned int CEHLPJAPDIP_TypeDefinitionIndex = 41938;

	class CEHLPJAPDIP : public ::System::Object
	{
	public:
		::System::Int32 IPIFLCJBDEE; // 0x10
		::System::Int32 PDKOHBJEPAD; // 0x14
		::System::UInt32 PHFMCACHFIJ; // 0x18
		::System::UInt32 PJNNPOKJEFD; // 0x1C
		::RPG::GameCore::ChimeraDuelTeamType JCDIEKGKCPP; // 0x20
		::System::Int32 LFPBDLMKCMA; // 0x24
		::System::Int32 NHPMMJEMAHJ; // 0x28
		::System::Int32 FDNMABMCBKI; // 0x2C
		::System::UInt32 CMKLGECICPG; // 0x30
		::System::Int32 AHGIENEMKFI; // 0x34
		::System::Int32 POJIJMMGAFB; // 0x38
		::System::UInt32 NBFOFKGNNIO; // 0x3C
		::System::UInt32 AAGKEBFHLMC; // 0x40
		::System::Void _ctor(::KAKADGHNMFK* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*, ::System::Int32))((::PBYTE)hIl2Cpp + CEHLPJAPDIP_CTOR_OFFSET))(this, a1, a2);
		}

	};
