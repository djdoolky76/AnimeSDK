#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNFCEJEJINK.h"
class ALOGEFGNAAP;
class DLECIKAMKEG;
namespace RPG::Client::Prop { class DuelChimeraProxy; }

#define FECBDLHPAPE_CTOR_OFFSET UNITYSDK_OFFSET(0x156D8F50)
#define FECBDLHPAPE_IJEPAJIMDPA_OFFSET UNITYSDK_OFFSET(0x156D9640)
#define FECBDLHPAPE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x156D97F0)
#define FECBDLHPAPE_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x156D8F60)

inline static constexpr unsigned int FECBDLHPAPE_TypeDefinitionIndex = 78241;

	class FECBDLHPAPE : public ::KNFCEJEJINK
	{
	public:
		::DLECIKAMKEG* EEFMDEHLLFI; // 0x18
		::ALOGEFGNAAP* MKKLHFCCCNF; // 0x20
		::System::Void _ctor(::ALOGEFGNAAP* a1, ::DLECIKAMKEG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALOGEFGNAAP*, ::DLECIKAMKEG*))((::PBYTE)hIl2Cpp + FECBDLHPAPE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FECBDLHPAPE_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FECBDLHPAPE_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void IJEPAJIMDPA(::RPG::Client::Prop::DuelChimeraProxy* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::DuelChimeraProxy*))((::PBYTE)hIl2Cpp + FECBDLHPAPE_IJEPAJIMDPA_OFFSET))(this, a1);
		}

	};
