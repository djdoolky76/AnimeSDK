#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
class HHPKNCPMPOJ;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client::Prop { class OpticalIllusionPuzzleBoard; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Coroutine; }

#define OIHNHGCDONL_CTOR_OFFSET UNITYSDK_OFFSET(0xBE8D790)
#define OIHNHGCDONL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE8D7A0)
#define OIHNHGCDONL_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xBE8D7F0)
#define OIHNHGCDONL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBE8DB80)
#define OIHNHGCDONL_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xBE8D910)
#define OIHNHGCDONL__START_B__2_0_OFFSET UNITYSDK_OFFSET(0xBE8E050)
#define OIHNHGCDONL__STOP_B__3_0_OFFSET UNITYSDK_OFFSET(0xBE8E060)

inline static constexpr unsigned int OIHNHGCDONL_TypeDefinitionIndex = 78697;

	class OIHNHGCDONL : public ::System::Object
	{
	public:
		::RPG::Client::Prop::OpticalIllusionPuzzleBoard* MIPPNCGOJNM; // 0x10
		::System::String* NNIOCPHFNNG; // 0x18
		::System::Action* HIBJGHDJLJO; // 0x20
		::UnityEngine::Coroutine* NAEJCNNMAKA; // 0x28
		::RPG::Client::MonoEffect* LBNBPMIFDHI; // 0x30
		::Il2CppArray<::HHPKNCPMPOJ*>* EJJJMLPECEJ; // 0x38
		::System::Single HPCHCEFOKJB; // 0x40
		::System::Single GHABAAOGBNO; // 0x44
		::System::Single CHIPCDEFEPM; // 0x48
		::System::Boolean OFEPHLEKKCD; // 0x4C
		::System::Byte _padding0[0x3];
		::System::Int32 LMOHABJNMFF; // 0x50
		::System::Void _ctor(::RPG::Client::Prop::OpticalIllusionPuzzleBoard* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleBoard*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + OIHNHGCDONL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHNHGCDONL_DISPOSE_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB(::Il2CppArray<::HHPKNCPMPOJ*>* a1, ::System::Single a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::HHPKNCPMPOJ*>*, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + OIHNHGCDONL_NPAFMEBNFOB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HFKFNFKIEON(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OIHNHGCDONL_HFKFNFKIEON_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OIHNHGCDONL_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void _Start_b__2_0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + OIHNHGCDONL__START_B__2_0_OFFSET))(this, a1, a2);
		}

		::System::Void _Stop_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHNHGCDONL__STOP_B__3_0_OFFSET))(this);
		}

	};
