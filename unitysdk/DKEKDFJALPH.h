#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/MVector3.h"
class GMIFBFGDGJK;
class IFBFJDCECML;
class PBGNKMMDBGD;

#define DKEKDFJALPH_ANJGPHHGKCD_OFFSET UNITYSDK_OFFSET(0x1C5C6A00)
#define DKEKDFJALPH_BCJMKABPDNA_OFFSET UNITYSDK_OFFSET(0x1C5C54A0)
#define DKEKDFJALPH_BJFIHDNLFDI_OFFSET UNITYSDK_OFFSET(0x1C5C5B90)
#define DKEKDFJALPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5C4550)
#define DKEKDFJALPH_DDCCGELAKEB_OFFSET UNITYSDK_OFFSET(0x1C5C71F0)
#define DKEKDFJALPH_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C5C4560)
#define DKEKDFJALPH_IBOIDLEHCCL_OFFSET UNITYSDK_OFFSET(0x1C5C73A0)
#define DKEKDFJALPH_IDLJNIIMELC_OFFSET UNITYSDK_OFFSET(0x1C5C49A0)
#define DKEKDFJALPH_KCBKDDOOIHH_OFFSET UNITYSDK_OFFSET(0x1C5C6BC0)
#define DKEKDFJALPH_MHHIGNCFNOM_OFFSET UNITYSDK_OFFSET(0x1C5C4A40)

inline static constexpr unsigned int DKEKDFJALPH_TypeDefinitionIndex = 37446;

	class DKEKDFJALPH : public ::System::Object
	{
	public:
		::GMIFBFGDGJK* EEFMDEHLLFI; // 0x10
		::PBGNKMMDBGD* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::GMIFBFGDGJK* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GMIFBFGDGJK*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + DKEKDFJALPH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKEKDFJALPH_EXECUTE_OFFSET))(this);
		}

		::System::Void IDLJNIIMELC(::IFBFJDCECML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*))((::PBYTE)hIl2Cpp + DKEKDFJALPH_IDLJNIIMELC_OFFSET))(this, a1);
		}

		::System::Void MHHIGNCFNOM(::IFBFJDCECML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*))((::PBYTE)hIl2Cpp + DKEKDFJALPH_MHHIGNCFNOM_OFFSET))(this, a1);
		}

		::System::Void ANJGPHHGKCD(::IFBFJDCECML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*))((::PBYTE)hIl2Cpp + DKEKDFJALPH_ANJGPHHGKCD_OFFSET))(this, a1);
		}

		::System::Void BCJMKABPDNA(::IFBFJDCECML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*))((::PBYTE)hIl2Cpp + DKEKDFJALPH_BCJMKABPDNA_OFFSET))(this, a1);
		}

		::RPG::MVector3 KCBKDDOOIHH(::IFBFJDCECML* a1, ::System::Single a2)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::IFBFJDCECML*, ::System::Single))((::PBYTE)hIl2Cpp + DKEKDFJALPH_KCBKDDOOIHH_OFFSET))(this, a1, a2);
		}

		::System::Boolean DDCCGELAKEB(::IFBFJDCECML* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFBFJDCECML*))((::PBYTE)hIl2Cpp + DKEKDFJALPH_DDCCGELAKEB_OFFSET))(this, a1);
		}

		::System::Void IBOIDLEHCCL(::IFBFJDCECML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*))((::PBYTE)hIl2Cpp + DKEKDFJALPH_IBOIDLEHCCL_OFFSET))(this, a1);
		}

		::System::Void BJFIHDNLFDI(::IFBFJDCECML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*))((::PBYTE)hIl2Cpp + DKEKDFJALPH_BJFIHDNLFDI_OFFSET))(this, a1);
		}

	};
