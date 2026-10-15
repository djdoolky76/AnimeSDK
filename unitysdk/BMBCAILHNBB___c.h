#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class EvolveBuildGearEquipInfo; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define BMBCAILHNBB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBA86600)
#define BMBCAILHNBB___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBA86640)
#define BMBCAILHNBB___C__SORTWEAPONLIST_B__1_0_OFFSET UNITYSDK_OFFSET(0xBA86650)
#define BMBCAILHNBB___C__SORTWEAPONLIST_B__1_1_OFFSET UNITYSDK_OFFSET(0xBA866C0)
#define BMBCAILHNBB___C__SORTWEAPONLIST_B__1_3_OFFSET UNITYSDK_OFFSET(0xBA86740)
#define BMBCAILHNBB___C__SORTWEAPONLIST_B__1_4_OFFSET UNITYSDK_OFFSET(0xBA86760)

inline static constexpr unsigned int BMBCAILHNBB___c_TypeDefinitionIndex = 53579;

	class BMBCAILHNBB___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Object*, ::System::Int32>** StaticGet___9__1_3()
		{
			return (::System::Func_2<::System::Object*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F0A0);
		}

		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F0A8);
		}

		static ::System::Func_3<::RPG::GameCore::EvolveBuildGearEquipInfo*, ::System::Int32, ::System::Object*>** StaticGet___9__1_0()
		{
			return (::System::Func_3<::RPG::GameCore::EvolveBuildGearEquipInfo*, ::System::Int32, ::System::Object*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F0B0);
		}

		static ::System::Func_2<::System::Object*, ::RPG::GameCore::EvolveBuildGearEquipInfo*>** StaticGet___9__1_4()
		{
			return (::System::Func_2<::System::Object*, ::RPG::GameCore::EvolveBuildGearEquipInfo*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F0B8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F0C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMBCAILHNBB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBCAILHNBB___C_CTOR_OFFSET))(this);
		}

		::System::Object* _SortWeaponList_b__1_0(::RPG::GameCore::EvolveBuildGearEquipInfo* a1, ::System::Int32 a2)
		{
			return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearEquipInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + BMBCAILHNBB___C__SORTWEAPONLIST_B__1_0_OFFSET))(this, a1, a2);
		}

		::System::Boolean _SortWeaponList_b__1_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BMBCAILHNBB___C__SORTWEAPONLIST_B__1_1_OFFSET))(this, a1);
		}

		::System::Int32 _SortWeaponList_b__1_3(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BMBCAILHNBB___C__SORTWEAPONLIST_B__1_3_OFFSET))(this, a1);
		}

		::RPG::GameCore::EvolveBuildGearEquipInfo* _SortWeaponList_b__1_4(::System::Object* a1)
		{
			return ((::RPG::GameCore::EvolveBuildGearEquipInfo*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BMBCAILHNBB___C__SORTWEAPONLIST_B__1_4_OFFSET))(this, a1);
		}

	};
