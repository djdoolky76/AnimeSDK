#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class JIAJFGCHLJE;

#define PGGLHFNEMCN_CTOR_OFFSET UNITYSDK_OFFSET(0x16D8E3E0)
#define PGGLHFNEMCN_KMNHKPOABLF_OFFSET UNITYSDK_OFFSET(0x16D8E2F0)

inline static constexpr unsigned int PGGLHFNEMCN_TypeDefinitionIndex = 70237;

	class PGGLHFNEMCN : public ::System::Object
	{
	public:
		::JIAJFGCHLJE* MLNKEFHLILL; // 0x10
		::UnityEngine::Vector2 JLHCFHJOBEI; // 0x18
		::UnityEngine::Vector2Int JKFNNOAMDIM; // 0x20
		::UnityEngine::Vector2 LMEFBDLNLOG; // 0x28
		::System::Boolean ADHKECBDCPC; // 0x30
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector2Int HKIGCKAEJOH; // 0x34
		::System::Single GBELCIENEBE; // 0x3C
		::System::Int32 IIDICHNBHGI; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGLHFNEMCN_CTOR_OFFSET))(this);
		}

		::System::Void KMNHKPOABLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGLHFNEMCN_KMNHKPOABLF_OFFSET))(this);
		}

	};
