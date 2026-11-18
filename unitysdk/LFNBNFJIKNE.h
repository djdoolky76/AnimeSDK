#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PCHPABCILNN.h"
#include "unitysdk/EEMLFAEOJLK.h"

class FICPDKBMDCK;
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LFNBNFJIKNE_GIMADNHKMHF_OFFSET UNITYSDK_OFFSET(0x16367430)
#define LFNBNFJIKNE_LLIOGJLKLMO_OFFSET UNITYSDK_OFFSET(0x16367360)
#define LFNBNFJIKNE__CTOR_OFFSET UNITYSDK_OFFSET(0x163675D0)

inline static constexpr unsigned int LFNBNFJIKNE_TypeDefinitionIndex = 45677;

class LFNBNFJIKNE : public ::PCHPABCILNN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFNBNFJIKNE__CTOR_OFFSET))(this);
	}

	::System::Void LLIOGJLKLMO(::System::Collections::Generic::List_1<::EEMLFAEOJLK>* HKHFKFGFIJK, ::FICPDKBMDCK* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::EEMLFAEOJLK>*, ::FICPDKBMDCK*))((::PBYTE)hIl2Cpp + LFNBNFJIKNE_LLIOGJLKLMO_OFFSET))(this, HKHFKFGFIJK, KOIBHLHLMFC);
	}

	::MoleMole::UIControllerContextBase* GIMADNHKMHF(::System::String* AOPKIEIEPJC, ::System::Collections::Generic::List_1<::EEMLFAEOJLK>* HKHFKFGFIJK)
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::EEMLFAEOJLK>*))((::PBYTE)hIl2Cpp + LFNBNFJIKNE_GIMADNHKMHF_OFFSET))(this, AOPKIEIEPJC, HKHFKFGFIJK);
	}
};
