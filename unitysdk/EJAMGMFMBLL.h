#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EJAMGMFMBLL_CTOR_OFFSET UNITYSDK_OFFSET(0x154C9C00)
#define EJAMGMFMBLL_GET_ISDEEPBUFF_OFFSET UNITYSDK_OFFSET(0x154C9BE0)
#define EJAMGMFMBLL_GET_MAZEBUFFID_OFFSET UNITYSDK_OFFSET(0x154C9BC0)
#define EJAMGMFMBLL_SET_ISDEEPBUFF_OFFSET UNITYSDK_OFFSET(0x154C9BF0)
#define EJAMGMFMBLL_SET_MAZEBUFFID_OFFSET UNITYSDK_OFFSET(0x154C9BD0)

inline static constexpr unsigned int EJAMGMFMBLL_TypeDefinitionIndex = 81017;

	class EJAMGMFMBLL : public ::System::Object
	{
	public:
		::System::Boolean _IsDeepBuff_k__BackingField; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 _MazeBuffID_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJAMGMFMBLL_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_MazeBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJAMGMFMBLL_GET_MAZEBUFFID_OFFSET))(this);
		}

		::System::Void set_MazeBuffID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EJAMGMFMBLL_SET_MAZEBUFFID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDeepBuff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJAMGMFMBLL_GET_ISDEEPBUFF_OFFSET))(this);
		}

		::System::Void set_IsDeepBuff(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EJAMGMFMBLL_SET_ISDEEPBUFF_OFFSET))(this, a1);
		}

	};
