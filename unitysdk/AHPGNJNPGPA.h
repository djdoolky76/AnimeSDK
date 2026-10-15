#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ModifyDamageDisplayData; }
namespace System { class String; }

#define AHPGNJNPGPA_CTOR_OFFSET UNITYSDK_OFFSET(0xEB8C620)
#define AHPGNJNPGPA_JFOFGJCINFA_OFFSET UNITYSDK_OFFSET(0xEB8C4F0)

inline static constexpr unsigned int AHPGNJNPGPA_TypeDefinitionIndex = 54426;

	class AHPGNJNPGPA : public ::System::Object
	{
	public:
		::System::String* MAOMFGBJACJ; // 0x10
		::RPG::Client::TextID ENNKPIBOJLE; // 0x18
		::System::Single IEHPFADHJFD; // 0x28
		::System::Single NEMDKBKDFDN; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPGNJNPGPA_CTOR_OFFSET))(this);
		}

		::System::Void JFOFGJCINFA(::RPG::GameCore::ModifyDamageDisplayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifyDamageDisplayData*))((::PBYTE)hIl2Cpp + AHPGNJNPGPA_JFOFGJCINFA_OFFSET))(this, a1);
		}

	};
