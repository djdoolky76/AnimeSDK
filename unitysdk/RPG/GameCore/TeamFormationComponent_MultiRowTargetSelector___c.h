#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJEEJFDPPNG;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWTARGETSELECTOR___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE79C1C0)
#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWTARGETSELECTOR___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE79C1F0)
#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWTARGETSELECTOR___C__PREPARE_B__8_0_OFFSET UNITYSDK_OFFSET(0xE79C200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamFormationComponent_MultiRowTargetSelector___c_TypeDefinitionIndex = 57704;

	class TeamFormationComponent_MultiRowTargetSelector___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::CJEEJFDPPNG*>** StaticGet___9__8_0()
		{
			return (::System::Comparison_1<::CJEEJFDPPNG*>**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x6B200);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x6B208);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWTARGETSELECTOR___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWTARGETSELECTOR___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _Prepare_b__8_0(::CJEEJFDPPNG* a1, ::CJEEJFDPPNG* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::CJEEJFDPPNG*, ::CJEEJFDPPNG*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWTARGETSELECTOR___C__PREPARE_B__8_0_OFFSET))(this, a1, a2);
		}

	};
}
