#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class PropEscalatorSetup; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define BIDKHENFCKA_CTOR_OFFSET UNITYSDK_OFFSET(0xB4A43E0)
#define BIDKHENFCKA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4A43F0)
#define BIDKHENFCKA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB4A4490)
#define BIDKHENFCKA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB4A4440)
#define BIDKHENFCKA_TICK_OFFSET UNITYSDK_OFFSET(0xB4A4A30)

inline static constexpr unsigned int BIDKHENFCKA_TypeDefinitionIndex = 58322;

	class BIDKHENFCKA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::System::String* IJMGEMMNNPI; // 0x20
		::RPG::GameCore::PropEscalatorSetup* OFKGLJOAMLD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropEscalatorSetup* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropEscalatorSetup*))((::PBYTE)hIl2Cpp + BIDKHENFCKA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDKHENFCKA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDKHENFCKA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDKHENFCKA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BIDKHENFCKA_TICK_OFFSET))(this, a1);
		}

	};
