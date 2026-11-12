#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJJKNHPLHDI.h"
class DDCDKHALPDP;
class LAECFLNNOFH;
class MPEIPEHLMIM;

#define BLJHLLONMNA_CTOR_OFFSET UNITYSDK_OFFSET(0xC40A3F0)
#define BLJHLLONMNA_GET_GAMESTATESYSTEM_OFFSET UNITYSDK_OFFSET(0xC40A3E0)

inline static constexpr unsigned int BLJHLLONMNA_TypeDefinitionIndex = 79627;

	class BLJHLLONMNA : public ::DJJKNHPLHDI
	{
	public:
		::MPEIPEHLMIM* _GameStateSystem_k__BackingField; // 0x30
		::System::Void _ctor(::LAECFLNNOFH* a1, ::DDCDKHALPDP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LAECFLNNOFH*, ::DDCDKHALPDP*))((::PBYTE)hIl2Cpp + BLJHLLONMNA_CTOR_OFFSET))(this, a1, a2);
		}

		::MPEIPEHLMIM* get_GameStateSystem()
		{
			return ((::MPEIPEHLMIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJHLLONMNA_GET_GAMESTATESYSTEM_OFFSET))(this);
		}

	};
