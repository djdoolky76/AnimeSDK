#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LIDMAHENGEH.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DBCEBKGJOCL.h"

namespace MoleMole { class UIInLevelSkillButtonUltBaseController; }
namespace MoleMole { class UIInLevelSkillButtonUltChildWindowController; }
namespace MoleMole { class UIWindowController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define PECAACDDPCL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11B59520)
#define PECAACDDPCL_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x11B62450)
#define PECAACDDPCL_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x11B611D0)
#define PECAACDDPCL_HOIJICBODBD_OFFSET UNITYSDK_OFFSET(0x11B62650)
#define PECAACDDPCL_ICKCNALFHOI_OFFSET UNITYSDK_OFFSET(0x11B616D0)
#define PECAACDDPCL_JGNCJMCHBJN_OFFSET UNITYSDK_OFFSET(0x11B61660)
#define PECAACDDPCL_KGCHOBKCIHI_OFFSET UNITYSDK_OFFSET(0x11B62090)
#define PECAACDDPCL_LJAPJFDPIKF_OFFSET UNITYSDK_OFFSET(0x11B61F10)
#define PECAACDDPCL_LLEJDDJHGMK_OFFSET UNITYSDK_OFFSET(0x11B61370)
#define PECAACDDPCL_MJGHFMFCNPH_OFFSET UNITYSDK_OFFSET(0x11B5C250)
#define PECAACDDPCL_NHJFNEOMIIG_OFFSET UNITYSDK_OFFSET(0x11B61B90)
#define PECAACDDPCL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11B61040)
#define PECAACDDPCL__CTOR_OFFSET UNITYSDK_OFFSET(0x11B60F30)

inline static constexpr unsigned int PECAACDDPCL_TypeDefinitionIndex = 49364;

class PECAACDDPCL : public ::System::Object
{
public:
	::MoleMole::EntityHandle LDLMPHEEKBG; // 0x10
	::MoleMole::UIWindowController* BFEKOMPBJHN; // 0x20
	::MoleMole::UIInLevelSkillButtonUltBaseController* NGJJFALABEH; // 0x28
	::UnityEngine::Transform* MOBHBKLNFGG; // 0x30
	::System::Collections::Generic::Dictionary_2<::LIDMAHENGEH, ::MoleMole::UIInLevelSkillButtonUltBaseController*>* PHLOAODHDHA; // 0x38
	::MoleMole::UIInLevelSkillButtonUltChildWindowController* DOKIBOPFNHP; // 0x40
	::MoleMole::EntityHandle FCHHJFGEMAC; // 0x48
	::System::Boolean ABFAGOBGMAO; // 0x58
	::System::Boolean PJNALFNPNBK; // 0x59
	::System::Boolean GEJDJLNLFGI; // 0x5A

	::System::Void _ctor(::MoleMole::UIWindowController* GHBLGLMKCEJ, ::UnityEngine::Transform* DAGLOLDCDBN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PECAACDDPCL__CTOR_OFFSET))(this, GHBLGLMKCEJ, DAGLOLDCDBN);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECAACDDPCL_DISPOSE_OFFSET))(this);
	}

	::System::Void LLEJDDJHGMK(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + PECAACDDPCL_LLEJDDJHGMK_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void NHJFNEOMIIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECAACDDPCL_NHJFNEOMIIG_OFFSET))(this);
	}

	::MoleMole::EntityHandle JGNCJMCHBJN()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + PECAACDDPCL_JGNCJMCHBJN_OFFSET))(this);
	}

	::System::Void LJAPJFDPIKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECAACDDPCL_LJAPJFDPIKF_OFFSET))(this);
	}

	::System::Void MJGHFMFCNPH(::DBCEBKGJOCL PIMIGNMPNFF)
	{
		return ((::System::Void(*)(::PVOID, ::DBCEBKGJOCL))((::PBYTE)hIl2Cpp + PECAACDDPCL_MJGHFMFCNPH_OFFSET))(this, PIMIGNMPNFF);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECAACDDPCL_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Boolean ICKCNALFHOI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PECAACDDPCL_ICKCNALFHOI_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECAACDDPCL_HFBPONNNLBA_OFFSET))(this);
	}

	::System::Void HOIJICBODBD(::System::Boolean NNJLDLIHINN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PECAACDDPCL_HOIJICBODBD_OFFSET))(this, NNJLDLIHINN);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECAACDDPCL_OJENCMOGDKL_OFFSET))(this);
	}

	::MoleMole::UIInLevelSkillButtonUltBaseController* KGCHOBKCIHI(::LIDMAHENGEH PMLIKGKIFJJ)
	{
		return ((::MoleMole::UIInLevelSkillButtonUltBaseController*(*)(::PVOID, ::LIDMAHENGEH))((::PBYTE)hIl2Cpp + PECAACDDPCL_KGCHOBKCIHI_OFFSET))(this, PMLIKGKIFJJ);
	}
};
