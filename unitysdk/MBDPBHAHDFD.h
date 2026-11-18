#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class MiniUIGameCurvesRenderer;
namespace MoleMole { class MonoUICurveConfig; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MBDPBHAHDFD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11F2F6B0)
#define MBDPBHAHDFD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11F2F620)
#define MBDPBHAHDFD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11F2F380)
#define MBDPBHAHDFD__CTOR_OFFSET UNITYSDK_OFFSET(0x11F2F6A0)

inline static constexpr unsigned int MBDPBHAHDFD_TypeDefinitionIndex = 85334;

class MBDPBHAHDFD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* AEGBEPACJKI; // 0x18
	::UnityEngine::GameObject* OIMLDJCLICF; // 0x20
	::UnityEngine::GameObject* IBDCGKGAMLH; // 0x28
	::MoleMole::MonoUICurveConfig* DJINMLPOOEE; // 0x30
	::UnityEngine::GameObject* CBMNEAHPOMH; // 0x38
	::UnityEngine::GameObject* CJMPCAOJEPM; // 0x40
	::FGCOIBFFCHB* BNKEINBJGEL; // 0x48
	::MiniUIGameCurvesRenderer* JCJEPCGGGNK; // 0x50
	::UnityEngine::GameObject* AHKABPJOJCE; // 0x58
	::GCIMMDDIFBJ* KEMJHIOJMAB; // 0x60
	::UnityEngine::GameObject* BOOIAPHHEJE; // 0x68
	::MiniUIGameCurvesRenderer* LFDIHLMBFBJ; // 0x70
	::UnityEngine::Transform* NKHBICANDAB; // 0x78
	::UnityEngine::GameObject* BANFPCEDDKD; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDPBHAHDFD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MBDPBHAHDFD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MBDPBHAHDFD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDPBHAHDFD_KGEBDLGBGNM_OFFSET))(this);
	}
};
