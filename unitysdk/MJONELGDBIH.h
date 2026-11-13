#pragma once
#include "unitysdk/unitysdk.h"
class MNOMFMNFDDH;
namespace RPG::GameCore { class TaskContext; }

#define MJONELGDBIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1A3BA4D0)
#define MJONELGDBIH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A3BA500)
#define MJONELGDBIH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A3BA9F0)
#define MJONELGDBIH_POPLKHDAOPL_OFFSET UNITYSDK_OFFSET(0x1A3BA570)

inline static constexpr unsigned int MJONELGDBIH_TypeDefinitionIndex = 54811;

	class MJONELGDBIH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MNOMFMNFDDH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MNOMFMNFDDH*))((::PBYTE)hIl2Cpp + MJONELGDBIH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJONELGDBIH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJONELGDBIH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void POPLKHDAOPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJONELGDBIH_POPLKHDAOPL_OFFSET))(this);
		}

	};
