#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGLIFHIAIEH.h"
#include "unitysdk/MJBABCIIKHB.h"

#define EPPNKOBGGIC_DDPPCLDJMHF_OFFSET UNITYSDK_OFFSET(0x1E1C2C40)
#define EPPNKOBGGIC_DFGOJHPONDC_OFFSET UNITYSDK_OFFSET(0x1E1C3080)
#define EPPNKOBGGIC_LNHPIHCBGAD_OFFSET UNITYSDK_OFFSET(0x1E1C3140)
#define EPPNKOBGGIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C3070)

inline static constexpr unsigned int EPPNKOBGGIC_TypeDefinitionIndex = 94043;

class EPPNKOBGGIC : public ::MJBABCIIKHB
{
public:
	// static const ::System::Single LFFLKGCMPOL; // 0x0
	::Il2CppArray<::JGLIFHIAIEH>* LACKOCMIBHC; // 0x40
	::System::Int32 JCPJFMEAMIH; // 0x48
	::System::Single OFHIJALDAPM; // 0x4C
	::System::Boolean AGMHFOFMILH; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPPNKOBGGIC__CTOR_OFFSET))(this);
	}

	::System::Void DDPPCLDJMHF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPPNKOBGGIC_DDPPCLDJMHF_OFFSET))(this);
	}

	::System::Void DFGOJHPONDC(::System::Single NKABNIGKAFI, ::Il2CppArray<::JGLIFHIAIEH>* GJHPIIMINGH, ::System::Boolean HAFDIMGJBHC, ::JGLIFHIAIEH CPILJNMFPJL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::JGLIFHIAIEH>*, ::System::Boolean, ::JGLIFHIAIEH))((::PBYTE)hIl2Cpp + EPPNKOBGGIC_DFGOJHPONDC_OFFSET))(this, NKABNIGKAFI, GJHPIIMINGH, HAFDIMGJBHC, CPILJNMFPJL);
	}

	::System::Void LNHPIHCBGAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPPNKOBGGIC_LNHPIHCBGAD_OFFSET))(this);
	}
};
