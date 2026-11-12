#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TaskConfig; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MHBBDOBGLHG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E368D70)
#define MHBBDOBGLHG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E368D60)
#define MHBBDOBGLHG_KDHKBOLJNNK_OFFSET UNITYSDK_OFFSET(0x1E368C90)
#define MHBBDOBGLHG_PGFOLIOCJHP_OFFSET UNITYSDK_OFFSET(0x1E368D00)

inline static constexpr unsigned int MHBBDOBGLHG_TypeDefinitionIndex = 18438;

	class MHBBDOBGLHG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::RPG::GameCore::TurnBasedModifierEvent>** StaticGet_MIFENNBPJPJ()
		{
			return (::System::Collections::Generic::HashSet_1<::RPG::GameCore::TurnBasedModifierEvent>**)UnitySDK::FromName("", "MHBBDOBGLHG")->GetStaticField(0x3A920);
		}

		static ::System::Collections::Generic::HashSet_1<::System::Type*>** StaticGet_MEMKOIEEHNN()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Type*>**)UnitySDK::FromName("", "MHBBDOBGLHG")->GetStaticField(0x3A928);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHBBDOBGLHG_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHBBDOBGLHG_CCTOR_OFFSET))();
		}

		static ::System::Boolean KDHKBOLJNNK(::RPG::GameCore::TaskConfig* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + MHBBDOBGLHG_KDHKBOLJNNK_OFFSET))(a1);
		}

		static ::System::Boolean PGFOLIOCJHP(::RPG::GameCore::TurnBasedModifierEvent a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TurnBasedModifierEvent))((::PBYTE)hIl2Cpp + MHBBDOBGLHG_PGFOLIOCJHP_OFFSET))(a1);
		}

	};
