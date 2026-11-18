#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define GDIACAHPLBB_GHADOMFGCCC_JBJAPLOEMGK_OFFSET UNITYSDK_OFFSET(0x7B09E0)
#define GDIACAHPLBB_GHADOMFGCCC_ODPGCDOFPGL_OFFSET UNITYSDK_OFFSET(0x7B09C0)
#define GDIACAHPLBB_GHADOMFGCCC__CTOR_OFFSET UNITYSDK_OFFSET(0x7B0980)

inline static constexpr unsigned int GDIACAHPLBB_GHADOMFGCCC_TypeDefinitionIndex = 73272;

struct alignas(8) GDIACAHPLBB_GHADOMFGCCC
{
	::UnityEngine::Vector3 JOILPOPCHPB; // 0x10
	::UnityEngine::Quaternion PCHMEJLFDMB; // 0x1C
	::System::Nullable_1<::System::Single> EABDGIBIAFD; // 0x2C
	::System::Byte _padding0[0x4];
	::System::String* DFCJFPNCLEO; // 0x38

	::System::Void _ctor(::UnityEngine::Vector3 ELKCAPBODAL, ::UnityEngine::Quaternion OFDKJOBBPKF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + GDIACAHPLBB_GHADOMFGCCC__CTOR_OFFSET))(this, ELKCAPBODAL, OFDKJOBBPKF);
	}

	::System::Single ODPGCDOFPGL()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB_GHADOMFGCCC_ODPGCDOFPGL_OFFSET))(this);
	}

	::UnityEngine::Vector3 JBJAPLOEMGK()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB_GHADOMFGCCC_JBJAPLOEMGK_OFFSET))(this);
	}
};
