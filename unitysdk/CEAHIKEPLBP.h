#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NNDJBGAGHLD.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class LittleGameEvent; }

#define CEAHIKEPLBP_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D2D9F50)
#define CEAHIKEPLBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2D9FC0)

inline static constexpr unsigned int CEAHIKEPLBP_TypeDefinitionIndex = 44528;

	class CEAHIKEPLBP : public ::NNDJBGAGHLD
	{
	public:
		::RPG::GameCore::LittleGameEvent* BHDGCIJPCFN; // 0x10
		::UnityEngine::Vector3 AJHKIJLGLOH; // 0x18
		::System::Single MLKDPKEGIML; // 0x24
		::UnityEngine::Vector3 HOHFMIBLDJJ; // 0x28
		::System::Single GCJMFBKLGHI; // 0x34
		::System::UInt32 CEIFACBCNKE; // 0x38
		::System::Single DPKMOFJOHKB; // 0x3C
		::System::Single IDKONBFPBLH; // 0x40
		::System::Boolean ICEIIAHGPFJ; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAHIKEPLBP_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAHIKEPLBP_CLEAR_OFFSET))(this);
		}

	};
