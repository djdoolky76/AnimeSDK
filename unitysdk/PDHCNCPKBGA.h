#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class StartLevelGraph; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PDHCNCPKBGA_AIOABAGGGAE_OFFSET UNITYSDK_OFFSET(0xC00C5E0)
#define PDHCNCPKBGA_CTOR_OFFSET UNITYSDK_OFFSET(0xC00BF60)
#define PDHCNCPKBGA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC00BF90)
#define PDHCNCPKBGA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC00C180)

inline static constexpr unsigned int PDHCNCPKBGA_TypeDefinitionIndex = 58723;

	class PDHCNCPKBGA
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::LevelGraphComponent*>* GHEGGAPHHBM; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartLevelGraph* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartLevelGraph*))((::PBYTE)hIl2Cpp + PDHCNCPKBGA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDHCNCPKBGA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDHCNCPKBGA_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::LevelGraphComponent* AIOABAGGGAE(::System::String* a1)
		{
			return ((::RPG::GameCore::LevelGraphComponent*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PDHCNCPKBGA_AIOABAGGGAE_OFFSET))(this, a1);
		}

	};
