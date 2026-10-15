#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG { template <typename T> class PoolHashSet_1; }

#define JKLGCEPNNGP_CLEAR_OFFSET UNITYSDK_OFFSET(0xB219C60)
#define JKLGCEPNNGP_CTOR_OFFSET UNITYSDK_OFFSET(0xB219CE0)

inline static constexpr unsigned int JKLGCEPNNGP_TypeDefinitionIndex = 53500;

	class JKLGCEPNNGP : public ::System::Object
	{
	public:
		::RPG::PoolHashSet_1<::System::UInt32>* FKLAGBKACGL; // 0x10
		::System::Single MOPNIDBBGHD; // 0x18
		::UnityEngine::Vector3 LJDCABIODKA; // 0x1C
		::System::Boolean DAPNIBBNGPK; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single HAOCLKBECLH; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLGCEPNNGP_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLGCEPNNGP_CLEAR_OFFSET))(this);
		}

	};
