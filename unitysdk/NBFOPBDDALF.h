#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NBFOPBDDALF_PNFDKMLNCCO.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NBFOPBDDALF;
namespace RPG::Client { class MonoInflatableFighter; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define NBFOPBDDALF_AODJLBNLEGK_OFFSET UNITYSDK_OFFSET(0xBABFEA0)
#define NBFOPBDDALF_BHBDBLBIBHK_OFFSET UNITYSDK_OFFSET(0xBAC0300)
#define NBFOPBDDALF_BMNIMPJKELB_OFFSET UNITYSDK_OFFSET(0xBABFDE0)
#define NBFOPBDDALF_CTOR_OFFSET UNITYSDK_OFFSET(0xBABF9E0)
#define NBFOPBDDALF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBABFAD0)
#define NBFOPBDDALF_FIFKMNNLDDG_OFFSET UNITYSDK_OFFSET(0xBABFE40)
#define NBFOPBDDALF_JCMIIJABICI_OFFSET UNITYSDK_OFFSET(0xBABFB20)
#define NBFOPBDDALF_JFMILGOGGHP_OFFSET UNITYSDK_OFFSET(0xBABFA60)

inline static constexpr unsigned int NBFOPBDDALF_TypeDefinitionIndex = 68668;

	class NBFOPBDDALF : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* JJLOCCGHLIA; // 0x10
		::RPG::Client::MonoInflatableFighter* CEODOONOFBM; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* KIHPPJILDGM; // 0x20
		::System::Void _ctor(::RPG::Client::MonoInflatableFighter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoInflatableFighter*))((::PBYTE)hIl2Cpp + NBFOPBDDALF_CTOR_OFFSET))(this, a1);
		}

		::System::Void JFMILGOGGHP(::RPG::Client::MonoInflatableFighter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoInflatableFighter*))((::PBYTE)hIl2Cpp + NBFOPBDDALF_JFMILGOGGHP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBFOPBDDALF_DISPOSE_OFFSET))(this);
		}

		::System::Boolean JCMIIJABICI(::NBFOPBDDALF* a1, ::NBFOPBDDALF_PNFDKMLNCCO a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::NBFOPBDDALF*, ::NBFOPBDDALF_PNFDKMLNCCO))((::PBYTE)hIl2Cpp + NBFOPBDDALF_JCMIIJABICI_OFFSET))(this, a1, a2);
		}

		::System::Boolean BHBDBLBIBHK(::NBFOPBDDALF* a1, ::NBFOPBDDALF_PNFDKMLNCCO a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::NBFOPBDDALF*, ::NBFOPBDDALF_PNFDKMLNCCO))((::PBYTE)hIl2Cpp + NBFOPBDDALF_BHBDBLBIBHK_OFFSET))(this, a1, a2);
		}

		::System::Boolean AODJLBNLEGK(::UnityEngine::Collider* a1, ::UnityEngine::Collider* a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Collider*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + NBFOPBDDALF_AODJLBNLEGK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean BMNIMPJKELB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBFOPBDDALF_BMNIMPJKELB_OFFSET))(this);
		}

		::System::Boolean FIFKMNNLDDG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBFOPBDDALF_FIFKMNNLDDG_OFFSET))(this);
		}

	};
