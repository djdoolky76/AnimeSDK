#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightTrait; }

#define ENKPMMANABG_CTOR_OFFSET UNITYSDK_OFFSET(0x155A5F50)
#define ENKPMMANABG_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x155A63A0)
#define ENKPMMANABG_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x155A6360)
#define ENKPMMANABG_GET_ROLEID_OFFSET UNITYSDK_OFFSET(0x155A63F0)
#define ENKPMMANABG_MIADPFMELOM_OFFSET UNITYSDK_OFFSET(0x155A5F80)
#define ENKPMMANABG_SET_ROLEID_OFFSET UNITYSDK_OFFSET(0x155A6400)

inline static constexpr unsigned int ENKPMMANABG_TypeDefinitionIndex = 65493;

	class ENKPMMANABG : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTrait* PEEDCBADBHJ; // 0x10
		::System::UInt32 _RoleID_k__BackingField; // 0x18
		::System::Void _ctor(::Il2CppArray<::System::UInt32>* a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + ENKPMMANABG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean MIADPFMELOM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENKPMMANABG_MIADPFMELOM_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENKPMMANABG_GET_ISSHOW_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENKPMMANABG_GET_ISACTIVE_OFFSET))(this);
		}

		::System::UInt32 get_RoleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENKPMMANABG_GET_ROLEID_OFFSET))(this);
		}

		::System::Void set_RoleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ENKPMMANABG_SET_ROLEID_OFFSET))(this, a1);
		}

	};
