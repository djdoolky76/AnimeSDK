#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHAKCLAJLOB.h"
class EBHAGMBDAAD;
class GGJFAFONDHN;
class HGEGFCADEEC;
class JDLBJEFHFPK;

#define BDIMFHJMDGB_ADJNLJABDDE_OFFSET UNITYSDK_OFFSET(0x170C4120)
#define BDIMFHJMDGB_CTOR_OFFSET UNITYSDK_OFFSET(0x170C4290)
#define BDIMFHJMDGB_DHBFCHLKMHP_OFFSET UNITYSDK_OFFSET(0x170C3C90)
#define BDIMFHJMDGB_EPNKLHCHFIH_OFFSET UNITYSDK_OFFSET(0x170C3DF0)
#define BDIMFHJMDGB_GDHBCIABMDB_OFFSET UNITYSDK_OFFSET(0x170C3F90)
#define BDIMFHJMDGB_GHCCIKMJCMF_OFFSET UNITYSDK_OFFSET(0x170C40D0)
#define BDIMFHJMDGB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x170C3CE0)
#define BDIMFHJMDGB_ODBJPBFIHPE_OFFSET UNITYSDK_OFFSET(0x170C3F40)
#define BDIMFHJMDGB__INIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x170C42B0)

inline static constexpr unsigned int BDIMFHJMDGB_TypeDefinitionIndex = 50388;

	class BDIMFHJMDGB : public ::KHAKCLAJLOB
	{
	public:
		::JDLBJEFHFPK* LMPMAFAMOLM; // 0x70
		::EBHAGMBDAAD* EKNJLLJKOIH; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDIMFHJMDGB_CTOR_OFFSET))(this);
		}

		::System::Void DHBFCHLKMHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDIMFHJMDGB_DHBFCHLKMHP_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDIMFHJMDGB_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void EPNKLHCHFIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDIMFHJMDGB_EPNKLHCHFIH_OFFSET))(this);
		}

		::System::Void ODBJPBFIHPE(::GGJFAFONDHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + BDIMFHJMDGB_ODBJPBFIHPE_OFFSET))(this, a1);
		}

		::System::Void GHCCIKMJCMF(::GGJFAFONDHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + BDIMFHJMDGB_GHCCIKMJCMF_OFFSET))(this, a1);
		}

		::System::Void GDHBCIABMDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDIMFHJMDGB_GDHBCIABMDB_OFFSET))(this);
		}

		::System::Void ADJNLJABDDE(::HGEGFCADEEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGEGFCADEEC*))((::PBYTE)hIl2Cpp + BDIMFHJMDGB_ADJNLJABDDE_OFFSET))(this, a1);
		}

		::System::Void _Init_b__1_0(::GGJFAFONDHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + BDIMFHJMDGB__INIT_B__1_0_OFFSET))(this, a1);
		}

	};
