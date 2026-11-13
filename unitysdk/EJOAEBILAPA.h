#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPlayerOp.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GridFightAssistantMessageConfigRow; }
namespace System { class String; }

#define EJOAEBILAPA_ANLNLDMEFOM_OFFSET UNITYSDK_OFFSET(0x19AC83F0)
#define EJOAEBILAPA_CTOR_OFFSET UNITYSDK_OFFSET(0x19AC8170)
#define EJOAEBILAPA_EHCNDNLACKA_OFFSET UNITYSDK_OFFSET(0x19AC8180)
#define EJOAEBILAPA_HIEIGBIMEMN_OFFSET UNITYSDK_OFFSET(0x19AC8450)
#define EJOAEBILAPA_HLNJKINHNBN_OFFSET UNITYSDK_OFFSET(0x19AC8390)
#define EJOAEBILAPA_KAEIEFJBHMO_OFFSET UNITYSDK_OFFSET(0x19AC84F0)
#define EJOAEBILAPA_LLMHKCANOAI_OFFSET UNITYSDK_OFFSET(0x19AC81D0)
#define EJOAEBILAPA_PLNCKLJOJME_OFFSET UNITYSDK_OFFSET(0x19AC84A0)

inline static constexpr unsigned int EJOAEBILAPA_TypeDefinitionIndex = 65816;

	class EJOAEBILAPA : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightAssistantMessageConfigRow* NOPAMNLEDHK; // 0x10
		::System::Int32 CDIBGJLEABI; // 0x18
		::System::Int32 GDPKHJOEIJI; // 0x1C
		::System::Boolean ECLHEOOOMDO; // 0x20
		::System::Void _ctor(::RPG::GameCore::GridFightAssistantMessageConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightAssistantMessageConfigRow*))((::PBYTE)hIl2Cpp + EJOAEBILAPA_CTOR_OFFSET))(this, a1);
		}

		::System::Void EHCNDNLACKA(::RPG::Client::GridFightPlayerOp a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPlayerOp))((::PBYTE)hIl2Cpp + EJOAEBILAPA_EHCNDNLACKA_OFFSET))(this, a1);
		}

		::System::Boolean LLMHKCANOAI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJOAEBILAPA_LLMHKCANOAI_OFFSET))(this);
		}

		::System::Void HLNJKINHNBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJOAEBILAPA_HLNJKINHNBN_OFFSET))(this);
		}

		::System::Void ANLNLDMEFOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJOAEBILAPA_ANLNLDMEFOM_OFFSET))(this);
		}

		::System::Int32 HIEIGBIMEMN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJOAEBILAPA_HIEIGBIMEMN_OFFSET))(this);
		}

		::System::Int32 PLNCKLJOJME()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJOAEBILAPA_PLNCKLJOJME_OFFSET))(this);
		}

		::System::String* KAEIEFJBHMO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJOAEBILAPA_KAEIEFJBHMO_OFFSET))(this);
		}

	};
