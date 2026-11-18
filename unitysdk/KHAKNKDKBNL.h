#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MoleMole/CameraOrbit.h"
#include "unitysdk/OCLPKBONCJJ.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole::Cameras { class CameraTrackSetting; }
namespace PipelineCamera { class TimeBasedAlphaGenerator; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define KHAKNKDKBNL_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x13C5E7E0)
#define KHAKNKDKBNL_KJCDAJLKCOI_OFFSET UNITYSDK_OFFSET(0x13C5EC30)
#define KHAKNKDKBNL_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x71F510)
#define KHAKNKDKBNL__CTOR_OFFSET UNITYSDK_OFFSET(0x71F450)

inline static constexpr unsigned int KHAKNKDKBNL_TypeDefinitionIndex = 52619;

struct alignas(8) KHAKNKDKBNL
{
	::MoleMole::Cameras::CameraTrackSetting* DKANPKBIMFM; // 0x10
	::PipelineCamera::TimeBasedAlphaGenerator* CAHNMPOGHII; // 0x18
	::System::Single BJMBOABGKOK; // 0x20
	::System::Byte _padding0[0x4];
	::System::Func_1<::System::Single>* CCDNFNCMJGE; // 0x28
	::System::Boolean MEMEINPDGMG; // 0x30

	::System::Void _ctor(::MoleMole::Cameras::CameraTrackSetting* LDDJOFHAOHG, ::System::Func_1<::System::Single>* CAOPDAMCNCN, ::PipelineCamera::TimeBasedAlphaGenerator* GADJOENDAGM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraTrackSetting*, ::System::Func_1<::System::Single>*, ::PipelineCamera::TimeBasedAlphaGenerator*))((::PBYTE)hIl2Cpp + KHAKNKDKBNL__CTOR_OFFSET))(this, LDDJOFHAOHG, CAOPDAMCNCN, GADJOENDAGM);
	}

	/*
	static ::System::Nullable_1<::KHAKNKDKBNL> COKNIICCODC(::MoleMole::Cameras::CameraTrackSetting* KDHHPEDFPIM, ::OCLPKBONCJJ& FCEIKAIDHPM)
	{
		return ((::System::Nullable_1<::KHAKNKDKBNL>(*)(::MoleMole::Cameras::CameraTrackSetting*, ::OCLPKBONCJJ&))((::PBYTE)hIl2Cpp + KHAKNKDKBNL_COKNIICCODC_OFFSET))(KDHHPEDFPIM, FCEIKAIDHPM);
	}
	*/

	/*
	::System::Nullable_1<::KHAKNKDKBNL> OKJCHFGIKBH(::System::Single PMNLNNGEIFM, ::MoleMole::Cameras::CameraTrackSetting*& HLFFCMIFFIB, ::MoleMole::Cameras::CameraTrackSetting*& AJMCCOEAIFE)
	{
		return ((::System::Nullable_1<::KHAKNKDKBNL>(*)(::PVOID, ::System::Single, ::MoleMole::Cameras::CameraTrackSetting*&, ::MoleMole::Cameras::CameraTrackSetting*&))((::PBYTE)hIl2Cpp + KHAKNKDKBNL_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM, HLFFCMIFFIB, AJMCCOEAIFE);
	}
	*/

	static ::System::String* KJCDAJLKCOI(::MoleMole::CameraOrbit& DDKAJHFOMBG)
	{
		return ((::System::String*(*)(::MoleMole::CameraOrbit&))((::PBYTE)hIl2Cpp + KHAKNKDKBNL_KJCDAJLKCOI_OFFSET))(DDKAJHFOMBG);
	}
};
