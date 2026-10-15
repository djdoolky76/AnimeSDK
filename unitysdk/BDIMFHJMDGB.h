#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHAKCLAJLOB.h"
class EBHAGMBDAAD;
class GGJFAFONDHN;
class HGEGFCADEEC;
class JDLBJEFHFPK;

#define BDIMFHJMDGB_ADJNLJABDDE_OFFSET UNITYSDK_OFFSET(0x162FCBC0)
#define BDIMFHJMDGB_CTOR_OFFSET UNITYSDK_OFFSET(0x162FCD30)
#define BDIMFHJMDGB_DHBFCHLKMHP_OFFSET UNITYSDK_OFFSET(0x162FC730)
#define BDIMFHJMDGB_EPNKLHCHFIH_OFFSET UNITYSDK_OFFSET(0x162FC890)
#define BDIMFHJMDGB_GDHBCIABMDB_OFFSET UNITYSDK_OFFSET(0x162FCA30)
#define BDIMFHJMDGB_GHCCIKMJCMF_OFFSET UNITYSDK_OFFSET(0x162FCB70)
#define BDIMFHJMDGB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x162FC780)
#define BDIMFHJMDGB_ODBJPBFIHPE_OFFSET UNITYSDK_OFFSET(0x162FC9E0)
#define BDIMFHJMDGB__INIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x162FCD50)

inline static constexpr unsigned int BDIMFHJMDGB_TypeDefinitionIndex = 49312;

	class BDIMFHJMDGB : public ::KHAKCLAJLOB
	{
	public:
		::EBHAGMBDAAD* EKNJLLJKOIH; // 0x70
		::JDLBJEFHFPK* LMPMAFAMOLM; // 0x78
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
