#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOMBGMMOHDE;
namespace RPG::GameCore { class GameComponentBase; }

#define JOMBGMMOHDE_CTOR_OFFSET UNITYSDK_OFFSET(0xB2A99E0)
#define JOMBGMMOHDE_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xB2A9990)

inline static constexpr unsigned int JOMBGMMOHDE_TypeDefinitionIndex = 57568;

	class JOMBGMMOHDE : public ::System::Object
	{
	public:
		::JOMBGMMOHDE* BIKFMJKKAHB; // 0x10
		::RPG::GameCore::GameComponentBase* OAJAOHNCIFF; // 0x18
		::System::Int32 HGBABJFFPIG; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMBGMMOHDE_CTOR_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMBGMMOHDE_PJPFIHFAHGO_OFFSET))(this);
		}

	};
