#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class PerformanceSettingPostProcessProfileBase; }

#define KAFMJLPNNAG_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x12970DC0)
#define KAFMJLPNNAG_KOCHHHPBJHB_OFFSET UNITYSDK_OFFSET(0x12970D70)
#define KAFMJLPNNAG__CTOR_OFFSET UNITYSDK_OFFSET(0x12970D60)

inline static constexpr unsigned int KAFMJLPNNAG_TypeDefinitionIndex = 78124;

class KAFMJLPNNAG : public ::System::Object
{
public:
	::MoleMole::PerformanceSettingPostProcessProfileBase* PKANALIFAHN; // 0x10

	::System::Void _ctor(::MoleMole::PerformanceSettingPostProcessProfileBase* JFDDLNDKIKM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::PerformanceSettingPostProcessProfileBase*))((::PBYTE)hIl2Cpp + KAFMJLPNNAG__CTOR_OFFSET))(this, JFDDLNDKIKM);
	}

	::System::Void KOCHHHPBJHB(::System::Boolean ICALOEBJCBL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KAFMJLPNNAG_KOCHHHPBJHB_OFFSET))(this, ICALOEBJCBL);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAFMJLPNNAG_HNDGJKPNIHA_OFFSET))(this);
	}
};
