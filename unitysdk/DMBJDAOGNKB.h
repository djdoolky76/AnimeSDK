#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DHMDDHNNABG.h"

class AACCADICGGD;
class EIMGMBNCJON;
class ODPINEGGNDC;
class PDNKPAJMKJE;
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define DMBJDAOGNKB_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x1F850E20)
#define DMBJDAOGNKB_EIDBOJPDKPP_OFFSET UNITYSDK_OFFSET(0x1F850E90)
#define DMBJDAOGNKB_NJGJGEICFBL_OFFSET UNITYSDK_OFFSET(0x1F850F00)
#define DMBJDAOGNKB__CTOR_OFFSET UNITYSDK_OFFSET(0x1F850A30)

inline static constexpr unsigned int DMBJDAOGNKB_TypeDefinitionIndex = 18129;

class DMBJDAOGNKB : public ::DHMDDHNNABG
{
public:
	::AACCADICGGD* ODPEJNDHNNA; // 0x28
	::System::Type* EBDJJFIBENF; // 0x30
	::System::Collections::Generic::IList_1<::PDNKPAJMKJE*>* GECCHCDNAHI; // 0x38
	::EIMGMBNCJON* GCFBBCFDGKJ; // 0x40

	::System::Void _ctor(::AACCADICGGD* ODPEJNDHNNA, ::ODPINEGGNDC* FDDEMMPCGAC, ::EIMGMBNCJON* JNLBPMKIFNK, ::System::Int32 ABHBKFJKINO, ::System::Type* EBDJJFIBENF)
	{
		return ((::System::Void(*)(::PVOID, ::AACCADICGGD*, ::ODPINEGGNDC*, ::EIMGMBNCJON*, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + DMBJDAOGNKB__CTOR_OFFSET))(this, ODPEJNDHNNA, FDDEMMPCGAC, JNLBPMKIFNK, ABHBKFJKINO, EBDJJFIBENF);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBJDAOGNKB_DECMGICKDLH_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::DHMDDHNNABG*>* EIDBOJPDKPP(::System::Int32 HDKNIHBGIBC)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::DHMDDHNNABG*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DMBJDAOGNKB_EIDBOJPDKPP_OFFSET))(this, HDKNIHBGIBC);
	}

	::System::Collections::Generic::IList_1<::PDNKPAJMKJE*>* NJGJGEICFBL()
	{
		return ((::System::Collections::Generic::IList_1<::PDNKPAJMKJE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBJDAOGNKB_NJGJGEICFBL_OFFSET))(this);
	}
};
