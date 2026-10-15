#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MAGCBFJCKLE.h"
class IBCDHMDKNOP;
namespace RPG::GameCore { class FreeStyleComponent; }
namespace RPG::GameCore { class MunicipalChatActionFreeStyle; }

#define CPJINLEHPOL_CTOR_OFFSET UNITYSDK_OFFSET(0xDCD0520)
#define CPJINLEHPOL_FMHKLHAKMKO_OFFSET UNITYSDK_OFFSET(0xDCD0530)
#define CPJINLEHPOL_FNACALDOOIF_OFFSET UNITYSDK_OFFSET(0xDCD0580)
#define CPJINLEHPOL_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xDCD0770)
#define CPJINLEHPOL_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xDCD05D0)

inline static constexpr unsigned int CPJINLEHPOL_TypeDefinitionIndex = 69194;

	class CPJINLEHPOL : public ::MAGCBFJCKLE
	{
	public:
		::RPG::GameCore::FreeStyleComponent* GGPOIDPLAED; // 0x30
		::System::Void _ctor(::IBCDHMDKNOP* a1, ::RPG::GameCore::MunicipalChatActionFreeStyle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IBCDHMDKNOP*, ::RPG::GameCore::MunicipalChatActionFreeStyle*))((::PBYTE)hIl2Cpp + CPJINLEHPOL_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::MunicipalChatActionFreeStyle* FMHKLHAKMKO()
		{
			return ((::RPG::GameCore::MunicipalChatActionFreeStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJINLEHPOL_FMHKLHAKMKO_OFFSET))(this);
		}

		::System::Void FNACALDOOIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJINLEHPOL_FNACALDOOIF_OFFSET))(this);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJINLEHPOL_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CPJINLEHPOL_LJOLGCNKIEH_OFFSET))(this, a1);
		}

	};
