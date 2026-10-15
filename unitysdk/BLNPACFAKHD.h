#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLNPACFAKHD;

#define BLNPACFAKHD_CNENKBFFPDC_OFFSET UNITYSDK_OFFSET(0x1DD12F80)
#define BLNPACFAKHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD12AA0)
#define BLNPACFAKHD_EEHHLNDAJOC_OFFSET UNITYSDK_OFFSET(0x1DD12E50)
#define BLNPACFAKHD_LAFBAEKPGCL_OFFSET UNITYSDK_OFFSET(0x1DD12CC0)
#define BLNPACFAKHD_MGPPPONDBFJ_OFFSET UNITYSDK_OFFSET(0x1DD12B90)
#define BLNPACFAKHD_MJEODHKPKEB_OFFSET UNITYSDK_OFFSET(0x1DD12AD0)
#define BLNPACFAKHD_NDFCJNAMFJG_OFFSET UNITYSDK_OFFSET(0x1DD12A70)
#define BLNPACFAKHD_PAIBLOBKMKH_OFFSET UNITYSDK_OFFSET(0x1DD12A00)
#define BLNPACFAKHD_PDBMMICONOF_OFFSET UNITYSDK_OFFSET(0x1DD12A10)
#define BLNPACFAKHD_PEFLJDOKOIL_OFFSET UNITYSDK_OFFSET(0x1DD12A40)

	class BLNPACFAKHD : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* EDOJOCAPDEF; // 0x10
		::System::Int32 IPLDFDAGKGK; // 0x18
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BLNPACFAKHD_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 PAIBLOBKMKH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLNPACFAKHD_PAIBLOBKMKH_OFFSET))(this);
		}

		::System::Void PDBMMICONOF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BLNPACFAKHD_PDBMMICONOF_OFFSET))(this, a1);
		}

		::System::Single PEFLJDOKOIL(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BLNPACFAKHD_PEFLJDOKOIL_OFFSET))(this, a1);
		}

		::System::Void NDFCJNAMFJG(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + BLNPACFAKHD_NDFCJNAMFJG_OFFSET))(this, a1, a2);
		}

		::BLNPACFAKHD* MJEODHKPKEB()
		{
			return ((::BLNPACFAKHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLNPACFAKHD_MJEODHKPKEB_OFFSET))(this);
		}

		::BLNPACFAKHD* MGPPPONDBFJ()
		{
			return ((::BLNPACFAKHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLNPACFAKHD_MGPPPONDBFJ_OFFSET))(this);
		}

		::BLNPACFAKHD* LAFBAEKPGCL()
		{
			return ((::BLNPACFAKHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLNPACFAKHD_LAFBAEKPGCL_OFFSET))(this);
		}

		::System::Void EEHHLNDAJOC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BLNPACFAKHD_EEHHLNDAJOC_OFFSET))(this, a1);
		}

		::System::Single CNENKBFFPDC(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BLNPACFAKHD_CNENKBFFPDC_OFFSET))(this, a1);
		}

	};
