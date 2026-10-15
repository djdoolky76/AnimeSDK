#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
class FKMBGNOKAFF;
class PAADPKGPFMJ;
namespace RPG::GameCore { class FreeStyleAnimGroupEventConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ELIICJFAPLL_CTOR_OFFSET UNITYSDK_OFFSET(0x15523080)
#define ELIICJFAPLL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15522090)
#define ELIICJFAPLL_GHDDHOGIHOM_OFFSET UNITYSDK_OFFSET(0x15522900)
#define ELIICJFAPLL_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x155220F0)
#define ELIICJFAPLL_JLANKNHFKCN_1_OFFSET UNITYSDK_OFFSET(0x15522B60)
#define ELIICJFAPLL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15522240)

inline static constexpr unsigned int ELIICJFAPLL_TypeDefinitionIndex = 57264;

	class ELIICJFAPLL : public ::System::Object
	{
	public:
		::RPG::GameCore::TaskContext* BKIFMPHBIAK; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::FreeStyleAnimGroupEventConfig*>*>* EPLPGIANPBB; // 0x18
		::System::Collections::Generic::List_1<::FKMBGNOKAFF*>* IPLCCFBICHO; // 0x20
		::PAADPKGPFMJ* EOBLJJBOBIN; // 0x28
		::System::Int32 PABLGDMPJGG; // 0x30
		::System::Int32 JJKHELILFJD; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIICJFAPLL_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIICJFAPLL_DISPOSE_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Int32 a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3, ::UnityEngine::AnimatorStateInfo a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::UnityEngine::AnimatorStateInfo))((::PBYTE)hIl2Cpp + ELIICJFAPLL_JLANKNHFKCN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JLANKNHFKCN_1(::System::Int32 a1, ::UnityEngine::AnimatorStateInfo a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimatorStateInfo))((::PBYTE)hIl2Cpp + ELIICJFAPLL_JLANKNHFKCN_1_OFFSET))(this, a1, a2);
		}

		::System::Void GHDDHOGIHOM(::System::Collections::Generic::List_1<::RPG::GameCore::FreeStyleAnimGroupEventConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::FreeStyleAnimGroupEventConfig*>*))((::PBYTE)hIl2Cpp + ELIICJFAPLL_GHDDHOGIHOM_OFFSET))(this, a1);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIICJFAPLL_HFKFNFKIEON_OFFSET))(this);
		}

	};
