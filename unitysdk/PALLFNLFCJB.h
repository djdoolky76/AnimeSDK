#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace UnityEngine { class Transform; }

#define PALLFNLFCJB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19494050)
#define PALLFNLFCJB__CTOR_OFFSET UNITYSDK_OFFSET(0x19494040)

inline static constexpr unsigned int PALLFNLFCJB_TypeDefinitionIndex = 40599;

class PALLFNLFCJB : public ::System::Object
{
public:
	::UnityEngine::Transform* BMBDGIENPOJ; // 0x10
	::System::Boolean PKBAMIGNEDK; // 0x18
	::System::Boolean PDGKFJMADJB; // 0x19
	::System::Byte _padding0[0x2];
	::System::Single OBOMKGBILDH; // 0x1C
	::System::Single JPHGOKHNLLM; // 0x20
	::UnityEngine::Quaternion OABAPGOGDOL; // 0x24
	::System::Boolean LFKBGAENFDK; // 0x34
	::System::Boolean IAFLAGNFMAB; // 0x35
	::System::Boolean BLICKNHOFBI; // 0x36
	::System::Boolean AANAMNBOJJA; // 0x37
	::System::Int32 MDCAEPBCMPE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PALLFNLFCJB__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PALLFNLFCJB_PHOADBJGFBE_OFFSET))(this);
	}
};
