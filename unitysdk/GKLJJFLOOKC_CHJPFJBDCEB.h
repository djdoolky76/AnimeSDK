#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBFAEBLCJMD.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define GKLJJFLOOKC_CHJPFJBDCEB_BAFLJLMOMDL_OFFSET UNITYSDK_OFFSET(0x17A0F4A0)
#define GKLJJFLOOKC_CHJPFJBDCEB_BAIMJJBHJHM_OFFSET UNITYSDK_OFFSET(0x17A0F2C0)
#define GKLJJFLOOKC_CHJPFJBDCEB_BKGDCLLBLAA_OFFSET UNITYSDK_OFFSET(0x17A0ECB0)
#define GKLJJFLOOKC_CHJPFJBDCEB_BOIHHDJDAIO_OFFSET UNITYSDK_OFFSET(0x17A0F700)
#define GKLJJFLOOKC_CHJPFJBDCEB_OONCPLGMGGJ_OFFSET UNITYSDK_OFFSET(0x17A0EAE0)
#define GKLJJFLOOKC_CHJPFJBDCEB__CTOR_OFFSET UNITYSDK_OFFSET(0x17A0E9D0)

inline static constexpr unsigned int GKLJJFLOOKC_CHJPFJBDCEB_TypeDefinitionIndex = 76997;

class GKLJJFLOOKC_CHJPFJBDCEB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Type*>* BJAKLPIJMHL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::FBFAEBLCJMD>* OCJDJGOKALJ; // 0x18

	::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::FBFAEBLCJMD, ::System::Object*>* BFOAAMIOJNG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::FBFAEBLCJMD, ::System::Object*>*))((::PBYTE)hIl2Cpp + GKLJJFLOOKC_CHJPFJBDCEB__CTOR_OFFSET))(this, BFOAAMIOJNG);
	}

	::System::Void BKGDCLLBLAA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLJJFLOOKC_CHJPFJBDCEB_BKGDCLLBLAA_OFFSET))(this);
	}

	::System::Void OONCPLGMGGJ(::System::Collections::Generic::Dictionary_2<::FBFAEBLCJMD, ::System::Object*>* BFOAAMIOJNG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::FBFAEBLCJMD, ::System::Object*>*))((::PBYTE)hIl2Cpp + GKLJJFLOOKC_CHJPFJBDCEB_OONCPLGMGGJ_OFFSET))(this, BFOAAMIOJNG);
	}

	::System::Boolean BAIMJJBHJHM(::UnityEngine::Object*& KCBDGFHGNJN, ::FBFAEBLCJMD& MBBMGDPCHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Object*&, ::FBFAEBLCJMD&))((::PBYTE)hIl2Cpp + GKLJJFLOOKC_CHJPFJBDCEB_BAIMJJBHJHM_OFFSET))(this, KCBDGFHGNJN, MBBMGDPCHAK);
	}

	::UnityEngine::Object* BAFLJLMOMDL(::UnityEngine::GameObject* NJOAJLDJCCJ, ::FBFAEBLCJMD& MBBMGDPCHAK)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::UnityEngine::GameObject*, ::FBFAEBLCJMD&))((::PBYTE)hIl2Cpp + GKLJJFLOOKC_CHJPFJBDCEB_BAFLJLMOMDL_OFFSET))(this, NJOAJLDJCCJ, MBBMGDPCHAK);
	}

	::FBFAEBLCJMD BOIHHDJDAIO(::UnityEngine::Object* KCBDGFHGNJN)
	{
		return ((::FBFAEBLCJMD(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + GKLJJFLOOKC_CHJPFJBDCEB_BOIHHDJDAIO_OFFSET))(this, KCBDGFHGNJN);
	}
};
