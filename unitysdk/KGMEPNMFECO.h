#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UITabButton; }
template <typename T> class KNLFLMMHALL_1;

#define KGMEPNMFECO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x157EB390)
#define KGMEPNMFECO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x157EB2A0)
#define KGMEPNMFECO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x157EB0F0)
#define KGMEPNMFECO__CTOR_OFFSET UNITYSDK_OFFSET(0x157EB380)

inline static constexpr unsigned int KGMEPNMFECO_TypeDefinitionIndex = 82841;

class KGMEPNMFECO : public ::GIBMJLOJLKD
{
public:
	::KNLFLMMHALL_1<::System::Object*>* DJKOBDEJNME; // 0x18
	::UnityEngine::UI::Extension::UITabButton* OEPAJHOAAAI; // 0x20
	::MoleMole::NotificationBadge* MAMKMHKDPCA; // 0x28
	::KNLFLMMHALL_1<::System::Object*>* AJIBHBJNOCE; // 0x30
	::UnityEngine::RectTransform* KKMCLPDAJKJ; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMEPNMFECO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KGMEPNMFECO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KGMEPNMFECO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMEPNMFECO_KGEBDLGBGNM_OFFSET))(this);
	}
};
