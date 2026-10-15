#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class JIAJFGCHLJE;

#define PGGLHFNEMCN_CTOR_OFFSET UNITYSDK_OFFSET(0xC218710)
#define PGGLHFNEMCN_KMNHKPOABLF_OFFSET UNITYSDK_OFFSET(0xC218620)

inline static constexpr unsigned int PGGLHFNEMCN_TypeDefinitionIndex = 68291;

	class PGGLHFNEMCN : public ::System::Object
	{
	public:
		::JIAJFGCHLJE* MLNKEFHLILL; // 0x10
		::UnityEngine::Vector2Int HKIGCKAEJOH; // 0x18
		::System::Boolean ADHKECBDCPC; // 0x20
		::System::Byte _padding0[0x3];
		::System::Int32 IIDICHNBHGI; // 0x24
		::UnityEngine::Vector2 LMEFBDLNLOG; // 0x28
		::System::Single GBELCIENEBE; // 0x30
		::UnityEngine::Vector2Int JKFNNOAMDIM; // 0x34
		::UnityEngine::Vector2 JLHCFHJOBEI; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGLHFNEMCN_CTOR_OFFSET))(this);
		}

		::System::Void KMNHKPOABLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGLHFNEMCN_KMNHKPOABLF_OFFSET))(this);
		}

	};
