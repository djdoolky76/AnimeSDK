#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ALOKDONFPHJ.h"
#include "unitysdk/IDJCEFPNPMM.h"
#include "unitysdk/MJAHJAHHJEG.h"
#include "unitysdk/RPG/Client/LittleGame/Marble/ItemType.h"
#include "unitysdk/RPG/Client/LittleGame/Marble/ShapeType.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"
class NBIBOKEFKIH;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DHFLEJMNGDL_ANDDAJKFLOB_OFFSET UNITYSDK_OFFSET(0x1DBEDDA0)
#define DHFLEJMNGDL_BDIAJFBINNE_OFFSET UNITYSDK_OFFSET(0x1DBED0A0)
#define DHFLEJMNGDL_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x1DBEDCA0)
#define DHFLEJMNGDL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DBED2E0)
#define DHFLEJMNGDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBED000)
#define DHFLEJMNGDL_DNFGFHMNDEF_OFFSET UNITYSDK_OFFSET(0x1DBED810)
#define DHFLEJMNGDL_ELHHLIPLOJF_OFFSET UNITYSDK_OFFSET(0x1DBEDE00)
#define DHFLEJMNGDL_EPDCEBNEKCL_OFFSET UNITYSDK_OFFSET(0x1DBEDE60)
#define DHFLEJMNGDL_FMEEFCBGGKA_OFFSET UNITYSDK_OFFSET(0x1DBEDB40)
#define DHFLEJMNGDL_GET_ENABLE_OFFSET UNITYSDK_OFFSET(0x1DBEDFC0)
#define DHFLEJMNGDL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1DBEDEE0)
#define DHFLEJMNGDL_GET_ISINSIDE_OFFSET UNITYSDK_OFFSET(0x1DBEDF80)
#define DHFLEJMNGDL_GET_MASS_OFFSET UNITYSDK_OFFSET(0x1DBEDFA0)
#define DHFLEJMNGDL_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x1DBEDEC0)
#define DHFLEJMNGDL_GET_POINTS_OFFSET UNITYSDK_OFFSET(0x1DBEDF60)
#define DHFLEJMNGDL_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1DBEDF40)
#define DHFLEJMNGDL_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1DBEDF00)
#define DHFLEJMNGDL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1DBEDF20)
#define DHFLEJMNGDL_JKPOGLAFADH_OFFSET UNITYSDK_OFFSET(0x1DBEDCF0)
#define DHFLEJMNGDL_NLABHHJHPNL_OFFSET UNITYSDK_OFFSET(0x1DBEDC50)
#define DHFLEJMNGDL_PAFCMAMJENB_OFFSET UNITYSDK_OFFSET(0x1DBEDBA0)
#define DHFLEJMNGDL_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0x1DBEDFD0)
#define DHFLEJMNGDL_SET_ID_OFFSET UNITYSDK_OFFSET(0x1DBEDEF0)
#define DHFLEJMNGDL_SET_ISINSIDE_OFFSET UNITYSDK_OFFSET(0x1DBEDF90)
#define DHFLEJMNGDL_SET_MASS_OFFSET UNITYSDK_OFFSET(0x1DBEDFB0)
#define DHFLEJMNGDL_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x1DBEDED0)
#define DHFLEJMNGDL_SET_POINTS_OFFSET UNITYSDK_OFFSET(0x1DBEDF70)
#define DHFLEJMNGDL_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1DBEDF50)
#define DHFLEJMNGDL_SET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1DBEDF10)
#define DHFLEJMNGDL_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1DBEDF30)

inline static constexpr unsigned int DHFLEJMNGDL_TypeDefinitionIndex = 44068;

	class DHFLEJMNGDL : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::MVector2>* _Points_k__BackingField; // 0x10
		::NBIBOKEFKIH* _Owner_k__BackingField; // 0x18
		::Il2CppArray<::ALOKDONFPHJ>* HIMDGIKDMHP; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* DJNNPKLFBGF; // 0x28
		::System::Single CAOIALIDCNN; // 0x30
		::RPG::Client::LittleGame::Marble::ShapeType _Shape_k__BackingField; // 0x34
		::RPG::Client::LittleGame::Marble::ItemType _Type_k__BackingField; // 0x38
		::RPG::MVector2 BJFPDFGHJIG; // 0x3C
		::RPG::MVector2 NIBGNGICDOO; // 0x44
		::RPG::MVector2 BKKKJLAGMEI; // 0x4C
		::System::Single _Radius_k__BackingField; // 0x54
		::System::Single _Mass_k__BackingField; // 0x58
		::IDJCEFPNPMM EFLBKPGNNPM; // 0x5C
		::RPG::MVector2 BBFOLEOPPPL; // 0x68
		::MJAHJAHHJEG PPKHNNBEOEL; // 0x70
		::RPG::MVector2 HFOMPEEAPCG; // 0x80
		::RPG::MVector2 LDDBFJDDNJO; // 0x88
		::System::UInt32 _Id_k__BackingField; // 0x90
		::System::Boolean _Enable_k__BackingField; // 0x94
		::System::Boolean _IsInside_k__BackingField; // 0x95
		::System::Byte _padding0[0x2];
		::RPG::MVector2 BJFOFLLEPAI; // 0x98
		::System::Void _ctor(::NBIBOKEFKIH* a1, ::System::UInt32 a2, ::RPG::Client::LittleGame::Marble::ItemType a3, ::RPG::MVector2 a4, ::RPG::MVector2 a5, ::System::Single a6, ::System::Single a7)
		{
			return ((::System::Void(*)(::PVOID, ::NBIBOKEFKIH*, ::System::UInt32, ::RPG::Client::LittleGame::Marble::ItemType, ::RPG::MVector2, ::RPG::MVector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DHFLEJMNGDL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void _ctor_1(::NBIBOKEFKIH* a1, ::System::UInt32 a2, ::Il2CppArray<::RPG::MVector2>* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::NBIBOKEFKIH*, ::System::UInt32, ::Il2CppArray<::RPG::MVector2>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DHFLEJMNGDL_CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DNFGFHMNDEF(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DHFLEJMNGDL_DNFGFHMNDEF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PAFCMAMJENB(::RPG::MVector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + DHFLEJMNGDL_PAFCMAMJENB_OFFSET))(this, a1);
		}

		::System::Void NLABHHJHPNL(::RPG::MVector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + DHFLEJMNGDL_NLABHHJHPNL_OFFSET))(this, a1);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DHFLEJMNGDL_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void JKPOGLAFADH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DHFLEJMNGDL_JKPOGLAFADH_OFFSET))(this, a1);
		}

		::System::Boolean ANDDAJKFLOB(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DHFLEJMNGDL_ANDDAJKFLOB_OFFSET))(this, a1);
		}

		::System::Void ELHHLIPLOJF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DHFLEJMNGDL_ELHHLIPLOJF_OFFSET))(this, a1);
		}

		::System::Void EPDCEBNEKCL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DHFLEJMNGDL_EPDCEBNEKCL_OFFSET))(this, a1);
		}

		::System::Void FMEEFCBGGKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFLEJMNGDL_FMEEFCBGGKA_OFFSET))(this);
		}

		::System::Void BDIAJFBINNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFLEJMNGDL_BDIAJFBINNE_OFFSET))(this);
		}

		::NBIBOKEFKIH* get_Owner()
		{
			return ((::NBIBOKEFKIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFLEJMNGDL_GET_OWNER_OFFSET))(this);
		}

		::System::Void set_Owner(::NBIBOKEFKIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBIBOKEFKIH*))((::PBYTE)hIl2Cpp + DHFLEJMNGDL_SET_OWNER_OFFSET))(this, a1);
		}

		::System::UInt32 get_Id()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFLEJMNGDL_GET_ID_OFFSET))(this);
		}

		::System::Void set_Id(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DHFLEJMNGDL_SET_ID_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::Marble::ShapeType get_Shape()
		{
			return ((::RPG::Client::LittleGame::Marble::ShapeType(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFLEJMNGDL_GET_SHAPE_OFFSET))(this);
		}

		::System::Void set_Shape(::RPG::Client::LittleGame::Marble::ShapeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Marble::ShapeType))((::PBYTE)hIl2Cpp + DHFLEJMNGDL_SET_SHAPE_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::Marble::ItemType get_Type()
		{
			return ((::RPG::Client::LittleGame::Marble::ItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFLEJMNGDL_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::Client::LittleGame::Marble::ItemType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Marble::ItemType))((::PBYTE)hIl2Cpp + DHFLEJMNGDL_SET_TYPE_OFFSET))(this, a1);
		}

		::System::Single get_Radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFLEJMNGDL_GET_RADIUS_OFFSET))(this);
		}

		::System::Void set_Radius(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DHFLEJMNGDL_SET_RADIUS_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::MVector2>* get_Points()
		{
			return ((::Il2CppArray<::RPG::MVector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFLEJMNGDL_GET_POINTS_OFFSET))(this);
		}

		::System::Void set_Points(::Il2CppArray<::RPG::MVector2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::MVector2>*))((::PBYTE)hIl2Cpp + DHFLEJMNGDL_SET_POINTS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInside()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFLEJMNGDL_GET_ISINSIDE_OFFSET))(this);
		}

		::System::Void set_IsInside(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DHFLEJMNGDL_SET_ISINSIDE_OFFSET))(this, a1);
		}

		::System::Single get_Mass()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFLEJMNGDL_GET_MASS_OFFSET))(this);
		}

		::System::Void set_Mass(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DHFLEJMNGDL_SET_MASS_OFFSET))(this, a1);
		}

		::System::Boolean get_Enable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFLEJMNGDL_GET_ENABLE_OFFSET))(this);
		}

		::System::Void set_Enable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DHFLEJMNGDL_SET_ENABLE_OFFSET))(this, a1);
		}

	};
