#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define NMNNJBEGLIE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBC8CAC0)
#define NMNNJBEGLIE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBC8CB00)
#define NMNNJBEGLIE___C__SETFORMATIONFORMULTITARGETS_B__6_0_OFFSET UNITYSDK_OFFSET(0xBC8CB80)
#define NMNNJBEGLIE___C__SETFORMATIONFORSINGLETARGET_B__5_0_OFFSET UNITYSDK_OFFSET(0xBC8CB10)

inline static constexpr unsigned int NMNNJBEGLIE___c_TypeDefinitionIndex = 56424;

	class NMNNJBEGLIE___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::GameCore::GameEntity*>** StaticGet___9__5_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::GameEntity*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4AEA0);
		}

		static ::System::Comparison_1<::RPG::GameCore::GameEntity*>** StaticGet___9__6_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::GameEntity*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4AEA8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4AEB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMNNJBEGLIE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMNNJBEGLIE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _SetFormationForSingleTarget_b__5_0(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NMNNJBEGLIE___C__SETFORMATIONFORSINGLETARGET_B__5_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _SetFormationForMultiTargets_b__6_0(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NMNNJBEGLIE___C__SETFORMATIONFORMULTITARGETS_B__6_0_OFFSET))(this, a1, a2);
		}

	};
