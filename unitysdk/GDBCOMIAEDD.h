#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define GDBCOMIAEDD_CTOR_OFFSET UNITYSDK_OFFSET(0x159937C0)
#define GDBCOMIAEDD_PBFDGGKNDCN_OFFSET UNITYSDK_OFFSET(0x15993770)

	class GDBCOMIAEDD : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 IGDPLGAGAHF; // 0x10
		::System::Single CONJAMJKHBI; // 0x18
		::System::Single JBCFPAEELBL; // 0x1C
		::System::Int32 HFFNICJHFPC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBCOMIAEDD_CTOR_OFFSET))(this);
		}

		::System::Single PBFDGGKNDCN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBCOMIAEDD_PBFDGGKNDCN_OFFSET))(this);
		}

	};
