#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EKBJNGKHBKA;
class POOOEHMPNLD;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KACPKMHKGGK_CHOHFMAHHFI_OFFSET UNITYSDK_OFFSET(0x1611F4F0)
#define KACPKMHKGGK_DLNDCKDPAOF_OFFSET UNITYSDK_OFFSET(0x1611EB40)
#define KACPKMHKGGK_LPDECIMPMBB_OFFSET UNITYSDK_OFFSET(0x1611F330)
#define KACPKMHKGGK_MKLPGGANGJD_OFFSET UNITYSDK_OFFSET(0x1611ECD0)
#define KACPKMHKGGK_OMILKIMGCEM_OFFSET UNITYSDK_OFFSET(0x1611EC00)
#define KACPKMHKGGK__CTOR_OFFSET UNITYSDK_OFFSET(0x1611EAB0)

inline static constexpr unsigned int KACPKMHKGGK_TypeDefinitionIndex = 15338;

class KACPKMHKGGK : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::POOOEHMPNLD*>*>* PAALGICAION; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KACPKMHKGGK__CTOR_OFFSET))(this);
	}

	::System::Boolean DLNDCKDPAOF(::System::Int32 INEPJABHIIG, ::System::Collections::Generic::List_1<::POOOEHMPNLD*>*& DJLOKMMLFJC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::POOOEHMPNLD*>*&))((::PBYTE)hIl2Cpp + KACPKMHKGGK_DLNDCKDPAOF_OFFSET))(this, INEPJABHIIG, DJLOKMMLFJC);
	}

	::System::Collections::Generic::List_1<::POOOEHMPNLD*>* OMILKIMGCEM(::System::Collections::Generic::List_1<::POOOEHMPNLD*>* DJLOKMMLFJC)
	{
		return ((::System::Collections::Generic::List_1<::POOOEHMPNLD*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::POOOEHMPNLD*>*))((::PBYTE)hIl2Cpp + KACPKMHKGGK_OMILKIMGCEM_OFFSET))(this, DJLOKMMLFJC);
	}

	::System::Void MKLPGGANGJD(::EKBJNGKHBKA* FIFBKCCDAJO)
	{
		return ((::System::Void(*)(::PVOID, ::EKBJNGKHBKA*))((::PBYTE)hIl2Cpp + KACPKMHKGGK_MKLPGGANGJD_OFFSET))(this, FIFBKCCDAJO);
	}

	::System::Int32 CHOHFMAHHFI(::POOOEHMPNLD* FFKBEGIHIGG, ::POOOEHMPNLD* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::POOOEHMPNLD*, ::POOOEHMPNLD*))((::PBYTE)hIl2Cpp + KACPKMHKGGK_CHOHFMAHHFI_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}

	::System::Void LPDECIMPMBB(::POOOEHMPNLD* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::POOOEHMPNLD*))((::PBYTE)hIl2Cpp + KACPKMHKGGK_LPDECIMPMBB_OFFSET))(this, DFMKILICPFB);
	}
};
