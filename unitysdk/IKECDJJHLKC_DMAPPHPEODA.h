#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityUnsharpMaskEffect; }
namespace MoleMole::Config { class ConfigEntityUnsharpMaskEffects; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IKECDJJHLKC_DMAPPHPEODA_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x15ECD5A0)
#define IKECDJJHLKC_DMAPPHPEODA__CTOR_OFFSET UNITYSDK_OFFSET(0x15ECD590)

inline static constexpr unsigned int IKECDJJHLKC_DMAPPHPEODA_TypeDefinitionIndex = 67144;

class IKECDJJHLKC_DMAPPHPEODA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityUnsharpMaskEffect*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKECDJJHLKC_DMAPPHPEODA__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityUnsharpMaskEffect*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityUnsharpMaskEffects*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityUnsharpMaskEffect*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityUnsharpMaskEffects*>*))((::PBYTE)hIl2Cpp + IKECDJJHLKC_DMAPPHPEODA_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
