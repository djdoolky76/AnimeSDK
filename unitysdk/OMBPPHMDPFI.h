#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AIJGGGANLLD.h"

class OMBPPHMDPFI_JEDEJHJDPFK;
class PFEOJDIJIBM;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OMBPPHMDPFI_ADNPFJMKDNM_OFFSET UNITYSDK_OFFSET(0x1369FA60)
#define OMBPPHMDPFI_BIHFIGPPHKE_OFFSET UNITYSDK_OFFSET(0x1369F710)
#define OMBPPHMDPFI_NMHKFGLFLND_OFFSET UNITYSDK_OFFSET(0x1369F980)
#define OMBPPHMDPFI_PJFPEPHIEGE_OFFSET UNITYSDK_OFFSET(0x1369F4D0)
#define OMBPPHMDPFI__CTOR_OFFSET UNITYSDK_OFFSET(0x1369F4C0)

inline static constexpr unsigned int OMBPPHMDPFI_TypeDefinitionIndex = 85041;

class OMBPPHMDPFI : public ::System::Object
{
public:
	::System::String* DCJCHGOGLMF; // 0x10
	::System::Collections::Generic::List_1<::System::Object*>* PLGLKDMLBLE; // 0x18
	::System::Boolean LPMHJKCKLID; // 0x20
	::System::Boolean DMONDABGMCC; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBPPHMDPFI__CTOR_OFFSET))(this);
	}

	::System::Void PJFPEPHIEGE(::System::Boolean CGOMOCPBMMC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OMBPPHMDPFI_PJFPEPHIEGE_OFFSET))(this, CGOMOCPBMMC);
	}

	::System::Void BIHFIGPPHKE(::PFEOJDIJIBM* DACDAPIGBCB, ::System::Int32 BNLHPGHLKDK, ::AIJGGGANLLD HGIJHODLIBC, ::OMBPPHMDPFI_JEDEJHJDPFK* AOKHOHCJNFJ)
	{
		return ((::System::Void(*)(::PVOID, ::PFEOJDIJIBM*, ::System::Int32, ::AIJGGGANLLD, ::OMBPPHMDPFI_JEDEJHJDPFK*))((::PBYTE)hIl2Cpp + OMBPPHMDPFI_BIHFIGPPHKE_OFFSET))(this, DACDAPIGBCB, BNLHPGHLKDK, HGIJHODLIBC, AOKHOHCJNFJ);
	}

	::System::Void NMHKFGLFLND(::PFEOJDIJIBM* DACDAPIGBCB)
	{
		return ((::System::Void(*)(::PVOID, ::PFEOJDIJIBM*))((::PBYTE)hIl2Cpp + OMBPPHMDPFI_NMHKFGLFLND_OFFSET))(this, DACDAPIGBCB);
	}

	::System::Void ADNPFJMKDNM(::PFEOJDIJIBM* DACDAPIGBCB)
	{
		return ((::System::Void(*)(::PVOID, ::PFEOJDIJIBM*))((::PBYTE)hIl2Cpp + OMBPPHMDPFI_ADNPFJMKDNM_OFFSET))(this, DACDAPIGBCB);
	}
};
