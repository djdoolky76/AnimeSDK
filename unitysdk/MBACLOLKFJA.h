#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMCOEFHHBPO.h"
#include "unitysdk/JJDFGMMMCMI.h"
class CDEAABODKCP;

#define MBACLOLKFJA_CTOR_OFFSET UNITYSDK_OFFSET(0xB850DA0)
#define MBACLOLKFJA_DJMPBKGDLKI_OFFSET UNITYSDK_OFFSET(0xB850B60)
#define MBACLOLKFJA_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0xB850CE0)
#define MBACLOLKFJA_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0xB850D30)

inline static constexpr unsigned int MBACLOLKFJA_TypeDefinitionIndex = 65101;

	class MBACLOLKFJA : public ::AMCOEFHHBPO
	{
	public:
		::System::UInt32 GAJICDKPHPA; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBACLOLKFJA_CTOR_OFFSET))(this);
		}

		::System::Void DJMPBKGDLKI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MBACLOLKFJA_DJMPBKGDLKI_OFFSET))(this, a1);
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
