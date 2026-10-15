#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client::SwordTraining { class SwordTrainingActionData; }
namespace RPG::Client::SwordTraining { class SwordTrainingActionSelection; }
namespace System { class Object; }

#define FLDFHOHLCFB_CTOR_OFFSET UNITYSDK_OFFSET(0x2E78AD0)
#define FLDFHOHLCFB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2E78B40)
#define FLDFHOHLCFB_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D30)
#define FLDFHOHLCFB_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xACE0)
#define FLDFHOHLCFB_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2E78B90)
#define FLDFHOHLCFB_RESET_OFFSET UNITYSDK_OFFSET(0x2E78BA0)
#define FLDFHOHLCFB_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x94B0)
#define FLDFHOHLCFB_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xACF0)
#define FLDFHOHLCFB_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2E78AF0)

inline static constexpr unsigned int FLDFHOHLCFB_TypeDefinitionIndex = 75059;

	struct alignas(8) FLDFHOHLCFB
	{
		::RPG::Client::SwordTraining::SwordTrainingActionData* _Current_k__BackingField; // 0x10
		::System::UInt32 _Index_k__BackingField; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::SwordTraining::SwordTrainingActionSelection* CFKHNPGEAJA; // 0x20
		::System::Void _ctor(::RPG::Client::SwordTraining::SwordTrainingActionSelection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingActionSelection*))((::PBYTE)hIl2Cpp + FLDFHOHLCFB_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::SwordTraining::SwordTrainingActionData* get_Current()
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingActionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLDFHOHLCFB_GET_CURRENT_OFFSET))(this);
		}

		::System::Void set_Current(::RPG::Client::SwordTraining::SwordTrainingActionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingActionData*))((::PBYTE)hIl2Cpp + FLDFHOHLCFB_SET_CURRENT_OFFSET))(this, a1);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLDFHOHLCFB_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLDFHOHLCFB_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLDFHOHLCFB_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLDFHOHLCFB_RESET_OFFSET))(this);
		}

		::System::UInt32 get_Index()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLDFHOHLCFB_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FLDFHOHLCFB_SET_INDEX_OFFSET))(this, a1);
		}

	};
