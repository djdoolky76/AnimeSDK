#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG { template <typename T> class PoolHashSet_1; }

#define JKLGCEPNNGP_CLEAR_OFFSET UNITYSDK_OFFSET(0xBA47EF0)
#define JKLGCEPNNGP_CTOR_OFFSET UNITYSDK_OFFSET(0xBA47F70)

inline static constexpr unsigned int JKLGCEPNNGP_TypeDefinitionIndex = 54662;

	class JKLGCEPNNGP : public ::System::Object
	{
	public:
		::RPG::PoolHashSet_1<::System::UInt32>* FKLAGBKACGL; // 0x10
		::System::Single HAOCLKBECLH; // 0x18
		::UnityEngine::Vector3 LJDCABIODKA; // 0x1C
		::System::Single MOPNIDBBGHD; // 0x28
		::System::Boolean DAPNIBBNGPK; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLGCEPNNGP_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLGCEPNNGP_CLEAR_OFFSET))(this);
		}

	};
