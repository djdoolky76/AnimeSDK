#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define GDBCOMIAEDD_CTOR_OFFSET UNITYSDK_OFFSET(0x15988810)
#define GDBCOMIAEDD_PBFDGGKNDCN_OFFSET UNITYSDK_OFFSET(0x159887C0)

inline static constexpr unsigned int GDBCOMIAEDD_TypeDefinitionIndex = 77900;

	class GDBCOMIAEDD : public ::System::Object
	{
	public:
		::System::Single CONJAMJKHBI; // 0x10
		::System::Single JBCFPAEELBL; // 0x14
		::System::Int32 HFFNICJHFPC; // 0x18
		::UnityEngine::Vector2 IGDPLGAGAHF; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBCOMIAEDD_CTOR_OFFSET))(this);
		}

		::System::Single PBFDGGKNDCN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBCOMIAEDD_PBFDGGKNDCN_OFFSET))(this);
		}

	};
