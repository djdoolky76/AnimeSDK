#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NMLADOGHHGL_BJHBKFHPFLN_OFFSET UNITYSDK_OFFSET(0xBC8ADF0)
#define NMLADOGHHGL_CLEAR_OFFSET UNITYSDK_OFFSET(0xBC8A6F0)
#define NMLADOGHHGL_CTOR_OFFSET UNITYSDK_OFFSET(0xBC8A5C0)
#define NMLADOGHHGL_EPOLDGPEFPO_OFFSET UNITYSDK_OFFSET(0xBC8AE50)
#define NMLADOGHHGL_GET_VALIDCHECKER_OFFSET UNITYSDK_OFFSET(0xBC8A5A0)
#define NMLADOGHHGL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBC8AD00)
#define NMLADOGHHGL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBC8A900)
#define NMLADOGHHGL_ODMPOFLDMNI_OFFSET UNITYSDK_OFFSET(0xBC8AB50)
#define NMLADOGHHGL_OFGFCCPIOAJ_OFFSET UNITYSDK_OFFSET(0xBC8AF90)
#define NMLADOGHHGL_SET_VALIDCHECKER_OFFSET UNITYSDK_OFFSET(0xBC8A5B0)

inline static constexpr unsigned int NMLADOGHHGL_TypeDefinitionIndex = 57811;

	class NMLADOGHHGL : public ::System::Object
	{
	public:
		::System::Action* MJBFIAAOMEM; // 0x10
		::RPG::GameCore::GameWorld* JEOADHBDKMO; // 0x18
		::System::Action* ECNKLKGHOEE; // 0x20
		::System::String* JMAMNFPCOJH; // 0x28
		::System::Predicate_1<::RPG::GameCore::GameWorld*>* _ValidChecker_k__BackingField; // 0x30
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* OFPPCHFNLGH; // 0x38
		::System::Single NDDPHDAIEJI; // 0x40
		::System::Int32 GMDBHJKEAEI; // 0x44
		::RPG::GameCore::EntityTypeMask HFFEAICCHAC; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLADOGHHGL_CTOR_OFFSET))(this);
		}

		::System::Predicate_1<::RPG::GameCore::GameWorld*>* get_ValidChecker()
		{
			return ((::System::Predicate_1<::RPG::GameCore::GameWorld*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLADOGHHGL_GET_VALIDCHECKER_OFFSET))(this);
		}

		::System::Void set_ValidChecker(::System::Predicate_1<::RPG::GameCore::GameWorld*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Predicate_1<::RPG::GameCore::GameWorld*>*))((::PBYTE)hIl2Cpp + NMLADOGHHGL_SET_VALIDCHECKER_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLADOGHHGL_CLEAR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::GameWorld* a1, ::System::String* a2, ::System::Int32 a3, ::RPG::GameCore::EntityTypeMask a4, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*, ::System::String*, ::System::Int32, ::RPG::GameCore::EntityTypeMask, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + NMLADOGHHGL_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLADOGHHGL_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Boolean BJHBKFHPFLN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLADOGHHGL_BJHBKFHPFLN_OFFSET))(this);
		}

		::System::Void EPOLDGPEFPO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NMLADOGHHGL_EPOLDGPEFPO_OFFSET))(this, a1);
		}

		::System::Void ODMPOFLDMNI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NMLADOGHHGL_ODMPOFLDMNI_OFFSET))(this, a1);
		}

		::System::Void OFGFCCPIOAJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NMLADOGHHGL_OFGFCCPIOAJ_OFFSET))(this, a1);
		}

	};
