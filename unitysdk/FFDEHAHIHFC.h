#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class PlayerTeamAppear; }
namespace RPG::GameCore { class TaskContext; }

#define FFDEHAHIHFC_CTOR_OFFSET UNITYSDK_OFFSET(0x157329F0)
#define FFDEHAHIHFC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15732A00)
#define FFDEHAHIHFC_MOOMADOOPIF_OFFSET UNITYSDK_OFFSET(0x15732AA0)
#define FFDEHAHIHFC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15732A40)
#define FFDEHAHIHFC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15732CB0)
#define FFDEHAHIHFC_TICK_OFFSET UNITYSDK_OFFSET(0x15732D00)

	class FFDEHAHIHFC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::PlayerTeamAppear* OFKGLJOAMLD; // 0x20
		::System::Single CNDKGAEBFIJ; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayerTeamAppear* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayerTeamAppear*))((::PBYTE)hIl2Cpp + FFDEHAHIHFC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDEHAHIHFC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDEHAHIHFC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDEHAHIHFC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FFDEHAHIHFC_TICK_OFFSET))(this, a1);
		}

		::System::Boolean MOOMADOOPIF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDEHAHIHFC_MOOMADOOPIF_OFFSET))(this);
		}

	};
