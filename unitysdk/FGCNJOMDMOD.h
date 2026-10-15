#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPlayerOp.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GridFightAssistantMessageConfigRow; }
namespace System { class String; }

#define FGCNJOMDMOD_ANLNLDMEFOM_OFFSET UNITYSDK_OFFSET(0x15747F60)
#define FGCNJOMDMOD_CTOR_OFFSET UNITYSDK_OFFSET(0x15747BB0)
#define FGCNJOMDMOD_EHCNDNLACKA_OFFSET UNITYSDK_OFFSET(0x15747BC0)
#define FGCNJOMDMOD_HIEIGBIMEMN_OFFSET UNITYSDK_OFFSET(0x15747FC0)
#define FGCNJOMDMOD_HLNJKINHNBN_OFFSET UNITYSDK_OFFSET(0x15747DC0)
#define FGCNJOMDMOD_KAEIEFJBHMO_OFFSET UNITYSDK_OFFSET(0x15748060)
#define FGCNJOMDMOD_LLMHKCANOAI_OFFSET UNITYSDK_OFFSET(0x15747C10)
#define FGCNJOMDMOD_PLNCKLJOJME_OFFSET UNITYSDK_OFFSET(0x15748010)

inline static constexpr unsigned int FGCNJOMDMOD_TypeDefinitionIndex = 64371;

	class FGCNJOMDMOD : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightAssistantMessageConfigRow* NOPAMNLEDHK; // 0x10
		::System::Int32 GDPKHJOEIJI; // 0x18
		::System::Int32 CDIBGJLEABI; // 0x1C
		::System::Boolean MENINIJHEEJ; // 0x20
		::System::Void _ctor(::RPG::GameCore::GridFightAssistantMessageConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightAssistantMessageConfigRow*))((::PBYTE)hIl2Cpp + FGCNJOMDMOD_CTOR_OFFSET))(this, a1);
		}

		::System::Void EHCNDNLACKA(::RPG::Client::GridFightPlayerOp a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPlayerOp))((::PBYTE)hIl2Cpp + FGCNJOMDMOD_EHCNDNLACKA_OFFSET))(this, a1);
		}

		::System::Boolean LLMHKCANOAI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCNJOMDMOD_LLMHKCANOAI_OFFSET))(this);
		}

		::System::Void HLNJKINHNBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCNJOMDMOD_HLNJKINHNBN_OFFSET))(this);
		}

		::System::Void ANLNLDMEFOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCNJOMDMOD_ANLNLDMEFOM_OFFSET))(this);
		}

		::System::Int32 HIEIGBIMEMN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCNJOMDMOD_HIEIGBIMEMN_OFFSET))(this);
		}

		::System::Int32 PLNCKLJOJME()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCNJOMDMOD_PLNCKLJOJME_OFFSET))(this);
		}

		::System::String* KAEIEFJBHMO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCNJOMDMOD_KAEIEFJBHMO_OFFSET))(this);
		}

	};
