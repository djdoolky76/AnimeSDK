#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MAGCBFJCKLE.h"
class IBCDHMDKNOP;
class PKLHDDGKKOC;
namespace RPG::GameCore { class MunicipalChatActionPropAnimation; }

#define LMABBKNCOAB_CTOR_OFFSET UNITYSDK_OFFSET(0xB779500)
#define LMABBKNCOAB_FMHKLHAKMKO_OFFSET UNITYSDK_OFFSET(0xB779510)
#define LMABBKNCOAB_FNACALDOOIF_OFFSET UNITYSDK_OFFSET(0xB779560)
#define LMABBKNCOAB_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xB7796E0)
#define LMABBKNCOAB_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xB7795B0)

inline static constexpr unsigned int LMABBKNCOAB_TypeDefinitionIndex = 69196;

	class LMABBKNCOAB : public ::MAGCBFJCKLE
	{
	public:
		::PKLHDDGKKOC* KCIMJOOHMKC; // 0x30
		::System::Void _ctor(::IBCDHMDKNOP* a1, ::RPG::GameCore::MunicipalChatActionPropAnimation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IBCDHMDKNOP*, ::RPG::GameCore::MunicipalChatActionPropAnimation*))((::PBYTE)hIl2Cpp + LMABBKNCOAB_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::MunicipalChatActionPropAnimation* FMHKLHAKMKO()
		{
			return ((::RPG::GameCore::MunicipalChatActionPropAnimation*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMABBKNCOAB_FMHKLHAKMKO_OFFSET))(this);
		}

		::System::Void FNACALDOOIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMABBKNCOAB_FNACALDOOIF_OFFSET))(this);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMABBKNCOAB_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LMABBKNCOAB_LJOLGCNKIEH_OFFSET))(this, a1);
		}

	};
