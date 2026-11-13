#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class LNCJILCLGPD;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtModifierConfig; }
namespace System { class String; }

#define LNCJILCLGPD_CTOR_OFFSET UNITYSDK_OFFSET(0x1AFDC530)
#define LNCJILCLGPD_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1AFDC4E0)
#define LNCJILCLGPD_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1AFDC490)
#define LNCJILCLGPD_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1AFDC370)

inline static constexpr unsigned int LNCJILCLGPD_TypeDefinitionIndex = 55240;

	class LNCJILCLGPD : public ::CMPGEAFHHDC
	{
	public:
		::System::String* KBKOGLCAEKG; // 0x18
		::RPG::GameCore::GameEntity* GDCCJFKJGPD; // 0x20
		::System::String* IFNAGLOMHBK; // 0x28
		::RPG::GameCore::RtModifierConfig* ALMAIAIDFHM; // 0x30
		::RPG::GameCore::GameEntity* DOAPLIILBKP; // 0x38
		::RPG::GameCore::FixPoint LKFNPPCHCII; // 0x40
		::System::Boolean EIIMAEHCGBC; // 0x48
		::System::Boolean EBFMNCJNMPF; // 0x49
		::System::Boolean NGDAIHFFEBC; // 0x4A
		::System::Byte _padding0[0x5];
		::RPG::GameCore::FixPoint KIPAGNCANAJ; // 0x50
		::RPG::GameCore::FixPoint KAHOALBCMNE; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCJILCLGPD_CTOR_OFFSET))(this);
		}

		::LNCJILCLGPD* KPJGDHLENIP(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::RtModifierConfig* a3, ::System::String* a4, ::System::String* a5, ::RPG::GameCore::FixPoint a6, ::RPG::GameCore::FixPoint a7, ::System::Boolean a8, ::System::Boolean a9, ::RPG::GameCore::FixPoint a10, ::System::Boolean a11)
		{
			return ((::LNCJILCLGPD*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::RtModifierConfig*, ::System::String*, ::System::String*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::FixPoint, ::System::Boolean))((::PBYTE)hIl2Cpp + LNCJILCLGPD_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCJILCLGPD_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCJILCLGPD_GETEVENTTYPE_OFFSET))(this);
		}

	};
