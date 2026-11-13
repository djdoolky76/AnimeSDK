#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define EFKIODJNHHJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A340C80)
#define EFKIODJNHHJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1A340CC0)
#define EFKIODJNHHJ___C__FILTERMODIFIERTOINFECT_B__3_1_OFFSET UNITYSDK_OFFSET(0x1A340CD0)
#define EFKIODJNHHJ___C__FILTERMODIFIERTOINFECT_B__3_2_OFFSET UNITYSDK_OFFSET(0x1A340D00)

inline static constexpr unsigned int EFKIODJNHHJ___c_TypeDefinitionIndex = 56286;

	class EFKIODJNHHJ___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean>** StaticGet___9__3_2()
		{
			return (::System::Func_2<::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x72F60);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x72F68);
		}

		static ::System::Func_2<::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean>** StaticGet___9__3_1()
		{
			return (::System::Func_2<::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x72F70);
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
