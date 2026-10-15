#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN_INTERSECTIONPHASE_CTOR_OFFSET UNITYSDK_OFFSET(0xE111EA0)
#define RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN_INTERSECTIONPHASE_EMMIMPKEIOG_OFFSET UNITYSDK_OFFSET(0xE111040)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonyTrafficLightMonoPlugin_IntersectionPhase_TypeDefinitionIndex = 71001;

	class StageHarmonyTrafficLightMonoPlugin_IntersectionPhase : public ::System::Object
	{
	public:
		::System::Int32 PhaseID; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Int32>* _PhaseIDs; // 0x18
		::System::Int32 DecodeSignalValue; // 0x20
		::System::Byte _padding1[0x4];
		::System::String* Description; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* PhaseValueActionPairs; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN_INTERSECTIONPHASE_CTOR_OFFSET))(this);
		}

		::System::Int32 EMMIMPKEIOG(::System::Single a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYTRAFFICLIGHTMONOPLUGIN_INTERSECTIONPHASE_EMMIMPKEIOG_OFFSET))(this, a1);
		}

	};
}
