#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/System/Object.h"

class CJIEIHEDMME;
class GIBMJLOJLKD;
class IBENDELLLAO;
class KMBKDFCNHPJ;
namespace MoleMole { class ActivityWidgetContext; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralConsoleExistNormalBtnWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class UnityAction; }

#define KDJEMDDDGPG_BAGCCOLGHPA_OFFSET UNITYSDK_OFFSET(0x16336480)
#define KDJEMDDDGPG_DNIIFJCAFCG_OFFSET UNITYSDK_OFFSET(0x16336990)
#define KDJEMDDDGPG_ELBLEOLNDHA_OFFSET UNITYSDK_OFFSET(0x16336560)
#define KDJEMDDDGPG_FHGMNHFHHCD_OFFSET UNITYSDK_OFFSET(0x16336520)
#define KDJEMDDDGPG_GLBGHPMAGHL_OFFSET UNITYSDK_OFFSET(0x163364D0)
#define KDJEMDDDGPG_KFBFKKIFJOO_OFFSET UNITYSDK_OFFSET(0x16336420)
#define KDJEMDDDGPG_KJJGFAGCCDG_OFFSET UNITYSDK_OFFSET(0x16336B50)
#define KDJEMDDDGPG_KMAKMBGDKIF_1_OFFSET UNITYSDK_OFFSET(0x16336BF0)
#define KDJEMDDDGPG_KMAKMBGDKIF_OFFSET UNITYSDK_OFFSET(0x163365F0)
#define KDJEMDDDGPG_NGKBDNAHBDI_OFFSET UNITYSDK_OFFSET(0x163365A0)
#define KDJEMDDDGPG__CTOR_OFFSET UNITYSDK_OFFSET(0x163365E0)

inline static constexpr unsigned int KDJEMDDDGPG_TypeDefinitionIndex = 74635;

class KDJEMDDDGPG : public ::System::Object
{
public:
	::CJIEIHEDMME* DPLFPODJFCJ; // 0x10
	::MoleMole::UIGeneralConsoleExistNormalBtnWidgetController* OIFFICKFHCF; // 0x18
	::KMBKDFCNHPJ* DOKNLPLMAEE; // 0x20
	::MoleMole::ActivityWidgetContext* IEEFDGOBNND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJEMDDDGPG__CTOR_OFFSET))(this);
	}

	::System::Void KFBFKKIFJOO(::MoleMole::UIBaseController* LPECOCOJLOO, ::GIBMJLOJLKD* EGOKJMCKOOK, ::MoleMole::UIControllerContextBase* KMCJLGLCOHD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::GIBMJLOJLKD*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + KDJEMDDDGPG_KFBFKKIFJOO_OFFSET))(this, LPECOCOJLOO, EGOKJMCKOOK, KMCJLGLCOHD);
	}

	::System::Void BAGCCOLGHPA(::MoleMole::UIControllerContextBase* BCINNCIHNHB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + KDJEMDDDGPG_BAGCCOLGHPA_OFFSET))(this, BCINNCIHNHB);
	}

	::System::Void GLBGHPMAGHL(::MoleMole::UIControllerContextBase* BCINNCIHNHB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + KDJEMDDDGPG_GLBGHPMAGHL_OFFSET))(this, BCINNCIHNHB);
	}

	::System::Void FHGMNHFHHCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJEMDDDGPG_FHGMNHFHHCD_OFFSET))(this);
	}

	::System::Void ELBLEOLNDHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJEMDDDGPG_ELBLEOLNDHA_OFFSET))(this);
	}

	::System::Void NGKBDNAHBDI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJEMDDDGPG_NGKBDNAHBDI_OFFSET))(this);
	}

	::System::Void KMAKMBGDKIF(::UnityEngine::Events::UnityAction* JOKBOIJCOCM, ::IBENDELLLAO* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*, ::IBENDELLLAO*))((::PBYTE)hIl2Cpp + KDJEMDDDGPG_KMAKMBGDKIF_OFFSET))(this, JOKBOIJCOCM, HHIJHDFHPOI);
	}

	::System::Boolean DNIIFJCAFCG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJEMDDDGPG_DNIIFJCAFCG_OFFSET))(this);
	}

	::System::Void KMAKMBGDKIF_1(::UnityEngine::Events::UnityAction* JOKBOIJCOCM, ::Share::ENotificationBadgeType LAGAJFFDION)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + KDJEMDDDGPG_KMAKMBGDKIF_1_OFFSET))(this, JOKBOIJCOCM, LAGAJFFDION);
	}

	::System::Boolean KJJGFAGCCDG(::System::Collections::Generic::List_1<::System::Int32>* LGAIPDPHNKF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + KDJEMDDDGPG_KJJGFAGCCDG_OFFSET))(this, LGAIPDPHNKF);
	}
};
