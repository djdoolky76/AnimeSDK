#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIBILAKDENF;
class OBEPKIPNAHF;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define FEJCFEFLDAF_ADJHLGOAIND_OFFSET UNITYSDK_OFFSET(0x15719590)
#define FEJCFEFLDAF_CTOR_OFFSET UNITYSDK_OFFSET(0x15719420)
#define FEJCFEFLDAF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15719540)
#define FEJCFEFLDAF_GET_CURRENTQTEINSTANCE_OFFSET UNITYSDK_OFFSET(0x15719680)
#define FEJCFEFLDAF_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15719430)
#define FEJCFEFLDAF_MBAABBDJKNG_OFFSET UNITYSDK_OFFSET(0x157194E0)
#define FEJCFEFLDAF_SET_CURRENTQTEINSTANCE_OFFSET UNITYSDK_OFFSET(0x15719690)

inline static constexpr unsigned int FEJCFEFLDAF_TypeDefinitionIndex = 56191;

	class FEJCFEFLDAF : public ::System::Object
	{
	public:
		::OBEPKIPNAHF* _CurrentQTEInstance_k__BackingField; // 0x10
		::RPG::GameCore::TurnBasedGameMode* GICHGNGMBGD; // 0x18
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + FEJCFEFLDAF_CTOR_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FEJCFEFLDAF_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEJCFEFLDAF_DISPOSE_OFFSET))(this);
		}

		::System::Void ADJHLGOAIND(::GIBILAKDENF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIBILAKDENF*))((::PBYTE)hIl2Cpp + FEJCFEFLDAF_ADJHLGOAIND_OFFSET))(this, a1);
		}

		::System::Void MBAABBDJKNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEJCFEFLDAF_MBAABBDJKNG_OFFSET))(this);
		}

		::OBEPKIPNAHF* get_CurrentQTEInstance()
		{
			return ((::OBEPKIPNAHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEJCFEFLDAF_GET_CURRENTQTEINSTANCE_OFFSET))(this);
		}

		::System::Void set_CurrentQTEInstance(::OBEPKIPNAHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBEPKIPNAHF*))((::PBYTE)hIl2Cpp + FEJCFEFLDAF_SET_CURRENTQTEINSTANCE_OFFSET))(this, a1);
		}

	};
