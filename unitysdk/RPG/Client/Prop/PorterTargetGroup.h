#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Prop { class PorterPuzzle; }
namespace RPG::Client::Prop { class PorterTarget; }
namespace RPG::Client::Prop { class PorterTargetGroup; }

#define RPG_CLIENT_PROP_PORTERTARGETGROUP_CHIHJAGDKNM_OFFSET UNITYSDK_OFFSET(0xDD802E0)
#define RPG_CLIENT_PROP_PORTERTARGETGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0xDD806A0)
#define RPG_CLIENT_PROP_PORTERTARGETGROUP_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xDD7FE60)
#define RPG_CLIENT_PROP_PORTERTARGETGROUP_HNJKMDKBLKC_OFFSET UNITYSDK_OFFSET(0xDD80610)
#define RPG_CLIENT_PROP_PORTERTARGETGROUP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xDD7F200)
#define RPG_CLIENT_PROP_PORTERTARGETGROUP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xDD7FAC0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PorterTargetGroup_TypeDefinitionIndex = 78776;

	class PorterTargetGroup : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::Prop::PorterTarget*>* Targets; // 0x10
		::RPG::Client::Prop::PorterPuzzle* _OwnerRef; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERTARGETGROUP_CTOR_OFFSET))(this);
		}

		::System::Boolean CHIHJAGDKNM(::RPG::Client::Prop::PorterTargetGroup* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::PorterTargetGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERTARGETGROUP_CHIHJAGDKNM_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::PorterTarget* HNJKMDKBLKC(::System::Int32 a1)
		{
			return ((::RPG::Client::Prop::PorterTarget*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERTARGETGROUP_HNJKMDKBLKC_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::Prop::PorterPuzzle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PorterPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERTARGETGROUP_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERTARGETGROUP_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERTARGETGROUP_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
}
