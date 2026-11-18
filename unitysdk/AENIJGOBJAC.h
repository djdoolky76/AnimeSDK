#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JLJJIKLHADM;
class PHICPBCACKJ;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T1, typename T2> class FJAMFCDJKAL_2;

#define AENIJGOBJAC_AOHMKOAFBKB_OFFSET UNITYSDK_OFFSET(0x1FD075D0)
#define AENIJGOBJAC_COHDMPBBMPO_1_OFFSET UNITYSDK_OFFSET(0x1FD07690)
#define AENIJGOBJAC_COHDMPBBMPO_OFFSET UNITYSDK_OFFSET(0x1FD071F0)
#define AENIJGOBJAC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FD07050)
#define AENIJGOBJAC_EFGOADGCJMA_OFFSET UNITYSDK_OFFSET(0x1FD074D0)
#define AENIJGOBJAC_EIMKFKGAHBN_OFFSET UNITYSDK_OFFSET(0x1FD07390)
#define AENIJGOBJAC_FJMHCNINFPD_OFFSET UNITYSDK_OFFSET(0x1FD072F0)
#define AENIJGOBJAC_LABIFHOIPLE_OFFSET UNITYSDK_OFFSET(0x1FD07430)
#define AENIJGOBJAC_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x1FD07640)
#define AENIJGOBJAC_OKJHELFEGGJ_OFFSET UNITYSDK_OFFSET(0x1FD07570)
#define AENIJGOBJAC__CTOR_OFFSET UNITYSDK_OFFSET(0x1FD06F50)

inline static constexpr unsigned int AENIJGOBJAC_TypeDefinitionIndex = 29057;

class AENIJGOBJAC : public ::System::Object
{
public:
	::JLJJIKLHADM* EHPCBKHJHJG; // 0x10
	::FJAMFCDJKAL_2<::System::UInt32, ::PHICPBCACKJ*>* NFBIEEPHGFB; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* IIOFFJJGGEC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AENIJGOBJAC__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AENIJGOBJAC_DISPOSE_OFFSET))(this);
	}

	::System::Boolean COHDMPBBMPO(::System::UInt32 MGMDLMBEDJF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AENIJGOBJAC_COHDMPBBMPO_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void FJMHCNINFPD(::PHICPBCACKJ* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::PHICPBCACKJ*))((::PBYTE)hIl2Cpp + AENIJGOBJAC_FJMHCNINFPD_OFFSET))(this, KECKGDFIALJ);
	}

	::PHICPBCACKJ* EIMKFKGAHBN(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::PHICPBCACKJ*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AENIJGOBJAC_EIMKFKGAHBN_OFFSET))(this, BKLGNCBNEGM);
	}

	::PHICPBCACKJ* LABIFHOIPLE(::System::Int32 MHFELDGOIEJ)
	{
		return ((::PHICPBCACKJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AENIJGOBJAC_LABIFHOIPLE_OFFSET))(this, MHFELDGOIEJ);
	}

	::System::Void EFGOADGCJMA(::PHICPBCACKJ* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::PHICPBCACKJ*))((::PBYTE)hIl2Cpp + AENIJGOBJAC_EFGOADGCJMA_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void OKJHELFEGGJ(::System::Int32 MHFELDGOIEJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AENIJGOBJAC_OKJHELFEGGJ_OFFSET))(this, MHFELDGOIEJ);
	}

	::System::Void AOHMKOAFBKB(::System::Int32 MHFELDGOIEJ, ::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + AENIJGOBJAC_AOHMKOAFBKB_OFFSET))(this, MHFELDGOIEJ, BKLGNCBNEGM);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AENIJGOBJAC_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Boolean COHDMPBBMPO_1(::PHICPBCACKJ* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::PHICPBCACKJ*))((::PBYTE)hIl2Cpp + AENIJGOBJAC_COHDMPBBMPO_1_OFFSET))(this, KECKGDFIALJ);
	}
};
