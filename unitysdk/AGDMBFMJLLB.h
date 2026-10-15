#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMMEEFLCJEN;
namespace RPG::Client { class UIController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define AGDMBFMJLLB_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xCF206A0)
#define AGDMBFMJLLB_CTOR_OFFSET UNITYSDK_OFFSET(0xCF207A0)
#define AGDMBFMJLLB_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xCF203B0)
#define AGDMBFMJLLB_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xCF20350)

inline static constexpr unsigned int AGDMBFMJLLB_TypeDefinitionIndex = 71638;

	class AGDMBFMJLLB : public ::System::Object
	{
	public:
		::UnityEngine::Transform* KJMDDAHEODL; // 0x10
		::RPG::Client::UIController* CFKHNPGEAJA; // 0x18
		::System::Collections::Generic::List_1<::DMMEEFLCJEN*>* GCIKKMGIPIO; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDMBFMJLLB_CTOR_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::RPG::Client::UIController* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + AGDMBFMJLLB_NKPPGDENJAE_OFFSET))(this, a1, a2);
		}

		::System::Void LJBCDJNNBJH(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + AGDMBFMJLLB_LJBCDJNNBJH_OFFSET))(this, a1);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDMBFMJLLB_ABKBOGIGAEH_OFFSET))(this);
		}

	};
