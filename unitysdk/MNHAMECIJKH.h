#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IAFLCPLFNHF.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MNHAMECIJKH_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x795B20)
#define MNHAMECIJKH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x795B10)

inline static constexpr unsigned int MNHAMECIJKH_TypeDefinitionIndex = 42976;

struct alignas(8) MNHAMECIJKH
{
	::System::UInt32 OPHJJLCFHPO; // 0x10
	::System::UInt32 BCMJIKFGOMN; // 0x14
	::System::Int32 BKADIEBCJDI; // 0x18
	::System::Byte _padding0[0x4];
	::MoleMole::Battle::Entity* CJHKKDKFGJE; // 0x20
	::IAFLCPLFNHF OCHKGIIMGOE; // 0x28
	::System::Int32 LJCLHOMNDKN; // 0x2C

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNHAMECIJKH_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNHAMECIJKH_DPIHOJBBGLA_OFFSET))(this);
	}
};
