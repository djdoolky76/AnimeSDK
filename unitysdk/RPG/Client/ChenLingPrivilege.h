#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ChenLingPrivilegeRow; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGPRIVILEGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D885BE0)
#define RPG_CLIENT_CHENLINGPRIVILEGE_GETDESC_OFFSET UNITYSDK_OFFSET(0x1D885C80)
#define RPG_CLIENT_CHENLINGPRIVILEGE_GET_ACTIVATED_OFFSET UNITYSDK_OFFSET(0x1D885D50)
#define RPG_CLIENT_CHENLINGPRIVILEGE_GET_COST_OFFSET UNITYSDK_OFFSET(0x1D885D70)
#define RPG_CLIENT_CHENLINGPRIVILEGE_GET_EFFECTID_OFFSET UNITYSDK_OFFSET(0x1D885DB0)
#define RPG_CLIENT_CHENLINGPRIVILEGE_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1D885E10)
#define RPG_CLIENT_CHENLINGPRIVILEGE_GET_ID_OFFSET UNITYSDK_OFFSET(0x1D885D30)
#define RPG_CLIENT_CHENLINGPRIVILEGE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D885DD0)
#define RPG_CLIENT_CHENLINGPRIVILEGE_GET_NEXTIDLIST_OFFSET UNITYSDK_OFFSET(0x1D885D90)
#define RPG_CLIENT_CHENLINGPRIVILEGE_GET_SKILLDESC_OFFSET UNITYSDK_OFFSET(0x1D885DF0)
#define RPG_CLIENT_CHENLINGPRIVILEGE_SET_ACTIVATED_OFFSET UNITYSDK_OFFSET(0x1D885D60)
#define RPG_CLIENT_CHENLINGPRIVILEGE_SET_COST_OFFSET UNITYSDK_OFFSET(0x1D885D80)
#define RPG_CLIENT_CHENLINGPRIVILEGE_SET_EFFECTID_OFFSET UNITYSDK_OFFSET(0x1D885DC0)
#define RPG_CLIENT_CHENLINGPRIVILEGE_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1D885E20)
#define RPG_CLIENT_CHENLINGPRIVILEGE_SET_ID_OFFSET UNITYSDK_OFFSET(0x1D885D40)
#define RPG_CLIENT_CHENLINGPRIVILEGE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1D885DE0)
#define RPG_CLIENT_CHENLINGPRIVILEGE_SET_NEXTIDLIST_OFFSET UNITYSDK_OFFSET(0x1D885DA0)
#define RPG_CLIENT_CHENLINGPRIVILEGE_SET_SKILLDESC_OFFSET UNITYSDK_OFFSET(0x1D885E00)
#define RPG_CLIENT_CHENLINGPRIVILEGE_SYNCACTIVATED_OFFSET UNITYSDK_OFFSET(0x1D885C30)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingPrivilege_TypeDefinitionIndex = 62829;

	class ChenLingPrivilege : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _NextIDList_k__BackingField; // 0x10
		::System::String* _IconPath_k__BackingField; // 0x18
		::RPG::Client::TextID _Name_k__BackingField; // 0x20
		::System::Boolean _Activated_k__BackingField; // 0x30
		::System::Byte _padding0[0x3];
		::System::UInt32 _Cost_k__BackingField; // 0x34
		::System::UInt32 _EffectID_k__BackingField; // 0x38
		::System::UInt32 _ID_k__BackingField; // 0x3C
		::RPG::Client::TextID _SkillDesc_k__BackingField; // 0x40
		::System::Void _ctor(::RPG::GameCore::ChenLingPrivilegeRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingPrivilegeRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_CTOR_OFFSET))(this, a1);
		}

		::System::Void SyncActivated(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_SYNCACTIVATED_OFFSET))(this, a1);
		}

		::System::String* GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_GETDESC_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_SET_ID_OFFSET))(this, a1);
		}

		::System::Boolean get_Activated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_GET_ACTIVATED_OFFSET))(this);
		}

		::System::Void set_Activated(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_SET_ACTIVATED_OFFSET))(this, a1);
		}

		::System::UInt32 get_Cost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_GET_COST_OFFSET))(this);
		}

		::System::Void set_Cost(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_SET_COST_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_NextIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_GET_NEXTIDLIST_OFFSET))(this);
		}

		::System::Void set_NextIDList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_SET_NEXTIDLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_EffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_GET_EFFECTID_OFFSET))(this);
		}

		::System::Void set_EffectID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_SET_EFFECTID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_SET_NAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_SkillDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_GET_SKILLDESC_OFFSET))(this);
		}

		::System::Void set_SkillDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_SET_SKILLDESC_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_SET_ICONPATH_OFFSET))(this, a1);
		}

	};
}
