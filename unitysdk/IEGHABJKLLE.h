#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OCLPKBONCJJ.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole::Cameras { class CameraMiscSetting; }
namespace PipelineCamera { class TimeBasedAlphaGenerator; }
namespace System { template <typename T> class Func_1; }

#define IEGHABJKLLE_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x1A456F00)
#define IEGHABJKLLE_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x7F6F30)
#define IEGHABJKLLE__CTOR_OFFSET UNITYSDK_OFFSET(0x7F6F20)

inline static constexpr unsigned int IEGHABJKLLE_TypeDefinitionIndex = 74968;

struct alignas(8) IEGHABJKLLE
{
	::MoleMole::Cameras::CameraMiscSetting* DKANPKBIMFM; // 0x10
	::PipelineCamera::TimeBasedAlphaGenerator* CAHNMPOGHII; // 0x18
	::System::Single BJMBOABGKOK; // 0x20
	::System::Byte _padding0[0x4];
	::System::Func_1<::System::Single>* CCDNFNCMJGE; // 0x28
	::System::Boolean MEMEINPDGMG; // 0x30

	::System::Void _ctor(::MoleMole::Cameras::CameraMiscSetting* LDDJOFHAOHG, ::System::Func_1<::System::Single>* CAOPDAMCNCN, ::PipelineCamera::TimeBasedAlphaGenerator* GADJOENDAGM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraMiscSetting*, ::System::Func_1<::System::Single>*, ::PipelineCamera::TimeBasedAlphaGenerator*))((::PBYTE)hIl2Cpp + IEGHABJKLLE__CTOR_OFFSET))(this, LDDJOFHAOHG, CAOPDAMCNCN, GADJOENDAGM);
	}

	/*
	static ::System::Nullable_1<::IEGHABJKLLE> COKNIICCODC(::MoleMole::Cameras::CameraMiscSetting* KDHHPEDFPIM, ::OCLPKBONCJJ& FCEIKAIDHPM)
	{
		return ((::System::Nullable_1<::IEGHABJKLLE>(*)(::MoleMole::Cameras::CameraMiscSetting*, ::OCLPKBONCJJ&))((::PBYTE)hIl2Cpp + IEGHABJKLLE_COKNIICCODC_OFFSET))(KDHHPEDFPIM, FCEIKAIDHPM);
	}
	*/

	/*
	::System::Nullable_1<::IEGHABJKLLE> OKJCHFGIKBH(::System::Single PMNLNNGEIFM, ::MoleMole::Cameras::CameraMiscSetting*& HLFFCMIFFIB, ::MoleMole::Cameras::CameraMiscSetting*& AJMCCOEAIFE)
	{
		return ((::System::Nullable_1<::IEGHABJKLLE>(*)(::PVOID, ::System::Single, ::MoleMole::Cameras::CameraMiscSetting*&, ::MoleMole::Cameras::CameraMiscSetting*&))((::PBYTE)hIl2Cpp + IEGHABJKLLE_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM, HLFFCMIFFIB, AJMCCOEAIFE);
	}
	*/
};
