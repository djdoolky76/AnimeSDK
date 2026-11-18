#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define CCEIKHBNCAN_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x14535A00)
#define CCEIKHBNCAN_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x14535AF0)
#define CCEIKHBNCAN_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x14535970)
#define CCEIKHBNCAN_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x14535A50)
#define CCEIKHBNCAN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x14535870)
#define CCEIKHBNCAN__CCTOR_OFFSET UNITYSDK_OFFSET(0x145358F0)
#define CCEIKHBNCAN__CTOR_OFFSET UNITYSDK_OFFSET(0x14535960)

inline static constexpr unsigned int CCEIKHBNCAN_TypeDefinitionIndex = 90077;

class CCEIKHBNCAN : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x15C; // 0x0
	::System::Boolean LCGNHLHPDLE; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCEIKHBNCAN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCEIKHBNCAN__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCEIKHBNCAN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCEIKHBNCAN_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Boolean CAAFEGLOALC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CCEIKHBNCAN_CNHBDOMKKDE_OFFSET))(this, CAAFEGLOALC);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCEIKHBNCAN_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCEIKHBNCAN_FIGPAOKNJLN_OFFSET))(this);
	}
};
