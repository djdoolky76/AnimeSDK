#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define EFKIODJNHHJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x13A564B0)
#define EFKIODJNHHJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x13A564F0)
#define EFKIODJNHHJ___C__FILTERMODIFIERTOINFECT_B__3_1_OFFSET UNITYSDK_OFFSET(0x13A56500)
#define EFKIODJNHHJ___C__FILTERMODIFIERTOINFECT_B__3_2_OFFSET UNITYSDK_OFFSET(0x13A56530)

	class EFKIODJNHHJ___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean>** StaticGet___9__3_1()
		{
			return (::System::Func_2<::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x700B0);
		}

		static ::System::Func_2<::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean>** StaticGet___9__3_2()
		{
			return (::System::Func_2<::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x700B8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x700C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFKIODJNHHJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKIODJNHHJ___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _FilterModifierToInfect_b__3_1(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + EFKIODJNHHJ___C__FILTERMODIFIERTOINFECT_B__3_1_OFFSET))(this, a1);
		}

		::System::Boolean _FilterModifierToInfect_b__3_2(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + EFKIODJNHHJ___C__FILTERMODIFIERTOINFECT_B__3_2_OFFSET))(this, a1);
		}

	};
