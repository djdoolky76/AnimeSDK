#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MAGCBFJCKLE.h"
class IBCDHMDKNOP;
namespace RPG::GameCore { class FreeStyleComponent; }
namespace RPG::GameCore { class MunicipalChatActionFreeStyleGraph; }

#define DIEFAFIINDJ_CTOR_OFFSET UNITYSDK_OFFSET(0xEBF27A0)
#define DIEFAFIINDJ_FMHKLHAKMKO_OFFSET UNITYSDK_OFFSET(0xEBF27B0)
#define DIEFAFIINDJ_FNACALDOOIF_OFFSET UNITYSDK_OFFSET(0xEBF2800)
#define DIEFAFIINDJ_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xEBF2980)
#define DIEFAFIINDJ_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xEBF2850)

	class DIEFAFIINDJ : public ::MAGCBFJCKLE
	{
	public:
		::RPG::GameCore::FreeStyleComponent* GGPOIDPLAED; // 0x30
		::System::Void _ctor(::IBCDHMDKNOP* a1, ::RPG::GameCore::MunicipalChatActionFreeStyleGraph* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IBCDHMDKNOP*, ::RPG::GameCore::MunicipalChatActionFreeStyleGraph*))((::PBYTE)hIl2Cpp + DIEFAFIINDJ_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::MunicipalChatActionFreeStyleGraph* FMHKLHAKMKO()
		{
			return ((::RPG::GameCore::MunicipalChatActionFreeStyleGraph*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIEFAFIINDJ_FMHKLHAKMKO_OFFSET))(this);
		}

		::System::Void FNACALDOOIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIEFAFIINDJ_FNACALDOOIF_OFFSET))(this);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIEFAFIINDJ_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DIEFAFIINDJ_LJOLGCNKIEH_OFFSET))(this, a1);
		}

	};
