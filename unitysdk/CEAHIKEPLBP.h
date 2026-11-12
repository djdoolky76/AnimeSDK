#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NNDJBGAGHLD.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class LittleGameEvent; }

#define CEAHIKEPLBP_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DA5E2E0)
#define CEAHIKEPLBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA5E360)

inline static constexpr unsigned int CEAHIKEPLBP_TypeDefinitionIndex = 44528;

	class CEAHIKEPLBP : public ::NNDJBGAGHLD
	{
	public:
		::RPG::GameCore::LittleGameEvent* BHDGCIJPCFN; // 0x10
		::UnityEngine::Vector3 AJHKIJLGLOH; // 0x18
		::System::Single GCJMFBKLGHI; // 0x24
		::System::Single DPKMOFJOHKB; // 0x28
		::UnityEngine::Vector3 HOHFMIBLDJJ; // 0x2C
		::System::Single MLKDPKEGIML; // 0x38
		::System::Single IDKONBFPBLH; // 0x3C
		::System::Boolean ICEIIAHGPFJ; // 0x40
		::System::Byte _padding0[0x3];
		::System::UInt32 CEIFACBCNKE; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAHIKEPLBP_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAHIKEPLBP_CLEAR_OFFSET))(this);
		}

	};
