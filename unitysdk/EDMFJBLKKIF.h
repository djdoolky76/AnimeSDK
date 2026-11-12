#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define EDMFJBLKKIF_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DBF6D70)
#define EDMFJBLKKIF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBF6DD0)

inline static constexpr unsigned int EDMFJBLKKIF_TypeDefinitionIndex = 44266;

	class EDMFJBLKKIF : public ::System::Object
	{
	public:
		::System::Single GAFENHHEBPG; // 0x10
		::System::Boolean IJLFPJEKGCJ; // 0x14
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 FPNNKEJPHNN; // 0x18
		::System::Single IEHPFADHJFD; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDMFJBLKKIF_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDMFJBLKKIF_CLEAR_OFFSET))(this);
		}

	};
