#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDDEIPOBBCN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMEDALINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xDF43630)
#define RPG_CLIENT_ROGUEMEDALINFO_GET_UNLOCKEDMEDALITEMIDS_OFFSET UNITYSDK_OFFSET(0xDF437D0)
#define RPG_CLIENT_ROGUEMEDALINFO_ISMETALUNLOCKED_OFFSET UNITYSDK_OFFSET(0xDF43710)
#define RPG_CLIENT_ROGUEMEDALINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xDF43690)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMedalInfo_TypeDefinitionIndex = 67360;

	class RogueMedalInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockedMedalItemIDs_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMEDALINFO_CTOR_OFFSET))(this);
		}

		::System::Void Sync(::CDDEIPOBBCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDDEIPOBBCN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMEDALINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Boolean IsMetalUnlocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMEDALINFO_ISMETALUNLOCKED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_UnlockedMedalItemIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMEDALINFO_GET_UNLOCKEDMEDALITEMIDS_OFFSET))(this);
		}

	};
}
