#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class RandomSelectMonsterIDFromPool; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HKIJNBKHOGM_CTOR_OFFSET UNITYSDK_OFFSET(0x15D46B40)
#define HKIJNBKHOGM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D46C70)

inline static constexpr unsigned int HKIJNBKHOGM_TypeDefinitionIndex = 55277;

	class HKIJNBKHOGM
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* MAHEGGKFGIN; // 0x28
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RandomSelectMonsterIDFromPool* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RandomSelectMonsterIDFromPool*))((::PBYTE)hIl2Cpp + HKIJNBKHOGM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKIJNBKHOGM_ONTASKBEGIN_OFFSET))(this);
		}

	};
