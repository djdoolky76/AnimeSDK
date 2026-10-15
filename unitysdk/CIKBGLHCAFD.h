#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPlayerOp.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GridFightAssistantMessageConfigRow; }
namespace System { class String; }

#define CIKBGLHCAFD_ANLNLDMEFOM_OFFSET UNITYSDK_OFFSET(0xCF85630)
#define CIKBGLHCAFD_CTOR_OFFSET UNITYSDK_OFFSET(0xCF850F0)
#define CIKBGLHCAFD_EHCNDNLACKA_OFFSET UNITYSDK_OFFSET(0xCF85100)
#define CIKBGLHCAFD_HIEIGBIMEMN_OFFSET UNITYSDK_OFFSET(0xCF85690)
#define CIKBGLHCAFD_HLNJKINHNBN_OFFSET UNITYSDK_OFFSET(0xCF85480)
#define CIKBGLHCAFD_KAEIEFJBHMO_OFFSET UNITYSDK_OFFSET(0xCF85730)
#define CIKBGLHCAFD_LLMHKCANOAI_OFFSET UNITYSDK_OFFSET(0xCF85150)
#define CIKBGLHCAFD_PLNCKLJOJME_OFFSET UNITYSDK_OFFSET(0xCF856E0)

inline static constexpr unsigned int CIKBGLHCAFD_TypeDefinitionIndex = 64370;

	class CIKBGLHCAFD : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightAssistantMessageConfigRow* NOPAMNLEDHK; // 0x10
		::System::Boolean ADDKLGPANMD; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 GDPKHJOEIJI; // 0x1C
		::System::Int32 CDIBGJLEABI; // 0x20
		::System::Void _ctor(::RPG::GameCore::GridFightAssistantMessageConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightAssistantMessageConfigRow*))((::PBYTE)hIl2Cpp + CIKBGLHCAFD_CTOR_OFFSET))(this, a1);
		}

		::System::Void EHCNDNLACKA(::RPG::Client::GridFightPlayerOp a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPlayerOp))((::PBYTE)hIl2Cpp + CIKBGLHCAFD_EHCNDNLACKA_OFFSET))(this, a1);
		}

		::System::Boolean LLMHKCANOAI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKBGLHCAFD_LLMHKCANOAI_OFFSET))(this);
		}

		::System::Void HLNJKINHNBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKBGLHCAFD_HLNJKINHNBN_OFFSET))(this);
		}

		::System::Void ANLNLDMEFOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKBGLHCAFD_ANLNLDMEFOM_OFFSET))(this);
		}

		::System::Int32 HIEIGBIMEMN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKBGLHCAFD_HIEIGBIMEMN_OFFSET))(this);
		}

		::System::Int32 PLNCKLJOJME()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKBGLHCAFD_PLNCKLJOJME_OFFSET))(this);
		}

		::System::String* KAEIEFJBHMO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKBGLHCAFD_KAEIEFJBHMO_OFFSET))(this);
		}

	};
