#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class EnvVolumeFogController;
class HNLACBJDCGI;
class VideoLightSync;
namespace MoleMole { class MonoCinemaCameraConfig; }
namespace MoleMole { class MonoCinemaCameraLightConfig; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MPLKFDLCENM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14D9B5C0)
#define MPLKFDLCENM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14D9B2A0)
#define MPLKFDLCENM__CTOR_OFFSET UNITYSDK_OFFSET(0x14D9B5B0)

inline static constexpr unsigned int MPLKFDLCENM_TypeDefinitionIndex = 63885;

class MPLKFDLCENM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* OEAKDJJECIO; // 0x18
	::UnityEngine::GameObject* MFJDCDKDJHN; // 0x20
	::UnityEngine::Camera* EFBLHMKMNJD; // 0x28
	::UnityEngine::Transform* EEBNNDMDLJM; // 0x30
	::UnityEngine::Transform* OHKGKIKKPOH; // 0x38
	::UnityEngine::Camera* IFOADDJJDEB; // 0x40
	::MoleMole::MonoCinemaCameraLightConfig* JLGEGOKKADN; // 0x48
	::UnityEngine::Transform* JIIOAFGHLKI; // 0x50
	::UnityEngine::Camera* AHMFJBOPFHE; // 0x58
	::UnityEngine::Transform* GDIFDLINDEA; // 0x60
	::UnityEngine::Transform* HDKKKCNMEAJ; // 0x68
	::UnityEngine::Transform* IAIADJICJIK; // 0x70
	::MoleMole::MonoCinemaCameraConfig* DNNEGFHMGGD; // 0x78
	::UnityEngine::Transform* BADNPINFOJM; // 0x80
	::MoleMole::MonoCinemaCameraConfig* GIHKPGEKFCN; // 0x88
	::UnityEngine::GameObject* AIJGKEKFJOM; // 0x90
	::UnityEngine::Transform* CBDIJHKCDIE; // 0x98
	::EnvVolumeFogController* POLIHCKIJJD; // 0xA0
	::UnityEngine::Transform* ABBCMCHJGNF; // 0xA8
	::UnityEngine::Transform* NOAFNFNLIBK; // 0xB0
	::VideoLightSync* DMIAKEJEJPJ; // 0xB8
	::UnityEngine::Transform* KCEMENGBGPF; // 0xC0
	::MoleMole::MonoCinemaCameraConfig* FFCMLFDFFJG; // 0xC8
	::UnityEngine::Animator* PBANDJKGOGA; // 0xD0
	::UnityEngine::GameObject* EDHFBABPNJC; // 0xD8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPLKFDLCENM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MPLKFDLCENM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MPLKFDLCENM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
