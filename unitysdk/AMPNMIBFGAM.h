#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraPreparationState.h"
#include "unitysdk/System/Object.h"
class NOKCGCNICDJ;
namespace RPG::Client::Prop { class ChimeraPreparationStateControllerBase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define AMPNMIBFGAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1558EAF0)
#define AMPNMIBFGAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1558F520)
#define AMPNMIBFGAM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1558F430)
#define AMPNMIBFGAM_KEAFKKMLOKE_OFFSET UNITYSDK_OFFSET(0x1558ED90)
#define AMPNMIBFGAM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1558ED00)
#define AMPNMIBFGAM_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1558ED40)

inline static constexpr unsigned int AMPNMIBFGAM_TypeDefinitionIndex = 78471;

	class AMPNMIBFGAM : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::Prop::ChimeraPreparationState, ::UnityEngine::GameObject*>* MEELBMCGOFK; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::Client::Prop::ChimeraPreparationState, ::RPG::Client::Prop::ChimeraPreparationStateControllerBase*>* IAIHPPPOMFD; // 0x18
		::UnityEngine::Transform* GKNBCPMJHMN; // 0x20
		::RPG::Client::Prop::ChimeraPreparationStateControllerBase* DDCEKHJGMMJ; // 0x28
		::NOKCGCNICDJ* IPLGCJPLIKH; // 0x30
		::System::Void _ctor(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1, ::UnityEngine::Transform* a2, ::NOKCGCNICDJ* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::UnityEngine::Transform*, ::NOKCGCNICDJ*))((::PBYTE)hIl2Cpp + AMPNMIBFGAM_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMPNMIBFGAM_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB(::RPG::Client::Prop::ChimeraPreparationState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraPreparationState))((::PBYTE)hIl2Cpp + AMPNMIBFGAM_NPAFMEBNFOB_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AMPNMIBFGAM_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void KEAFKKMLOKE(::RPG::Client::Prop::ChimeraPreparationState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraPreparationState))((::PBYTE)hIl2Cpp + AMPNMIBFGAM_KEAFKKMLOKE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMPNMIBFGAM_DISPOSE_OFFSET))(this);
		}

	};
