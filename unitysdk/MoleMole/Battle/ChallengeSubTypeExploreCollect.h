#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/ChallengeSubTypeItem.h"

class BNLCDBNAFJC;
class ENGKPGFGGLM;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEEXPLORECOLLECT_GETCURRENTCOUNT_OFFSET UNITYSDK_OFFSET(0x11E66A90)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEEXPLORECOLLECT_GETPROGRESSSTRING_OFFSET UNITYSDK_OFFSET(0x11E66B30)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEEXPLORECOLLECT_GETPROGRESS_OFFSET UNITYSDK_OFFSET(0x11E66AD0)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEEXPLORECOLLECT_GET_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x11E66A40)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEEXPLORECOLLECT_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x11E66960)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEEXPLORECOLLECT__CTOR_OFFSET UNITYSDK_OFFSET(0x11E667B0)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEEXPLORECOLLECT___BASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x11E66C10)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ChallengeSubTypeExploreCollect_TypeDefinitionIndex = 76579;

	class ChallengeSubTypeExploreCollect : public ::MoleMole::Battle::ChallengeSubTypeItem
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* itemIDs; // 0x20
		::System::Int32 targetItemCount; // 0x28
		::System::Int32 collectItemCount; // 0x2C

		::System::Void _ctor(::BNLCDBNAFJC* inTemplate)
		{
			return ((::System::Void(*)(::PVOID, ::BNLCDBNAFJC*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEEXPLORECOLLECT__CTOR_OFFSET))(this, inTemplate);
		}

		::System::Void OnEventFromAnyone(::ENGKPGFGGLM* evt)
		{
			return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEEXPLORECOLLECT_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Boolean get_IsSuccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEEXPLORECOLLECT_GET_ISSUCCESS_OFFSET))(this);
		}

		::System::Int32 GetCurrentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEEXPLORECOLLECT_GETCURRENTCOUNT_OFFSET))(this);
		}

		::System::Single GetProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEEXPLORECOLLECT_GETPROGRESS_OFFSET))(this);
		}

		::System::String* GetProgressString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEEXPLORECOLLECT_GETPROGRESSSTRING_OFFSET))(this);
		}

		::System::Void __base_OnEventFromAnyone(::ENGKPGFGGLM* P0)
		{
			return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEEXPLORECOLLECT___BASE_ONEVENTFROMANYONE_OFFSET))(this, P0);
		}
	};
}
