#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class FILNFMCNCFE;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger; }

#define NGLEKLMBIKE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x172897F0)
#define NGLEKLMBIKE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x172896D0)
#define NGLEKLMBIKE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17289460)
#define NGLEKLMBIKE__CTOR_OFFSET UNITYSDK_OFFSET(0x172897E0)

inline static constexpr unsigned int NGLEKLMBIKE_TypeDefinitionIndex = 72102;

class NGLEKLMBIKE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::CanvasGroup* GPHAEDMALMK; // 0x18
	::FILNFMCNCFE* CHCCPCCKJBG; // 0x20
	::MoleMole::MonoGamepadSelectable* NCJLJGGCOJK; // 0x28
	::FGCOIBFFCHB* OALDPHIMHHK; // 0x30
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x38
	::FGCOIBFFCHB* AJIBHBJNOCE; // 0x40
	::UnityEngine::Transform* AMGKPEFJIEE; // 0x48
	::LGINJIKKBJA* KFOKPEHEAPI; // 0x50
	::UnityEngine::UI::Extension::UIImgEventTrigger* KNHLOHIEIIL; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLEKLMBIKE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NGLEKLMBIKE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NGLEKLMBIKE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLEKLMBIKE_KGEBDLGBGNM_OFFSET))(this);
	}
};
