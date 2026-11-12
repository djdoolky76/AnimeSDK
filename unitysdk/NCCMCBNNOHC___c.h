#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define NCCMCBNNOHC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC38A090)
#define NCCMCBNNOHC___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC38A0C0)
#define NCCMCBNNOHC___C__ONTASKBEGIN_B__3_0_OFFSET UNITYSDK_OFFSET(0xC38A0D0)
#define NCCMCBNNOHC___C__ONTASKBEGIN_B__3_1_OFFSET UNITYSDK_OFFSET(0xC38A150)
#define NCCMCBNNOHC___C__ONTASKBEGIN_B__3_2_OFFSET UNITYSDK_OFFSET(0xC38A1D0)

inline static constexpr unsigned int NCCMCBNNOHC___c_TypeDefinitionIndex = 57640;

	class NCCMCBNNOHC___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::GameCore::GameEntity*>** StaticGet___9__3_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::GameEntity*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1CE30);
		}

		static ::System::Comparison_1<::RPG::GameCore::GameEntity*>** StaticGet___9__3_2()
		{
			return (::System::Comparison_1<::RPG::GameCore::GameEntity*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1CE38);
		}

		static ::System::Comparison_1<::RPG::GameCore::GameEntity*>** StaticGet___9__3_1()
		{
			return (::System::Comparison_1<::RPG::GameCore::GameEntity*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1CE40);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1CE48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCCMCBNNOHC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCMCBNNOHC___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _OnTaskBegin_b__3_0(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NCCMCBNNOHC___C__ONTASKBEGIN_B__3_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _OnTaskBegin_b__3_1(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NCCMCBNNOHC___C__ONTASKBEGIN_B__3_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 _OnTaskBegin_b__3_2(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NCCMCBNNOHC___C__ONTASKBEGIN_B__3_2_OFFSET))(this, a1, a2);
		}

	};
