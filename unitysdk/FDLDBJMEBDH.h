#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
namespace UnityEngine { class Transform; }

#define FDLDBJMEBDH_DMOIEHPEMBM_OFFSET UNITYSDK_OFFSET(0x3C31860)

inline static constexpr unsigned int FDLDBJMEBDH_TypeDefinitionIndex = 43431;

	struct alignas(8) FDLDBJMEBDH
	{
		::System::Boolean PPIIMDCGAMO; // 0x10
		::System::Byte _padding0[0x3];
		::UnityEngine::RaycastHit JFHOOMGGKLJ; // 0x14
		::System::Boolean GMHNHHHDIOK; // 0x44
		::System::Boolean AJBBKEHLMBD; // 0x45
		::System::Boolean GJKGCDCOBIM; // 0x46
		::System::Boolean MEBPFNGLNNE; // 0x47
		::System::Boolean NOOCCHOLHEJ; // 0x48
		::System::Boolean EMMNBDPGJOL; // 0x49
		::System::Boolean NHNLKILBBOC; // 0x4A
		::System::Byte _padding1[0x1];
		::System::Int32 EEEAGGPNDPD; // 0x4C
		::UnityEngine::Transform* LFKOMOMIAHH; // 0x50
		::System::Boolean LFACMDGNEGH; // 0x58
		::System::Boolean HEBMKEBAHAP; // 0x59
		::System::Byte _padding2[0x2];
		::System::Single DCOIEPOIEFN; // 0x5C
		::System::Boolean DMOIEHPEMBM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FDLDBJMEBDH_DMOIEHPEMBM_OFFSET))(this);
		}

	};
