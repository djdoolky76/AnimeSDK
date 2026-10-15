#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define JNIJALGPGDD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6DA550)
#define JNIJALGPGDD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6DA590)
#define JNIJALGPGDD___C__DOCOLORDICESKILLCONDITIONCHECK_B__8_0_OFFSET UNITYSDK_OFFSET(0x1C6DA5A0)

inline static constexpr unsigned int JNIJALGPGDD___c_TypeDefinitionIndex = 36421;

	class JNIJALGPGDD___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::GameCore::FixPoint>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::GameCore::FixPoint>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12230);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12238);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNIJALGPGDD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNIJALGPGDD___C_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint _DoColorDiceSkillConditionCheck_b__8_0(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JNIJALGPGDD___C__DOCOLORDICESKILLCONDITIONCHECK_B__8_0_OFFSET))(this, a1);
		}

	};
