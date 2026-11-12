#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class BNBOAMEBAOE;
class GAFMCFPGLCK;
namespace RPG::GameCore { class TaskContext; }

#define HGAHEILLFJL_AKBFGAMFKFB_OFFSET UNITYSDK_OFFSET(0x16BD8950)
#define HGAHEILLFJL_BKPGNCBNMGP_OFFSET UNITYSDK_OFFSET(0x16BD8440)
#define HGAHEILLFJL_CTOR_OFFSET UNITYSDK_OFFSET(0x16BD8430)
#define HGAHEILLFJL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16BD8900)
#define HGAHEILLFJL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16BD8490)
#define HGAHEILLFJL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16BD8850)
#define HGAHEILLFJL_TICK_OFFSET UNITYSDK_OFFSET(0x16BD88A0)

inline static constexpr unsigned int HGAHEILLFJL_TypeDefinitionIndex = 59391;

	class HGAHEILLFJL : public ::GELIALJDFBL
	{
	public:
		::BNBOAMEBAOE* JLMAKNFAEBH; // 0x18
		::GAFMCFPGLCK* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GAFMCFPGLCK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GAFMCFPGLCK*))((::PBYTE)hIl2Cpp + HGAHEILLFJL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void BKPGNCBNMGP(::BNBOAMEBAOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNBOAMEBAOE*))((::PBYTE)hIl2Cpp + HGAHEILLFJL_BKPGNCBNMGP_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAHEILLFJL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAHEILLFJL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HGAHEILLFJL_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAHEILLFJL_DISPOSE_OFFSET))(this);
		}

		::System::Void AKBFGAMFKFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAHEILLFJL_AKBFGAMFKFB_OFFSET))(this);
		}

	};
