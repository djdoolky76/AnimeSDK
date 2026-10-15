#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CILNKGMHIIE;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_GRIDFIGHTMANAGER_WAVEKILLRECORDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE6C6F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightManager_WaveKillRecordData_TypeDefinitionIndex = 56172;

	class GridFightManager_WaveKillRecordData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* KillMonsterIDList; // 0x10
		::System::Collections::Generic::List_1<::CILNKGMHIIE*>* KillMonsterLineups; // 0x18
		::System::UInt32 WaveIndex; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_WAVEKILLRECORDDATA_CTOR_OFFSET))(this);
		}

	};
}
