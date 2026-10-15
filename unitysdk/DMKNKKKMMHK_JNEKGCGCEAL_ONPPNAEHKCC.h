#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/System/Object.h"
class DMKNKKKMMHK_JNEKGCGCEAL;
class GGJFAFONDHN;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define DMKNKKKMMHK_JNEKGCGCEAL_ONPPNAEHKCC_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xFEC4E70)
#define DMKNKKKMMHK_JNEKGCGCEAL_ONPPNAEHKCC_COKMDIMBLHN_OFFSET UNITYSDK_OFFSET(0xFEC4CD0)
#define DMKNKKKMMHK_JNEKGCGCEAL_ONPPNAEHKCC_CTOR_OFFSET UNITYSDK_OFFSET(0xFEC5100)

	class DMKNKKKMMHK_JNEKGCGCEAL_ONPPNAEHKCC : public ::System::Object
	{
	public:
		::System::Collections::Generic::Stack_1<::System::Object*>* PLPNIKALEBA; // 0x10
		::System::Int32 GLLLIKDBLCL; // 0x18
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DMKNKKKMMHK_JNEKGCGCEAL_ONPPNAEHKCC_CTOR_OFFSET))(this, a1);
		}

		::DMKNKKKMMHK_JNEKGCGCEAL* COKMDIMBLHN(::RPG::GameCore::EnviromentControlPriority a1, ::GGJFAFONDHN* a2)
		{
			return ((::DMKNKKKMMHK_JNEKGCGCEAL*(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + DMKNKKKMMHK_JNEKGCGCEAL_ONPPNAEHKCC_COKMDIMBLHN_OFFSET))(this, a1, a2);
		}

		::System::Void ABKBOGIGAEH(::DMKNKKKMMHK_JNEKGCGCEAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMKNKKKMMHK_JNEKGCGCEAL*))((::PBYTE)hIl2Cpp + DMKNKKKMMHK_JNEKGCGCEAL_ONPPNAEHKCC_ABKBOGIGAEH_OFFSET))(this, a1);
		}

	};
