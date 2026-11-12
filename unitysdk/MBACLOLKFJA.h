#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJDFGMMMCMI.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"
class CDEAABODKCP;

#define MBACLOLKFJA_CTOR_OFFSET UNITYSDK_OFFSET(0xC0B8BF0)
#define MBACLOLKFJA_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0xC0B8B30)
#define MBACLOLKFJA_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0xC0B8B80)
#define MBACLOLKFJA_UPDATEEXPERTROLEUNLOCK_OFFSET UNITYSDK_OFFSET(0xC0B89B0)

inline static constexpr unsigned int MBACLOLKFJA_TypeDefinitionIndex = 66782;

	class MBACLOLKFJA : public ::RPG::Client::GridFightUpdateSummarizer
	{
	public:
		::System::UInt32 GAJICDKPHPA; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBACLOLKFJA_CTOR_OFFSET))(this);
		}

		::System::Void UpdateExpertRoleUnlock(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MBACLOLKFJA_UPDATEEXPERTROLEUNLOCK_OFFSET))(this, a1);
		}

		::System::Void UpdateAddRole(::CDEAABODKCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDEAABODKCP*))((::PBYTE)hIl2Cpp + MBACLOLKFJA_UPDATEADDROLE_OFFSET))(this, a1);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + MBACLOLKFJA_UPDATEAFTER_OFFSET))(this, a1);
		}

	};
