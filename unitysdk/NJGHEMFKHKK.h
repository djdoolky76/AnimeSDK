#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIFNAMIJCHM.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/PCODMIJEJEP.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class CIJKMEDBHMM;
class MonoNPCCrowdPlatModelComponent;
class SceneObjectPlatModelConfig;
namespace MoleMole { class SceneObjectStateWidget; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Renderer; }

#define NJGHEMFKHKK_AOEAEDNFJBI_OFFSET UNITYSDK_OFFSET(0x11F83430)
#define NJGHEMFKHKK_CDLMGGELDED_OFFSET UNITYSDK_OFFSET(0x11F82A80)
#define NJGHEMFKHKK_CLJBOPDANAJ_OFFSET UNITYSDK_OFFSET(0x11F832F0)
#define NJGHEMFKHKK_DEAHGMDIAFJ_OFFSET UNITYSDK_OFFSET(0x11F834D0)
#define NJGHEMFKHKK_DHDGKLLAHFC_OFFSET UNITYSDK_OFFSET(0x11F82DF0)
#define NJGHEMFKHKK_FJLKEACBKKF_OFFSET UNITYSDK_OFFSET(0x11F831D0)
#define NJGHEMFKHKK_NAIFLDEIPIN_OFFSET UNITYSDK_OFFSET(0x11F83260)
#define NJGHEMFKHKK_OABMBBANMCM_OFFSET UNITYSDK_OFFSET(0x11F826A0)
#define NJGHEMFKHKK_OIBFEKPCDAL_OFFSET UNITYSDK_OFFSET(0x11F83120)
#define NJGHEMFKHKK_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x11F82890)
#define NJGHEMFKHKK_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x11F82ED0)
#define NJGHEMFKHKK_PCHHCBFOKFN_OFFSET UNITYSDK_OFFSET(0x11F82830)
#define NJGHEMFKHKK__CTOR_OFFSET UNITYSDK_OFFSET(0x11F825D0)

inline static constexpr unsigned int NJGHEMFKHKK_TypeDefinitionIndex = 71648;

class NJGHEMFKHKK : public ::DIFNAMIJCHM
{
public:
	::UnityEngine::MaterialPropertyBlock* AADDEFIKAEE; // 0x38
	::SceneObjectPlatModelConfig* DFMKILICPFB; // 0x40
	::Il2CppArray<::MonoNPCCrowdPlatModelComponent*>* OLBGELFAOAB; // 0x48
	::System::Threading::CancellationTokenSource* MPPGOFIIMEM; // 0x50
	::Il2CppArray<::UnityEngine::MeshRenderer*>* BEIHFMAHMAJ; // 0x58
	::System::Single DBAIGKJEINJ; // 0x60

	::System::Void _ctor(::CIJKMEDBHMM* LJBPECKCCEA, ::MoleMole::SceneObjectStateWidget* GADOMGLJNNJ, ::System::Action_1<::PCODMIJEJEP>* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::CIJKMEDBHMM*, ::MoleMole::SceneObjectStateWidget*, ::System::Action_1<::PCODMIJEJEP>*))((::PBYTE)hIl2Cpp + NJGHEMFKHKK__CTOR_OFFSET))(this, LJBPECKCCEA, GADOMGLJNNJ, IGAAKDOIPNN);
	}

	::System::Void OABMBBANMCM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGHEMFKHKK_OABMBBANMCM_OFFSET))(this);
	}

	::System::Void PCHHCBFOKFN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGHEMFKHKK_PCHHCBFOKFN_OFFSET))(this);
	}

	::System::Void OnTriggerEnter(::UnityEngine::Collider* BDHOILPIGKB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + NJGHEMFKHKK_ONTRIGGERENTER_OFFSET))(this, BDHOILPIGKB);
	}

	::System::Void OnTriggerExit(::UnityEngine::Collider* BDHOILPIGKB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + NJGHEMFKHKK_ONTRIGGEREXIT_OFFSET))(this, BDHOILPIGKB);
	}

	::System::Void OIBFEKPCDAL(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NJGHEMFKHKK_OIBFEKPCDAL_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void FJLKEACBKKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGHEMFKHKK_FJLKEACBKKF_OFFSET))(this);
	}

	::System::Void DHDGKLLAHFC(::System::Boolean OKKALHDMJIO, ::System::Threading::CancellationToken OMMEALOOOOD, ::System::Action* JLMLJIMBKKP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Threading::CancellationToken, ::System::Action*))((::PBYTE)hIl2Cpp + NJGHEMFKHKK_DHDGKLLAHFC_OFFSET))(this, OKKALHDMJIO, OMMEALOOOOD, JLMLJIMBKKP);
	}

	::System::Void NAIFLDEIPIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGHEMFKHKK_NAIFLDEIPIN_OFFSET))(this);
	}

	::System::Void CDLMGGELDED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGHEMFKHKK_CDLMGGELDED_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask CLJBOPDANAJ(::Il2CppArray<::UnityEngine::Renderer*>* AEPONOJONAA, ::System::Single PALKJEELJHL, ::System::Boolean OKKALHDMJIO, ::System::Threading::CancellationToken OMMEALOOOOD, ::System::Action* JLMLJIMBKKP)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*, ::System::Single, ::System::Boolean, ::System::Threading::CancellationToken, ::System::Action*))((::PBYTE)hIl2Cpp + NJGHEMFKHKK_CLJBOPDANAJ_OFFSET))(this, AEPONOJONAA, PALKJEELJHL, OKKALHDMJIO, OMMEALOOOOD, JLMLJIMBKKP);
	}

	::System::Void AOEAEDNFJBI(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NJGHEMFKHKK_AOEAEDNFJBI_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void DEAHGMDIAFJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGHEMFKHKK_DEAHGMDIAFJ_OFFSET))(this);
	}
};
