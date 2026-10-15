#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/GMOELMHCNEE___c__DisplayClass1_0.h"
namespace RPG::GameCore { class AddWeakByTeamAttackType; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GMOELMHCNEE_CCTOR_OFFSET UNITYSDK_OFFSET(0x15ACEFA0)
#define GMOELMHCNEE_CTOR_OFFSET UNITYSDK_OFFSET(0x15ACD570)
#define GMOELMHCNEE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15ACD630)
#define GMOELMHCNEE__ONTASKBEGIN_G___ADDWEAK_1_0_OFFSET UNITYSDK_OFFSET(0x15ACED50)

inline static constexpr unsigned int GMOELMHCNEE_TypeDefinitionIndex = 54824;

	class GMOELMHCNEE
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::AttackDamageType>* DOIMPKLDJFO; // 0x28
		static ::System::Collections::Generic::List_1<::RPG::GameCore::AttackDamageType>** StaticGet_BKJPPNCGPOD()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::AttackDamageType>**)UnitySDK::FromName("", "GMOELMHCNEE")->GetStaticField(0x6AD40);
		}

		// static const ::System::String* AHKFNMKDDAD; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddWeakByTeamAttackType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddWeakByTeamAttackType*))((::PBYTE)hIl2Cpp + GMOELMHCNEE_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMOELMHCNEE_CCTOR_OFFSET))();
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMOELMHCNEE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_g___AddWeak_1_0(::RPG::GameCore::AttackDamageType a1, ::GMOELMHCNEE___c__DisplayClass1_0 a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType, ::GMOELMHCNEE___c__DisplayClass1_0, ::System::Object*))((::PBYTE)hIl2Cpp + GMOELMHCNEE__ONTASKBEGIN_G___ADDWEAK_1_0_OFFSET))(this, a1, a2, a3);
		}

	};
