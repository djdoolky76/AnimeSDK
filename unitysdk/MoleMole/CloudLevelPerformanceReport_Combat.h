#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CLOUDLEVELPERFORMANCEREPORT_COMBAT_FEFFFICDKIJ_OFFSET UNITYSDK_OFFSET(0x11A54830)
#define MOLEMOLE_CLOUDLEVELPERFORMANCEREPORT_COMBAT_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0x11A54810)
#define MOLEMOLE_CLOUDLEVELPERFORMANCEREPORT_COMBAT_GET_SCENENAME_OFFSET UNITYSDK_OFFSET(0x11A547F0)
#define MOLEMOLE_CLOUDLEVELPERFORMANCEREPORT_COMBAT_NBMJMMGEMJH_OFFSET UNITYSDK_OFFSET(0x11A54D10)
#define MOLEMOLE_CLOUDLEVELPERFORMANCEREPORT_COMBAT_SET_LEVELID_OFFSET UNITYSDK_OFFSET(0x11A54820)
#define MOLEMOLE_CLOUDLEVELPERFORMANCEREPORT_COMBAT_SET_SCENENAME_OFFSET UNITYSDK_OFFSET(0x11A54800)
#define MOLEMOLE_CLOUDLEVELPERFORMANCEREPORT_COMBAT__CTOR_OFFSET UNITYSDK_OFFSET(0x11A54E80)

namespace MoleMole
{
	inline static constexpr unsigned int CloudLevelPerformanceReport_Combat_TypeDefinitionIndex = 84595;

	class CloudLevelPerformanceReport_Combat : public ::System::Object
	{
	public:
		::System::String* _SceneName_k__BackingField; // 0x10
		::System::Int32 _LevelID_k__BackingField; // 0x18
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Int32>* AvatarTemplateID; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* BuddyTemplateID; // 0x28
		::System::Int32 EndFightType; // 0x30
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::List_1<::System::Int32>* MonsterTemplateID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDLEVELPERFORMANCEREPORT_COMBAT__CTOR_OFFSET))(this);
		}

		::System::String* get_SceneName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDLEVELPERFORMANCEREPORT_COMBAT_GET_SCENENAME_OFFSET))(this);
		}

		::System::Void set_SceneName(::System::String* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDLEVELPERFORMANCEREPORT_COMBAT_SET_SCENENAME_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Int32 get_LevelID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDLEVELPERFORMANCEREPORT_COMBAT_GET_LEVELID_OFFSET))(this);
		}

		::System::Void set_LevelID(::System::Int32 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDLEVELPERFORMANCEREPORT_COMBAT_SET_LEVELID_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Boolean FEFFFICDKIJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDLEVELPERFORMANCEREPORT_COMBAT_FEFFFICDKIJ_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* NBMJMMGEMJH()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDLEVELPERFORMANCEREPORT_COMBAT_NBMJMMGEMJH_OFFSET))(this);
		}
	};
}
