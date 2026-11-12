#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ModifyDamageDisplayData; }
namespace System { class String; }

#define AHPGNJNPGPA_CTOR_OFFSET UNITYSDK_OFFSET(0xF14C270)
#define AHPGNJNPGPA_JFOFGJCINFA_OFFSET UNITYSDK_OFFSET(0xF14C140)

inline static constexpr unsigned int AHPGNJNPGPA_TypeDefinitionIndex = 55590;

	class AHPGNJNPGPA : public ::System::Object
	{
	public:
		::System::String* MAOMFGBJACJ; // 0x10
		::System::Single NEMDKBKDFDN; // 0x18
		::System::Single IEHPFADHJFD; // 0x1C
		::RPG::Client::TextID ENNKPIBOJLE; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPGNJNPGPA_CTOR_OFFSET))(this);
		}

		::System::Void JFOFGJCINFA(::RPG::GameCore::ModifyDamageDisplayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifyDamageDisplayData*))((::PBYTE)hIl2Cpp + AHPGNJNPGPA_JFOFGJCINFA_OFFSET))(this, a1);
		}

	};
