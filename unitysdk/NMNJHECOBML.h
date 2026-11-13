#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class SpaceZooCatData; }
namespace RPG::GameCore { class GetRuanMadeCakePerformanceID; }
namespace RPG::GameCore { class SpaceZooInteractionRow; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NMNJHECOBML_BDJJPMIMLDB_OFFSET UNITYSDK_OFFSET(0x1A450610)
#define NMNJHECOBML_CTOR_OFFSET UNITYSDK_OFFSET(0x1A4501E0)
#define NMNJHECOBML_DABHFBGAOMK_OFFSET UNITYSDK_OFFSET(0x1A450B10)
#define NMNJHECOBML_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A450E80)
#define NMNJHECOBML_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A450380)

inline static constexpr unsigned int NMNJHECOBML_TypeDefinitionIndex = 54063;

	class NMNJHECOBML
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::SpaceZooCatData*>* ANGGPOICCEM; // 0x28
		::RPG::GameCore::StringHash NOGGCJDGBHM; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GetRuanMadeCakePerformanceID* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GetRuanMadeCakePerformanceID*))((::PBYTE)hIl2Cpp + NMNJHECOBML_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMNJHECOBML_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMNJHECOBML_DISPOSE_OFFSET))(this);
		}

		::RPG::PoolList_1<::RPG::GameCore::SpaceZooInteractionRow*>* DABHFBGAOMK()
		{
			return ((::RPG::PoolList_1<::RPG::GameCore::SpaceZooInteractionRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMNJHECOBML_DABHFBGAOMK_OFFSET))(this);
		}

		::System::Void BDJJPMIMLDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMNJHECOBML_BDJJPMIMLDB_OFFSET))(this);
		}

	};
