#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::NavMap::FiveDim { class SectionConfig; }

#define JBOLKLEHLME___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB8AFC80)
#define JBOLKLEHLME___C__DISPLAYCLASS0_0__CREATE_B__0_OFFSET UNITYSDK_OFFSET(0xB8AFD10)

inline static constexpr unsigned int JBOLKLEHLME___c__DisplayClass0_0_TypeDefinitionIndex = 76817;

	class JBOLKLEHLME___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::UInt32 sectionID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOLKLEHLME___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _Create_b__0(::RPG::Client::NavMap::FiveDim::SectionConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::SectionConfig*))((::PBYTE)hIl2Cpp + JBOLKLEHLME___C__DISPLAYCLASS0_0__CREATE_B__0_OFFSET))(this, a1);
		}

	};
