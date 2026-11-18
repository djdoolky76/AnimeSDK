#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DHMDDHNNABG.h"

class JFOANKAAJOH;
class JOPPFHLBJNI;
class ODPINEGGNDC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define FBCLFNNHHIF_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x1FAC12B0)
#define FBCLFNNHHIF_EIDBOJPDKPP_OFFSET UNITYSDK_OFFSET(0x1FAC1320)
#define FBCLFNNHHIF_GPPFNEHELDG_OFFSET UNITYSDK_OFFSET(0x1FAC1390)
#define FBCLFNNHHIF__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAC1130)

inline static constexpr unsigned int FBCLFNNHHIF_TypeDefinitionIndex = 18103;

class FBCLFNNHHIF : public ::DHMDDHNNABG
{
public:
	::System::Collections::Generic::IList_1<::JFOANKAAJOH*>* GHNKOPPHCBF; // 0x28
	::JOPPFHLBJNI* ODPEJNDHNNA; // 0x30

	::System::Void _ctor(::JOPPFHLBJNI* ODPEJNDHNNA, ::ODPINEGGNDC* FDDEMMPCGAC, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::JOPPFHLBJNI*, ::ODPINEGGNDC*, ::System::Int32))((::PBYTE)hIl2Cpp + FBCLFNNHHIF__CTOR_OFFSET))(this, ODPEJNDHNNA, FDDEMMPCGAC, ABHBKFJKINO);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCLFNNHHIF_DECMGICKDLH_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::DHMDDHNNABG*>* EIDBOJPDKPP(::System::Int32 HDKNIHBGIBC)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::DHMDDHNNABG*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FBCLFNNHHIF_EIDBOJPDKPP_OFFSET))(this, HDKNIHBGIBC);
	}

	::System::Void GPPFNEHELDG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCLFNNHHIF_GPPFNEHELDG_OFFSET))(this);
	}
};
