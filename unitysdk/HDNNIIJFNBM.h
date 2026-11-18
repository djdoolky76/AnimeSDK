#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

class KPNIFGIKELE;
class MHJDIPINMMF;

#define HDNNIIJFNBM_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1100C2D0)
#define HDNNIIJFNBM_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1100C240)
#define HDNNIIJFNBM_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x1100C360)
#define HDNNIIJFNBM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1100C130)
#define HDNNIIJFNBM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1100C1C0)
#define HDNNIIJFNBM__CTOR_OFFSET UNITYSDK_OFFSET(0x1100C230)

inline static constexpr unsigned int HDNNIIJFNBM_TypeDefinitionIndex = 82357;

class HDNNIIJFNBM : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xBB; // 0x0
	::KPNIFGIKELE* IKHJEGECGJA; // 0x20
	::MHJDIPINMMF* DAJLAFEMAFM; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDNNIIJFNBM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNNIIJFNBM__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNNIIJFNBM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNNIIJFNBM_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNNIIJFNBM_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNNIIJFNBM_OHFHFOHMBJH_OFFSET))(this);
	}
};
