#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFALGHKLPKI.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int GGIIPNOCCCH_1_TypeDefinitionIndex = 80977;

template <typename T>
class GGIIPNOCCCH_1 : public ::BFALGHKLPKI
{
public:
	static T* StaticGet_PMKINFHDLFD()
	{
		return (T*)Il2CppClass::FromTypeDefinitionIndex(GGIIPNOCCCH_1_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Collections::Generic::List_1<::BFALGHKLPKI*>* JPGHICAHPPK; // 0x0
};
