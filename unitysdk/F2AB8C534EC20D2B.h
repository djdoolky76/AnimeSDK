#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E2DE926113CB084F.h"
#include "unitysdk/E865F6F8B8B44C1E.h"
#include "unitysdk/EE42CBC98A7AE171/A130E480649C6D07.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Object; }

#define F2AB8C534EC20D2B_F6A26A0288F73F5F_OFFSET UNITYSDK_OFFSET(0x26FE7C0)

inline static constexpr unsigned int F2AB8C534EC20D2B_TypeDefinitionIndex = 2829;

struct alignas(8) F2AB8C534EC20D2B
{
	::System::Int32 A4780AEEF28F5877; // 0x10
	::System::Byte _padding0[0x4];
	::E865F6F8B8B44C1E B4545B6509D8B53B; // 0x18
	::EE42CBC98A7AE171::A130E480649C6D07 F9ADD17A3DC7AE85; // 0x20
	::System::Byte _padding1[0x4];
	::UnityEngine::Object* B07BAD1D351C9637; // 0x28
	::System::Int32 E3C34774D1115046; // 0x30
	::System::Byte _padding2[0x4];
	::E2DE926113CB084F B3CD471DB0C3CB93; // 0x38

	::System::Boolean F6A26A0288F73F5F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + F2AB8C534EC20D2B_F6A26A0288F73F5F_OFFSET))(this);
	}
};
