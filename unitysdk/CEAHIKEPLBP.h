#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NNDJBGAGHLD.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class LittleGameEvent; }

#define CEAHIKEPLBP_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C8DD5E0)
#define CEAHIKEPLBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8DD660)

	class CEAHIKEPLBP : public ::NNDJBGAGHLD
	{
	public:
		::RPG::GameCore::LittleGameEvent* BHDGCIJPCFN; // 0x10
		::System::Boolean ICEIIAHGPFJ; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single DPKMOFJOHKB; // 0x1C
		::System::Single MLKDPKEGIML; // 0x20
		::UnityEngine::Vector3 HOHFMIBLDJJ; // 0x24
		::System::Single GCJMFBKLGHI; // 0x30
		::System::UInt32 CEIFACBCNKE; // 0x34
		::System::Single IDKONBFPBLH; // 0x38
		::UnityEngine::Vector3 AJHKIJLGLOH; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAHIKEPLBP_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAHIKEPLBP_CLEAR_OFFSET))(this);
		}

	};
