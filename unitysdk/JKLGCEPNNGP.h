#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG { template <typename T> class PoolHashSet_1; }

#define JKLGCEPNNGP_CLEAR_OFFSET UNITYSDK_OFFSET(0xB21FA10)
#define JKLGCEPNNGP_CTOR_OFFSET UNITYSDK_OFFSET(0xB21FA90)

	class JKLGCEPNNGP : public ::System::Object
	{
	public:
		::RPG::PoolHashSet_1<::System::UInt32>* FKLAGBKACGL; // 0x10
		::System::Single MOPNIDBBGHD; // 0x18
		::System::Boolean DAPNIBBNGPK; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Single HAOCLKBECLH; // 0x20
		::UnityEngine::Vector3 LJDCABIODKA; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLGCEPNNGP_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLGCEPNNGP_CLEAR_OFFSET))(this);
		}

	};
