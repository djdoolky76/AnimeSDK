#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Entitas { class EntityComponentChanged; }
namespace Entitas { class EntityComponentReplaced; }
namespace Entitas { class IComponent; }
namespace Entitas { class IEntity; }
namespace System { class Object; }

#define OOOMFGFNAIO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBF94CA0)
#define OOOMFGFNAIO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBF94CE0)
#define OOOMFGFNAIO___C__INITIALIZE_B__1_0_OFFSET UNITYSDK_OFFSET(0xBF94CF0)
#define OOOMFGFNAIO___C__INITIALIZE_B__1_1_OFFSET UNITYSDK_OFFSET(0xBF95070)
#define OOOMFGFNAIO___C__INITIALIZE_B__1_2_OFFSET UNITYSDK_OFFSET(0xBF95150)
#define OOOMFGFNAIO___C__INITIALIZE_B__1_3_OFFSET UNITYSDK_OFFSET(0xBF95210)
#define OOOMFGFNAIO___C__INITIALIZE_B__1_4_OFFSET UNITYSDK_OFFSET(0xBF952C0)

inline static constexpr unsigned int OOOMFGFNAIO___c_TypeDefinitionIndex = 76606;

	class OOOMFGFNAIO___c : public ::System::Object
	{
	public:
		static ::Entitas::EntityComponentChanged** StaticGet___9__1_2()
		{
			return (::Entitas::EntityComponentChanged**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F130);
		}

		static ::Entitas::EntityComponentReplaced** StaticGet___9__1_0()
		{
			return (::Entitas::EntityComponentReplaced**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F138);
		}

		static ::Entitas::EntityComponentChanged** StaticGet___9__1_3()
		{
			return (::Entitas::EntityComponentChanged**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F140);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F148);
		}

		static ::Entitas::EntityComponentReplaced** StaticGet___9__1_4()
		{
			return (::Entitas::EntityComponentReplaced**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F150);
		}

		static ::Entitas::EntityComponentChanged** StaticGet___9__1_1()
		{
			return (::Entitas::EntityComponentChanged**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F158);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOOMFGFNAIO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOOMFGFNAIO___C_CTOR_OFFSET))(this);
		}

		::System::Void _Initialize_b__1_0(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3, ::Entitas::IComponent* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + OOOMFGFNAIO___C__INITIALIZE_B__1_0_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _Initialize_b__1_1(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + OOOMFGFNAIO___C__INITIALIZE_B__1_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _Initialize_b__1_2(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + OOOMFGFNAIO___C__INITIALIZE_B__1_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _Initialize_b__1_3(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + OOOMFGFNAIO___C__INITIALIZE_B__1_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _Initialize_b__1_4(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3, ::Entitas::IComponent* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + OOOMFGFNAIO___C__INITIALIZE_B__1_4_OFFSET))(this, a1, a2, a3, a4);
		}

	};
