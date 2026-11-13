#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class JNHAKGCKAAE;
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define PPLFBBKDIBA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B8B2350)
#define PPLFBBKDIBA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B8B23E0)
#define PPLFBBKDIBA_LJPBILLHMIJ_OFFSET UNITYSDK_OFFSET(0x1B8B2700)
#define PPLFBBKDIBA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B8B2520)
#define PPLFBBKDIBA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1B8B2610)
#define PPLFBBKDIBA_TICK_OFFSET UNITYSDK_OFFSET(0x1B8B26A0)

inline static constexpr unsigned int PPLFBBKDIBA_TypeDefinitionIndex = 54053;

	class PPLFBBKDIBA : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* MMEPKHGPPHJ; // 0x18
		::JNHAKGCKAAE* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::UInt32 GJFHPJDIECP; // 0x30
		::System::UInt32 PHENAPCKMIJ; // 0x34
		::System::UInt32 AJNLLPDCAII; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JNHAKGCKAAE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JNHAKGCKAAE*))((::PBYTE)hIl2Cpp + PPLFBBKDIBA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLFBBKDIBA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLFBBKDIBA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLFBBKDIBA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PPLFBBKDIBA_TICK_OFFSET))(this, a1);
		}

		::System::Void LJPBILLHMIJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PPLFBBKDIBA_LJPBILLHMIJ_OFFSET))(this, a1);
		}

	};
