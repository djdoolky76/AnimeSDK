#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Config { class SlideRopeCameraConfig; }
namespace System { class String; }

#define FOENNNFFBGL_HBOFMOOEMEC__CTOR_OFFSET UNITYSDK_OFFSET(0x682500)

inline static constexpr unsigned int FOENNNFFBGL_HBOFMOOEMEC_TypeDefinitionIndex = 47046;

struct alignas(8) FOENNNFFBGL_HBOFMOOEMEC
{
	::System::Boolean IFJHHJCOIHC; // 0x10
	::System::Boolean MBOOCOLEMAN; // 0x11
	::System::Byte _padding0[0x6];
	::System::String* AFJGIKEGAKL; // 0x18
	::System::Single MMDPCKLNNOF; // 0x20
	::System::Byte _padding1[0x4];
	::MoleMole::Cameras::CameraTrackBlending* HLLFPBDMHNJ; // 0x28
	::MoleMole::Cameras::CameraTrackBlending* CCAKMNAGMGD; // 0x30
	::MoleMole::Cameras::CameraTrackBlending* JCANGDBLDEK; // 0x38
	::MoleMole::Cameras::CameraTrackBlending* BBJECPBIKEE; // 0x40
	::System::Single CPPFBIPGJIF; // 0x48
	::System::Single CNKEJBHEIIH; // 0x4C
	::System::Single DMBJMHHKHDE; // 0x50
	::System::Single PMKDBJLPMIG; // 0x54
	::System::Single IEEHOGFDDNK; // 0x58
	::System::Single KJHPKFCFAMP; // 0x5C
	::System::Single BAFOIENGGLP; // 0x60
	::System::Single OLDCODIGJLF; // 0x64
	::System::Single EDEAOEIAJGI; // 0x68
	::System::Single NCCDJLDKFGA; // 0x6C
	::System::Boolean MAJBLAFIDGN; // 0x70
	::System::Byte _padding2[0x3];
	::System::Single FJPNEGOEHBN; // 0x74
	::System::Single ECMOEENIHME; // 0x78
	::System::Single NACOBIFHLEA; // 0x7C
	::UnityEngine::Vector3 IFGMEKLICHN; // 0x80
	::System::Single AIADPENHJJP; // 0x8C
	::System::Single GBPGFCGCHIJ; // 0x90
	::UnityEngine::Vector2 DFPJMNPKKGI; // 0x94
	::System::Byte _padding3[0x4];
	::System::String* JMFGFCBJGCB; // 0xA0
	::System::String* LCMKEKDBDBE; // 0xA8
	::System::Boolean GICPJLFMNEH; // 0xB0
	::System::Boolean FGFLKJHDBDO; // 0xB1
	::System::Byte _padding4[0x2];
	::System::Single NLGMEIDHFDO; // 0xB4
	::System::Single JFNKLABLLJC; // 0xB8
	::System::Single BNAHPLPOAIN; // 0xBC
	::System::Boolean PFCFFGCABJJ; // 0xC0
	::System::Byte _padding5[0x3];
	::System::Single CPPGLLPLHEG; // 0xC4
	::System::Single LOJBPFACIAI; // 0xC8
	::System::Single CBPKIOELPKO; // 0xCC
	::System::Single IEJIMAOIPGN; // 0xD0
	::System::Boolean EHMHAOEGNIO; // 0xD4

	::System::Void _ctor(::MoleMole::Config::SlideRopeCameraConfig* CBLGCIFLMKL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SlideRopeCameraConfig*))((::PBYTE)hIl2Cpp + FOENNNFFBGL_HBOFMOOEMEC__CTOR_OFFSET))(this, CBLGCIFLMKL);
	}
};
