#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActionBarItemAction.h"
#include "unitysdk/System/Object.h"
class GEDMHFPPBHN;

#define GAHPNAEGACM_CTOR_OFFSET UNITYSDK_OFFSET(0x16870390)

inline static constexpr unsigned int GAHPNAEGACM_TypeDefinitionIndex = 73182;

	class GAHPNAEGACM : public ::System::Object
	{
	public:
		::GEDMHFPPBHN* NLFCABFPJHD; // 0x10
		::System::Int32 JMJKEDNMDEI; // 0x18
		::System::Int32 IDONJMPLIKG; // 0x1C
		::System::Int32 OKGAHAGDONO; // 0x20
		::RPG::Client::ActionBarItemAction ENGGCENAFPM; // 0x24
		::System::Void _ctor(::RPG::Client::ActionBarItemAction a1, ::GEDMHFPPBHN* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionBarItemAction, ::GEDMHFPPBHN*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GAHPNAEGACM_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
