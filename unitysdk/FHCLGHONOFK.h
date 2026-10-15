#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNFCEJEJINK.h"
class KJHMMJGOAAF;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System { class String; }

#define FHCLGHONOFK_BOFGKFBPIOD_OFFSET UNITYSDK_OFFSET(0x157735F0)
#define FHCLGHONOFK_CTOR_OFFSET UNITYSDK_OFFSET(0x157731F0)
#define FHCLGHONOFK_DMLEMLJPLPB_OFFSET UNITYSDK_OFFSET(0x15773800)
#define FHCLGHONOFK_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x15773200)
#define FHCLGHONOFK_OBOJEIPJBBJ_OFFSET UNITYSDK_OFFSET(0x15773270)

inline static constexpr unsigned int FHCLGHONOFK_TypeDefinitionIndex = 78237;

	class FHCLGHONOFK : public ::KNFCEJEJINK
	{
	public:
		::KJHMMJGOAAF* MKKLHFCCCNF; // 0x18
		::System::Void _ctor(::KJHMMJGOAAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJHMMJGOAAF*))((::PBYTE)hIl2Cpp + FHCLGHONOFK_CTOR_OFFSET))(this, a1);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCLGHONOFK_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void OBOJEIPJBBJ(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*))((::PBYTE)hIl2Cpp + FHCLGHONOFK_OBOJEIPJBBJ_OFFSET))(this, a1);
		}

		::System::String* DMLEMLJPLPB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCLGHONOFK_DMLEMLJPLPB_OFFSET))(this);
		}

		::System::Void BOFGKFBPIOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCLGHONOFK_BOFGKFBPIOD_OFFSET))(this);
		}

	};
