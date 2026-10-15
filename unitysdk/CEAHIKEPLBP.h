#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NNDJBGAGHLD.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class LittleGameEvent; }

#define CEAHIKEPLBP_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C8AF330)
#define CEAHIKEPLBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8AF3B0)

inline static constexpr unsigned int CEAHIKEPLBP_TypeDefinitionIndex = 43546;

	class CEAHIKEPLBP : public ::NNDJBGAGHLD
	{
	public:
		::RPG::GameCore::LittleGameEvent* BHDGCIJPCFN; // 0x10
		::System::Single DPKMOFJOHKB; // 0x18
		::UnityEngine::Vector3 AJHKIJLGLOH; // 0x1C
		::System::Single MLKDPKEGIML; // 0x28
		::System::UInt32 CEIFACBCNKE; // 0x2C
		::UnityEngine::Vector3 HOHFMIBLDJJ; // 0x30
		::System::Single IDKONBFPBLH; // 0x3C
		::System::Boolean ICEIIAHGPFJ; // 0x40
		::System::Byte _padding0[0x3];
		::System::Single GCJMFBKLGHI; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAHIKEPLBP_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAHIKEPLBP_CLEAR_OFFSET))(this);
		}

	};
