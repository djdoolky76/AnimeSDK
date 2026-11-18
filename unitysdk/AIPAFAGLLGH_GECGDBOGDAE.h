#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/Tuple_2.h"

class AIPAFAGLLGH;
class DNHKDAGNCJN;
namespace System { class Action; }

#define AIPAFAGLLGH_GECGDBOGDAE_BGKLDDJEEME_OFFSET UNITYSDK_OFFSET(0x12CFA710)
#define AIPAFAGLLGH_GECGDBOGDAE_BKELFNIGLFF_OFFSET UNITYSDK_OFFSET(0x12CFA7D0)
#define AIPAFAGLLGH_GECGDBOGDAE_CGCDIDHENLD_OFFSET UNITYSDK_OFFSET(0x12CFA770)
#define AIPAFAGLLGH_GECGDBOGDAE_GIKKGCDIGKE_OFFSET UNITYSDK_OFFSET(0x12CFA6B0)
#define AIPAFAGLLGH_GECGDBOGDAE__CTOR_OFFSET UNITYSDK_OFFSET(0x12CFA6A0)

inline static constexpr unsigned int AIPAFAGLLGH_GECGDBOGDAE_TypeDefinitionIndex = 70108;

class AIPAFAGLLGH_GECGDBOGDAE : public ::System::Object
{
public:
	::DNHKDAGNCJN* DEKJDEPKKLH; // 0x10
	::AIPAFAGLLGH* KLHPEBKNIFB; // 0x18
	::System::Action* BPHHOPMMNKB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPAFAGLLGH_GECGDBOGDAE__CTOR_OFFSET))(this);
	}

	::Foundation::Tuple_2<::System::Int32, ::System::Single> GIKKGCDIGKE()
	{
		return ((::Foundation::Tuple_2<::System::Int32, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPAFAGLLGH_GECGDBOGDAE_GIKKGCDIGKE_OFFSET))(this);
	}

	::Foundation::Tuple_2<::System::Int32, ::System::Single> BGKLDDJEEME()
	{
		return ((::Foundation::Tuple_2<::System::Int32, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPAFAGLLGH_GECGDBOGDAE_BGKLDDJEEME_OFFSET))(this);
	}

	::Foundation::Tuple_2<::System::Int32, ::System::Single> CGCDIDHENLD()
	{
		return ((::Foundation::Tuple_2<::System::Int32, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPAFAGLLGH_GECGDBOGDAE_CGCDIDHENLD_OFFSET))(this);
	}

	::System::Int32 BKELFNIGLFF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPAFAGLLGH_GECGDBOGDAE_BKELFNIGLFF_OFFSET))(this);
	}
};
