#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEJLIGKNHCC_BELACLLOLOJ;
namespace RPG::GameCore { class LevelPedestrianV2EmitInfo; }

#define NEJLIGKNHCC_BELACLLOLOJ_COMPARETO_OFFSET UNITYSDK_OFFSET(0xBB67CE0)
#define NEJLIGKNHCC_BELACLLOLOJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBB5FA30)
#define NEJLIGKNHCC_BELACLLOLOJ_MFFIFNOHIDM_OFFSET UNITYSDK_OFFSET(0xBB67B40)
#define NEJLIGKNHCC_BELACLLOLOJ_NKJJNFGGIIA_OFFSET UNITYSDK_OFFSET(0xBB5FDA0)

	class NEJLIGKNHCC_BELACLLOLOJ : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelPedestrianV2EmitInfo* CIKPBGDIABO; // 0x10
		::System::Int32 GBEANGHBAKA; // 0x18
		::System::Single BJMAMHMCOEL; // 0x1C
		::System::Boolean MGALEEDOJMF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJLIGKNHCC_BELACLLOLOJ_CTOR_OFFSET))(this);
		}

		::System::Single MFFIFNOHIDM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJLIGKNHCC_BELACLLOLOJ_MFFIFNOHIDM_OFFSET))(this);
		}

		::System::Single NKJJNFGGIIA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJLIGKNHCC_BELACLLOLOJ_NKJJNFGGIIA_OFFSET))(this);
		}

		::System::Int32 CompareTo(::NEJLIGKNHCC_BELACLLOLOJ* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::NEJLIGKNHCC_BELACLLOLOJ*))((::PBYTE)hIl2Cpp + NEJLIGKNHCC_BELACLLOLOJ_COMPARETO_OFFSET))(this, a1);
		}

	};
