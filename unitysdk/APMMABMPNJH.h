#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define APMMABMPNJH_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x143BDCD0)
#define APMMABMPNJH_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x143BDC40)
#define APMMABMPNJH__CCTOR_OFFSET UNITYSDK_OFFSET(0x143BDBC0)
#define APMMABMPNJH__CTOR_OFFSET UNITYSDK_OFFSET(0x143BDC30)

inline static constexpr unsigned int APMMABMPNJH_TypeDefinitionIndex = 45418;

class APMMABMPNJH : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x12A; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APMMABMPNJH__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APMMABMPNJH__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APMMABMPNJH_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APMMABMPNJH_FIGPAOKNJLN_OFFSET))(this);
	}
};
