#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define JONFHKPONMI_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x17B59A70)
#define JONFHKPONMI_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x17B599E0)
#define JONFHKPONMI_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x17B59B00)
#define JONFHKPONMI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17B598D0)
#define JONFHKPONMI__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B59960)
#define JONFHKPONMI__CTOR_OFFSET UNITYSDK_OFFSET(0x17B599D0)

inline static constexpr unsigned int JONFHKPONMI_TypeDefinitionIndex = 76975;

class JONFHKPONMI : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xDF; // 0x0
	::System::String* BGPMDIKJFPJ; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JONFHKPONMI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JONFHKPONMI__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JONFHKPONMI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JONFHKPONMI_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JONFHKPONMI_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JONFHKPONMI_OHFHFOHMBJH_OFFSET))(this);
	}
};
