#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class AKDEPLGPOFD;
class NBIBDLLLCLH;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }

#define ILFMMGAHDOK_CTOR_OFFSET UNITYSDK_OFFSET(0x174864B0)
#define ILFMMGAHDOK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17486770)
#define ILFMMGAHDOK_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x174867B0)
#define ILFMMGAHDOK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x174864C0)
#define ILFMMGAHDOK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x174866C0)
#define ILFMMGAHDOK_TICK_OFFSET UNITYSDK_OFFSET(0x17486710)
#define ILFMMGAHDOK__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x174867F0)
#define ILFMMGAHDOK__ONTASKBEGIN_B__1_1_OFFSET UNITYSDK_OFFSET(0x17486800)

inline static constexpr unsigned int ILFMMGAHDOK_TypeDefinitionIndex = 53808;

	class ILFMMGAHDOK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::AKDEPLGPOFD* OFKGLJOAMLD; // 0x20
		::System::Boolean GFAMGLFOMGI; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::AKDEPLGPOFD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::AKDEPLGPOFD*))((::PBYTE)hIl2Cpp + ILFMMGAHDOK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFMMGAHDOK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFMMGAHDOK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ILFMMGAHDOK_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFMMGAHDOK_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::TaskConfig* GetConfig()
		{
			return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFMMGAHDOK_GETCONFIG_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__1_0(::NBIBDLLLCLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBIBDLLLCLH*))((::PBYTE)hIl2Cpp + ILFMMGAHDOK__ONTASKBEGIN_B__1_0_OFFSET))(this, a1);
		}

		::System::Void _OnTaskBegin_b__1_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ILFMMGAHDOK__ONTASKBEGIN_B__1_1_OFFSET))(this, a1);
		}

	};
