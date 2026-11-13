#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEJLIGKNHCC_BELACLLOLOJ;
namespace RPG::GameCore { class LevelPedestrianV2EmitInfo; }

#define NEJLIGKNHCC_BELACLLOLOJ_COMPARETO_OFFSET UNITYSDK_OFFSET(0x16FE1430)
#define NEJLIGKNHCC_BELACLLOLOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16FD9130)
#define NEJLIGKNHCC_BELACLLOLOJ_MFFIFNOHIDM_OFFSET UNITYSDK_OFFSET(0x16FE1290)
#define NEJLIGKNHCC_BELACLLOLOJ_NKJJNFGGIIA_OFFSET UNITYSDK_OFFSET(0x16FD94A0)

inline static constexpr unsigned int NEJLIGKNHCC_BELACLLOLOJ_TypeDefinitionIndex = 71241;

	class NEJLIGKNHCC_BELACLLOLOJ : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelPedestrianV2EmitInfo* CIKPBGDIABO; // 0x10
		::System::Single BJMAMHMCOEL; // 0x18
		::System::Boolean MGALEEDOJMF; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Int32 GBEANGHBAKA; // 0x20
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
