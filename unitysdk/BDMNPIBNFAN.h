#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPlayerOp.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GridFightAssistantMessageConfigRow; }
namespace System { class String; }

#define BDMNPIBNFAN_ANLNLDMEFOM_OFFSET UNITYSDK_OFFSET(0xB7B9340)
#define BDMNPIBNFAN_CTOR_OFFSET UNITYSDK_OFFSET(0xB7B8E70)
#define BDMNPIBNFAN_EHCNDNLACKA_OFFSET UNITYSDK_OFFSET(0xB7B8E80)
#define BDMNPIBNFAN_HIEIGBIMEMN_OFFSET UNITYSDK_OFFSET(0xB7B93A0)
#define BDMNPIBNFAN_HLNJKINHNBN_OFFSET UNITYSDK_OFFSET(0xB7B9090)
#define BDMNPIBNFAN_KAEIEFJBHMO_OFFSET UNITYSDK_OFFSET(0xB7B9440)
#define BDMNPIBNFAN_LLMHKCANOAI_OFFSET UNITYSDK_OFFSET(0xB7B8ED0)
#define BDMNPIBNFAN_PLNCKLJOJME_OFFSET UNITYSDK_OFFSET(0xB7B93F0)

inline static constexpr unsigned int BDMNPIBNFAN_TypeDefinitionIndex = 65819;

	class BDMNPIBNFAN : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightAssistantMessageConfigRow* NOPAMNLEDHK; // 0x10
		::System::Int32 GDPKHJOEIJI; // 0x18
		::System::Int32 CDIBGJLEABI; // 0x1C
		::System::Void _ctor(::RPG::GameCore::GridFightAssistantMessageConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightAssistantMessageConfigRow*))((::PBYTE)hIl2Cpp + BDMNPIBNFAN_CTOR_OFFSET))(this, a1);
		}

		::System::Void EHCNDNLACKA(::RPG::Client::GridFightPlayerOp a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPlayerOp))((::PBYTE)hIl2Cpp + BDMNPIBNFAN_EHCNDNLACKA_OFFSET))(this, a1);
		}

		::System::Boolean LLMHKCANOAI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDMNPIBNFAN_LLMHKCANOAI_OFFSET))(this);
		}

		::System::Void HLNJKINHNBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDMNPIBNFAN_HLNJKINHNBN_OFFSET))(this);
		}

		::System::Void ANLNLDMEFOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDMNPIBNFAN_ANLNLDMEFOM_OFFSET))(this);
		}

		::System::Int32 HIEIGBIMEMN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDMNPIBNFAN_HIEIGBIMEMN_OFFSET))(this);
		}

		::System::Int32 PLNCKLJOJME()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDMNPIBNFAN_PLNCKLJOJME_OFFSET))(this);
		}

		::System::String* KAEIEFJBHMO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDMNPIBNFAN_KAEIEFJBHMO_OFFSET))(this);
		}

	};
