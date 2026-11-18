#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JDMPFJDCDKG.h"

class CBIMBNPJFND;
class GFKLHDOEAIJ;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DMDOIHPMGAB_BIGJFMHHOLP_OFFSET UNITYSDK_OFFSET(0x19D795E0)
#define DMDOIHPMGAB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19D790C0)
#define DMDOIHPMGAB_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x19D79740)
#define DMDOIHPMGAB_FDHIIENBJOA_OFFSET UNITYSDK_OFFSET(0x19D79870)
#define DMDOIHPMGAB_ILCDOCAFNHF_OFFSET UNITYSDK_OFFSET(0x19D79380)
#define DMDOIHPMGAB_KKFNPONHGEM_OFFSET UNITYSDK_OFFSET(0x19D791A0)
#define DMDOIHPMGAB_ONCREATE_OFFSET UNITYSDK_OFFSET(0x19D79100)
#define DMDOIHPMGAB__CTOR_OFFSET UNITYSDK_OFFSET(0x19D79280)

inline static constexpr unsigned int DMDOIHPMGAB_TypeDefinitionIndex = 45709;

class DMDOIHPMGAB
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::CBIMBNPJFND*>* LDIHGMFPHKI; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::GFKLHDOEAIJ*>* LLJCCNLBMIC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMDOIHPMGAB__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMDOIHPMGAB_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMDOIHPMGAB_ONCREATE_OFFSET))(this);
	}

	::System::Boolean ILCDOCAFNHF(::System::String* EPJMPBNAHEO, ::JDMPFJDCDKG& HBMGHPEPBNC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::JDMPFJDCDKG&))((::PBYTE)hIl2Cpp + DMDOIHPMGAB_ILCDOCAFNHF_OFFSET))(this, EPJMPBNAHEO, HBMGHPEPBNC);
	}

	static ::Il2CppArray<::System::String*>* BIGJFMHHOLP(::System::String* EMIKCAHJLGB)
	{
		return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + DMDOIHPMGAB_BIGJFMHHOLP_OFFSET))(EMIKCAHJLGB);
	}

	::System::Boolean FCFOEJGPDNO(::System::String* KIEELCGMIBK, ::JDMPFJDCDKG& HBMGHPEPBNC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::JDMPFJDCDKG&))((::PBYTE)hIl2Cpp + DMDOIHPMGAB_FCFOEJGPDNO_OFFSET))(this, KIEELCGMIBK, HBMGHPEPBNC);
	}

	::DMDOIHPMGAB* KKFNPONHGEM(::System::String* MCOHLHMKLIP, ::CBIMBNPJFND* OKONIJEGJOM)
	{
		return ((::DMDOIHPMGAB*(*)(::PVOID, ::System::String*, ::CBIMBNPJFND*))((::PBYTE)hIl2Cpp + DMDOIHPMGAB_KKFNPONHGEM_OFFSET))(this, MCOHLHMKLIP, OKONIJEGJOM);
	}

	::GFKLHDOEAIJ* FDHIIENBJOA(::System::String* KIEELCGMIBK)
	{
		return ((::GFKLHDOEAIJ*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DMDOIHPMGAB_FDHIIENBJOA_OFFSET))(this, KIEELCGMIBK);
	}
};
