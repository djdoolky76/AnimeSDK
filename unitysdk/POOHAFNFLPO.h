#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define POOHAFNFLPO_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x1C671C60)
#define POOHAFNFLPO_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1C671BD0)
#define POOHAFNFLPO_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1C671B40)
#define POOHAFNFLPO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C671A40)
#define POOHAFNFLPO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C671AC0)
#define POOHAFNFLPO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C671B30)

inline static constexpr unsigned int POOHAFNFLPO_TypeDefinitionIndex = 70557;

class POOHAFNFLPO : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xB3; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POOHAFNFLPO__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POOHAFNFLPO__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + POOHAFNFLPO_TOSTRING_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POOHAFNFLPO_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POOHAFNFLPO_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + POOHAFNFLPO_DPIHOJBBGLA_OFFSET))(this);
	}
};
