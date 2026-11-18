#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BCPLJJIAKMO;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JIPKCLFJHKF_ILBLILACJHB__CTOR_OFFSET UNITYSDK_OFFSET(0x13AD2610)

inline static constexpr unsigned int JIPKCLFJHKF_ILBLILACJHB_TypeDefinitionIndex = 65946;

class JIPKCLFJHKF_ILBLILACJHB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::BCPLJJIAKMO*>* BCDOOMPBOAO; // 0x10
	::System::String* FGIEMAFJKKJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIPKCLFJHKF_ILBLILACJHB__CTOR_OFFSET))(this);
	}
};
