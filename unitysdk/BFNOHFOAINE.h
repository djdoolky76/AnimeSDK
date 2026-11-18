#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define BFNOHFOAINE_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x169EC420)
#define BFNOHFOAINE_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x169EC2F0)
#define BFNOHFOAINE_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x169EC380)
#define BFNOHFOAINE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x169EC200)
#define BFNOHFOAINE__CCTOR_OFFSET UNITYSDK_OFFSET(0x169EC270)
#define BFNOHFOAINE__CTOR_OFFSET UNITYSDK_OFFSET(0x169EC2E0)

inline static constexpr unsigned int BFNOHFOAINE_TypeDefinitionIndex = 91753;

class BFNOHFOAINE : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x6; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFNOHFOAINE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFNOHFOAINE__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFNOHFOAINE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFNOHFOAINE_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFNOHFOAINE_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFNOHFOAINE_FIGPAOKNJLN_OFFSET))(this);
	}
};
