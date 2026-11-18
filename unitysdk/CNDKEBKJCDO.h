#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AAPCFDDBMJP;
class ALCEJNMFHOK;
class EIMGMBNCJON;
class ODPINEGGNDC;
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CNDKEBKJCDO_ENIPJGMNNFA_OFFSET UNITYSDK_OFFSET(0x1F8BE9D0)
#define CNDKEBKJCDO_GPPFNEHELDG_OFFSET UNITYSDK_OFFSET(0x1F8BDFF0)
#define CNDKEBKJCDO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F8BDF20)
#define CNDKEBKJCDO__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8BDE50)

inline static constexpr unsigned int CNDKEBKJCDO_TypeDefinitionIndex = 18186;

class CNDKEBKJCDO : public ::System::Object
{
public:
	::System::Collections::Generic::IDictionary_2<::EIMGMBNCJON*, ::System::Collections::Generic::IList_1<::AAPCFDDBMJP*>*>* EENDNJIGFMN; // 0x10
	::System::Collections::Generic::IDictionary_2<::EIMGMBNCJON*, ::System::Collections::Generic::IList_1<::AAPCFDDBMJP*>*>* KOEHAECDKIF; // 0x18
	::System::Collections::Generic::IList_1<::AAPCFDDBMJP*>* _JHDCMHKPICM_k__BackingField; // 0x20

	::System::Void _ctor(::ODPINEGGNDC* FDDEMMPCGAC, ::Il2CppArray<::ALCEJNMFHOK*>* FIIPNEEGNIA)
	{
		return ((::System::Void(*)(::PVOID, ::ODPINEGGNDC*, ::Il2CppArray<::ALCEJNMFHOK*>*))((::PBYTE)hIl2Cpp + CNDKEBKJCDO__CTOR_OFFSET))(this, FDDEMMPCGAC, FIIPNEEGNIA);
	}

	::System::Void _ctor_1(::EIMGMBNCJON* NAPFALLANDL, ::Il2CppArray<::ALCEJNMFHOK*>* FIIPNEEGNIA)
	{
		return ((::System::Void(*)(::PVOID, ::EIMGMBNCJON*, ::Il2CppArray<::ALCEJNMFHOK*>*))((::PBYTE)hIl2Cpp + CNDKEBKJCDO__CTOR_1_OFFSET))(this, NAPFALLANDL, FIIPNEEGNIA);
	}

	::System::Void GPPFNEHELDG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNDKEBKJCDO_GPPFNEHELDG_OFFSET))(this);
	}

	::System::Collections::Generic::IList_1<::AAPCFDDBMJP*>* ENIPJGMNNFA()
	{
		return ((::System::Collections::Generic::IList_1<::AAPCFDDBMJP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNDKEBKJCDO_ENIPJGMNNFA_OFFSET))(this);
	}
};
