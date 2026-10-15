#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitRotatableRegionLoadingStateChange; }
namespace System { class Object; }

#define IMKOMDBLOLM_AAFMOAMOILM_OFFSET UNITYSDK_OFFSET(0x164CFA50)
#define IMKOMDBLOLM_CTOR_OFFSET UNITYSDK_OFFSET(0x164CF820)
#define IMKOMDBLOLM_MBNGGOBGFNB_OFFSET UNITYSDK_OFFSET(0x164CFB10)
#define IMKOMDBLOLM_NBNHABPGIIB_OFFSET UNITYSDK_OFFSET(0x164CF930)
#define IMKOMDBLOLM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164CF8E0)
#define IMKOMDBLOLM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x164CF9F0)

inline static constexpr unsigned int IMKOMDBLOLM_TypeDefinitionIndex = 52992;

	class IMKOMDBLOLM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitRotatableRegionLoadingStateChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitRotatableRegionLoadingStateChange*))((::PBYTE)hIl2Cpp + IMKOMDBLOLM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMKOMDBLOLM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMKOMDBLOLM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void NBNHABPGIIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMKOMDBLOLM_NBNHABPGIIB_OFFSET))(this);
		}

		::System::Void AAFMOAMOILM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMKOMDBLOLM_AAFMOAMOILM_OFFSET))(this);
		}

		::System::Void MBNGGOBGFNB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IMKOMDBLOLM_MBNGGOBGFNB_OFFSET))(this, a1);
		}

	};
