#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LGKJFOFLBFG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace System { class String; }

#define HHGEHHAHGFE__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D2CD10)
#define HHGEHHAHGFE__CTOR_OFFSET UNITYSDK_OFFSET(0x748A40)

inline static constexpr unsigned int HHGEHHAHGFE_TypeDefinitionIndex = 64591;

struct alignas(8) HHGEHHAHGFE
{
	static ::System::UInt32* StaticGet_IAOEPPBDCLK()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(HHGEHHAHGFE_TypeDefinitionIndex)->GetStaticField(0x113F0);
	}
	::MoleMole::EntityHandle FLHIOCOEJCM; // 0x10
	::System::String* KIHGNGKBADE; // 0x20
	::System::Boolean DNPMKLFDNCK; // 0x28
	::System::Boolean BIEGEGABPOI; // 0x29
	::System::Boolean OKDADBHHOHG; // 0x2A
	::System::Byte _padding0[0x1];
	::LGKJFOFLBFG MGHEOLIIENH; // 0x2C
	::MoleMole::Cameras::CameraTrackBlending* AFBJFCHNDOM; // 0x30
	::System::Int32 HLBKHEFJAPH; // 0x38
	::System::UInt32 JPFKAIKHHOG; // 0x3C

	::System::Void _ctor(::MoleMole::EntityHandle GCJKADMENGF, ::System::String* AELLPLBJELA, ::System::Boolean CHIIDMMODGF, ::System::Boolean BIFGGPGKKFJ, ::System::Boolean HGJFEBIPHAG, ::LGKJFOFLBFG IEHPBAPHCOM, ::MoleMole::Cameras::CameraTrackBlending* MELBEHIKGKE, ::System::Int32 DKOFFFNEFJC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::LGKJFOFLBFG, ::MoleMole::Cameras::CameraTrackBlending*, ::System::Int32))((::PBYTE)hIl2Cpp + HHGEHHAHGFE__CTOR_OFFSET))(this, GCJKADMENGF, AELLPLBJELA, CHIIDMMODGF, BIFGGPGKKFJ, HGJFEBIPHAG, IEHPBAPHCOM, MELBEHIKGKE, DKOFFFNEFJC);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHGEHHAHGFE__CCTOR_OFFSET))();
	}
};
