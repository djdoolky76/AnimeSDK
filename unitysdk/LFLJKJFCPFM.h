#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BJPFMGCNFKP;
class FLMEKBECJPI;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LFLJKJFCPFM_AMGBGFDJNFG_OFFSET UNITYSDK_OFFSET(0x1565A130)
#define LFLJKJFCPFM_BIINOFLBGAC_OFFSET UNITYSDK_OFFSET(0x1565A460)
#define LFLJKJFCPFM_FHGBNBLKHDA_OFFSET UNITYSDK_OFFSET(0x1565A2E0)
#define LFLJKJFCPFM_HLJPINPGIJN_OFFSET UNITYSDK_OFFSET(0x15659F90)
#define LFLJKJFCPFM_MBFFDAMKOBL_OFFSET UNITYSDK_OFFSET(0x15659B00)
#define LFLJKJFCPFM_OFEDGMNCBOD_OFFSET UNITYSDK_OFFSET(0x1565A420)
#define LFLJKJFCPFM_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1565A2D0)
#define LFLJKJFCPFM__CTOR_OFFSET UNITYSDK_OFFSET(0x156598D0)

inline static constexpr unsigned int LFLJKJFCPFM_TypeDefinitionIndex = 45902;

class LFLJKJFCPFM : public ::System::Object
{
public:
	::BJPFMGCNFKP* CMFLNMAALDD; // 0x10
	::System::Collections::Generic::List_1<::FLMEKBECJPI*>* COLMFCPPKNH; // 0x18
	::System::Int32 _HHNNKGPFJNO_k__BackingField; // 0x20

	::System::Void _ctor(::System::Int32 LKGAAIGDDBH, ::System::Boolean OCENHDFMHEC, ::System::Collections::Generic::List_1<::System::Int32>* KNIOEJIPLHD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + LFLJKJFCPFM__CTOR_OFFSET))(this, LKGAAIGDDBH, OCENHDFMHEC, KNIOEJIPLHD);
	}

	::System::Boolean HLJPINPGIJN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLJKJFCPFM_HLJPINPGIJN_OFFSET))(this);
	}

	::System::Boolean AMGBGFDJNFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLJKJFCPFM_AMGBGFDJNFG_OFFSET))(this);
	}

	::System::Void MBFFDAMKOBL(::System::Collections::Generic::List_1<::System::Int32>* KNIOEJIPLHD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + LFLJKJFCPFM_MBFFDAMKOBL_OFFSET))(this, KNIOEJIPLHD);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLJKJFCPFM_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::FLMEKBECJPI*>* FHGBNBLKHDA()
	{
		return ((::System::Collections::Generic::List_1<::FLMEKBECJPI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLJKJFCPFM_FHGBNBLKHDA_OFFSET))(this);
	}

	::System::Void OFEDGMNCBOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLJKJFCPFM_OFEDGMNCBOD_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::FLMEKBECJPI*>* BIINOFLBGAC()
	{
		return ((::System::Collections::Generic::List_1<::FLMEKBECJPI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLJKJFCPFM_BIINOFLBGAC_OFFSET))(this);
	}
};
