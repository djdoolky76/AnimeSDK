#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IBENDELLLAO;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAAHNJMGMEH_DMCOBEKDOHG_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x172697C0)
#define NAAHNJMGMEH_DMCOBEKDOHG_FMKIPKMIALG_OFFSET UNITYSDK_OFFSET(0x17269800)
#define NAAHNJMGMEH_DMCOBEKDOHG_HKMNONIJCID_OFFSET UNITYSDK_OFFSET(0x17269350)
#define NAAHNJMGMEH_DMCOBEKDOHG_KAKLKBKJFIB_OFFSET UNITYSDK_OFFSET(0x172694A0)
#define NAAHNJMGMEH_DMCOBEKDOHG_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x17269300)
#define NAAHNJMGMEH_DMCOBEKDOHG_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x172698E0)
#define NAAHNJMGMEH_DMCOBEKDOHG__CTOR_OFFSET UNITYSDK_OFFSET(0x17269220)

inline static constexpr unsigned int NAAHNJMGMEH_DMCOBEKDOHG_TypeDefinitionIndex = 38738;

class NAAHNJMGMEH_DMCOBEKDOHG : public ::System::Object
{
public:
	::IBENDELLLAO* KEDPAIECPJE; // 0x10
	::IBENDELLLAO* ELHHOMMNFLK; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::IBENDELLLAO*>* FMKCPGAJEPB; // 0x20
	::System::Collections::Generic::List_1<::System::Object*>* LEAOMHABNOL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAHNJMGMEH_DMCOBEKDOHG__CTOR_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAHNJMGMEH_DMCOBEKDOHG_OKJCHFGIKBH_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAHNJMGMEH_DMCOBEKDOHG_BJANDJKKNCD_OFFSET))(this);
	}

	::IBENDELLLAO* FMKIPKMIALG(::System::Int32 HBHFFHEHLBO)
	{
		return ((::IBENDELLLAO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAAHNJMGMEH_DMCOBEKDOHG_FMKIPKMIALG_OFFSET))(this, HBHFFHEHLBO);
	}

	::System::Void PKOGNPKCHHE(::System::Collections::Generic::List_1<::System::Int32>* HHEDICCJAMF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NAAHNJMGMEH_DMCOBEKDOHG_PKOGNPKCHHE_OFFSET))(this, HHEDICCJAMF);
	}

	::System::Void KAKLKBKJFIB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAHNJMGMEH_DMCOBEKDOHG_KAKLKBKJFIB_OFFSET))(this);
	}

	::System::Void HKMNONIJCID()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAHNJMGMEH_DMCOBEKDOHG_HKMNONIJCID_OFFSET))(this);
	}
};
