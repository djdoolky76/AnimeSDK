#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightTrait; }

#define NDIAIOGCDEL_CTOR_OFFSET UNITYSDK_OFFSET(0x16FC24F0)
#define NDIAIOGCDEL_GET_EQUIPID_OFFSET UNITYSDK_OFFSET(0x16FC2990)
#define NDIAIOGCDEL_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x16FC2940)
#define NDIAIOGCDEL_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x16FC2900)
#define NDIAIOGCDEL_MIADPFMELOM_OFFSET UNITYSDK_OFFSET(0x16FC2520)
#define NDIAIOGCDEL_SET_EQUIPID_OFFSET UNITYSDK_OFFSET(0x16FC29A0)

inline static constexpr unsigned int NDIAIOGCDEL_TypeDefinitionIndex = 67403;

	class NDIAIOGCDEL : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTrait* PEEDCBADBHJ; // 0x10
		::System::UInt32 _EquipID_k__BackingField; // 0x18
		::System::Void _ctor(::Il2CppArray<::System::UInt32>* a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + NDIAIOGCDEL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean MIADPFMELOM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDIAIOGCDEL_MIADPFMELOM_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDIAIOGCDEL_GET_ISSHOW_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDIAIOGCDEL_GET_ISACTIVE_OFFSET))(this);
		}

		::System::UInt32 get_EquipID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDIAIOGCDEL_GET_EQUIPID_OFFSET))(this);
		}

		::System::Void set_EquipID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDIAIOGCDEL_SET_EQUIPID_OFFSET))(this, a1);
		}

	};
