#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBHCJNLNIFL;
class CMIBMDCJFEG;
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BHGGGEIBACB_CTOR_OFFSET UNITYSDK_OFFSET(0xB478BB0)
#define BHGGGEIBACB_FAJCFOIPJCG_OFFSET UNITYSDK_OFFSET(0xB478930)
#define BHGGGEIBACB_GAGPEAHNCJD_OFFSET UNITYSDK_OFFSET(0xB4786F0)
#define BHGGGEIBACB_IILMIKOGOLL_OFFSET UNITYSDK_OFFSET(0xB4789E0)
#define BHGGGEIBACB_MACLPDKOBMA_OFFSET UNITYSDK_OFFSET(0xB478AC0)
#define BHGGGEIBACB_OGBPPEPPMHM_OFFSET UNITYSDK_OFFSET(0xB478780)

	class BHGGGEIBACB : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TurnBasedModifierInstance*, ::BBHCJNLNIFL*>* EPADNMDFGMP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHGGGEIBACB_CTOR_OFFSET))(this);
		}

		::System::Void GAGPEAHNCJD(::CMIBMDCJFEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMIBMDCJFEG*))((::PBYTE)hIl2Cpp + BHGGGEIBACB_GAGPEAHNCJD_OFFSET))(this, a1);
		}

		::System::Void FAJCFOIPJCG(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + BHGGGEIBACB_FAJCFOIPJCG_OFFSET))(this, a1);
		}

		::BBHCJNLNIFL* IILMIKOGOLL(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::BBHCJNLNIFL*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + BHGGGEIBACB_IILMIKOGOLL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* MACLPDKOBMA()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHGGGEIBACB_MACLPDKOBMA_OFFSET))(this);
		}

		::BBHCJNLNIFL* OGBPPEPPMHM(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::BBHCJNLNIFL*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + BHGGGEIBACB_OGBPPEPPMHM_OFFSET))(this, a1);
		}

	};
