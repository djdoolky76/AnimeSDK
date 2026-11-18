#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BJNJBJKHDCJ_AKPCBPDLPBA.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config { class ConfigTurnBasePreviewEffect; }
namespace System { class String; }

#define BJNJBJKHDCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x74BB60)

inline static constexpr unsigned int BJNJBJKHDCJ_TypeDefinitionIndex = 55117;

struct alignas(8) BJNJBJKHDCJ
{
	::System::Int32 KMLPFPOCOEO; // 0x10
	::System::Int32 JNJKCEPHPMP; // 0x14
	::System::String* AGCGKBGBONA; // 0x18
	::BJNJBJKHDCJ_AKPCBPDLPBA ONNCCFNPPAD; // 0x20
	::System::Single KEKLOPKLAIM; // 0x24
	::System::Boolean HMAFJOMHOKH; // 0x28
	::System::Byte _padding0[0x3];
	::System::Single BFEKNHCDDGK; // 0x2C
	::MoleMole::Config::ConfigTurnBasePreviewEffect* EBMLLELJDPE; // 0x30

	::System::Void _ctor(::System::Int32 DNCFHFLNLKP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BJNJBJKHDCJ__CTOR_OFFSET))(this, DNCFHFLNLKP);
	}
};
