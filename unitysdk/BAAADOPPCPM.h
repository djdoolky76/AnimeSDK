#pragma once
#include "unitysdk/unitysdk.h"
class BJCCHHGENPC;
class KNOGDAADPAF;

#define BAAADOPPCPM_ACNGNMNPMHB_OFFSET UNITYSDK_OFFSET(0x1C8AD520)
#define BAAADOPPCPM_BDBEPKAEDLL_OFFSET UNITYSDK_OFFSET(0x1C8AD600)
#define BAAADOPPCPM_BFMEFODCANJ_OFFSET UNITYSDK_OFFSET(0x1C8AD620)
#define BAAADOPPCPM_CJDOAEOPCDE_OFFSET UNITYSDK_OFFSET(0x1C8ADA10)
#define BAAADOPPCPM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8ADA70)
#define BAAADOPPCPM_ELGEAHKGGEM_OFFSET UNITYSDK_OFFSET(0x1C8AD7C0)
#define BAAADOPPCPM_GCAGBEGMMKO_OFFSET UNITYSDK_OFFSET(0x1C8AD820)
#define BAAADOPPCPM_KJGOCMCKEHJ_OFFSET UNITYSDK_OFFSET(0x1C8AD840)
#define BAAADOPPCPM_NPEBIEPAHDF_OFFSET UNITYSDK_OFFSET(0x1C8AD6E0)
#define BAAADOPPCPM_OFIBDHBGMPK_OFFSET UNITYSDK_OFFSET(0x1C8AD970)

	class BAAADOPPCPM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAAADOPPCPM_CTOR_OFFSET))(this);
		}

		::KNOGDAADPAF* ACNGNMNPMHB()
		{
			return ((::KNOGDAADPAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAAADOPPCPM_ACNGNMNPMHB_OFFSET))(this);
		}

		::System::Boolean BDBEPKAEDLL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BAAADOPPCPM_BDBEPKAEDLL_OFFSET))(this);
		}

		::System::Void BFMEFODCANJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BAAADOPPCPM_BFMEFODCANJ_OFFSET))(this, a1);
		}

		::KNOGDAADPAF* NPEBIEPAHDF()
		{
			return ((::KNOGDAADPAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAAADOPPCPM_NPEBIEPAHDF_OFFSET))(this);
		}

		::BJCCHHGENPC* ELGEAHKGGEM()
		{
			return ((::BJCCHHGENPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAAADOPPCPM_ELGEAHKGGEM_OFFSET))(this);
		}

		::System::Boolean GCAGBEGMMKO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BAAADOPPCPM_GCAGBEGMMKO_OFFSET))(this);
		}

		::KNOGDAADPAF* KJGOCMCKEHJ(::System::Single a1, ::System::Single a2)
		{
			return ((::KNOGDAADPAF*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BAAADOPPCPM_KJGOCMCKEHJ_OFFSET))(this, a1, a2);
		}

		::System::Void OFIBDHBGMPK(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BAAADOPPCPM_OFIBDHBGMPK_OFFSET))(this, a1, a2);
		}

		::System::Void CJDOAEOPCDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAAADOPPCPM_CJDOAEOPCDE_OFFSET))(this);
		}

	};
