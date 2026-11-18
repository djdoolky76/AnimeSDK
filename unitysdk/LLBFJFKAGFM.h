#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KCOAGGHCODK;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LLBFJFKAGFM_NDMMCJCBGEB_OFFSET UNITYSDK_OFFSET(0x1BF56820)
#define LLBFJFKAGFM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF567A0)

inline static constexpr unsigned int LLBFJFKAGFM_TypeDefinitionIndex = 11898;

class LLBFJFKAGFM : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::KCOAGGHCODK*>* _GPGKPLNOKKA_k__BackingField; // 0x10
	::System::Byte LAJJJMAHNLE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBFJFKAGFM__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::KCOAGGHCODK*>* NDMMCJCBGEB()
	{
		return ((::System::Collections::Generic::List_1<::KCOAGGHCODK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBFJFKAGFM_NDMMCJCBGEB_OFFSET))(this);
	}
};
