#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LMNBJHBKGGO;
class OEALFKBCKGB;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIMonoController; }

#define MBDBACFAMCB_COHDMPBBMPO_1_OFFSET UNITYSDK_OFFSET(0x16C6FCE0)
#define MBDBACFAMCB_COHDMPBBMPO_OFFSET UNITYSDK_OFFSET(0x16C6F510)
#define MBDBACFAMCB_EHAOHHOADIP_OFFSET UNITYSDK_OFFSET(0x16C70250)
#define MBDBACFAMCB_FAJFNDCEBEP_OFFSET UNITYSDK_OFFSET(0x16C70370)
#define MBDBACFAMCB_HNEAGGGILAC_1_OFFSET UNITYSDK_OFFSET(0x16C70520)
#define MBDBACFAMCB_HNEAGGGILAC_OFFSET UNITYSDK_OFFSET(0x16C6FF50)
#define MBDBACFAMCB_KKFNPONHGEM_1_OFFSET UNITYSDK_OFFSET(0x16C6FA30)
#define MBDBACFAMCB_KKFNPONHGEM_OFFSET UNITYSDK_OFFSET(0x16C6F780)
#define MBDBACFAMCB_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x16C70490)
#define MBDBACFAMCB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x16C701B0)
#define MBDBACFAMCB_PLCJNBHECGC_OFFSET UNITYSDK_OFFSET(0x16C6F490)
#define MBDBACFAMCB__CTOR_OFFSET UNITYSDK_OFFSET(0x16C6F3C0)

inline static constexpr unsigned int MBDBACFAMCB_TypeDefinitionIndex = 62164;

class MBDBACFAMCB : public ::System::Object
{
public:
	::System::Object* MINNALHCHPC; // 0x10
	::System::Object* KEJFKNEEFLK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDBACFAMCB__CTOR_OFFSET))(this);
	}

	::System::Void PLCJNBHECGC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDBACFAMCB_PLCJNBHECGC_OFFSET))(this);
	}

	::System::Boolean COHDMPBBMPO(::MoleMole::UIMonoController* EKHMJCMNBOF)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIMonoController*))((::PBYTE)hIl2Cpp + MBDBACFAMCB_COHDMPBBMPO_OFFSET))(this, EKHMJCMNBOF);
	}

	::System::Void KKFNPONHGEM(::MoleMole::UIMonoController* EKHMJCMNBOF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIMonoController*))((::PBYTE)hIl2Cpp + MBDBACFAMCB_KKFNPONHGEM_OFFSET))(this, EKHMJCMNBOF);
	}

	::System::Void KKFNPONHGEM_1(::MoleMole::UIBaseController* AEJBCMBCDJE)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + MBDBACFAMCB_KKFNPONHGEM_1_OFFSET))(this, AEJBCMBCDJE);
	}

	::System::Boolean COHDMPBBMPO_1(::MoleMole::UIBaseController* AEJBCMBCDJE)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + MBDBACFAMCB_COHDMPBBMPO_1_OFFSET))(this, AEJBCMBCDJE);
	}

	::System::Void HNEAGGGILAC(::MoleMole::UIBaseController* AEJBCMBCDJE)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + MBDBACFAMCB_HNEAGGGILAC_OFFSET))(this, AEJBCMBCDJE);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDBACFAMCB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void EHAOHHOADIP(::LMNBJHBKGGO* PIHJDGAALDD, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::LMNBJHBKGGO*, ::System::Single))((::PBYTE)hIl2Cpp + MBDBACFAMCB_EHAOHHOADIP_OFFSET))(this, PIHJDGAALDD, PMNLNNGEIFM);
	}

	::System::Void FAJFNDCEBEP(::OEALFKBCKGB* PIHJDGAALDD, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::OEALFKBCKGB*, ::System::Single))((::PBYTE)hIl2Cpp + MBDBACFAMCB_FAJFNDCEBEP_OFFSET))(this, PIHJDGAALDD, PMNLNNGEIFM);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MBDBACFAMCB_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void HNEAGGGILAC_1(::MoleMole::UIMonoController* EKHMJCMNBOF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIMonoController*))((::PBYTE)hIl2Cpp + MBDBACFAMCB_HNEAGGGILAC_1_OFFSET))(this, EKHMJCMNBOF);
	}
};
