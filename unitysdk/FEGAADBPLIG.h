#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OLHCEJBBEJF.h"

class MFNPNNPLBAL;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FEGAADBPLIG_GPAGOABIFFP_OFFSET UNITYSDK_OFFSET(0xBB39AC0)
#define FEGAADBPLIG_HLJHOJKLDPN_OFFSET UNITYSDK_OFFSET(0xBB39B60)
#define FEGAADBPLIG__CTOR_OFFSET UNITYSDK_OFFSET(0xBB39AB0)

inline static constexpr unsigned int FEGAADBPLIG_TypeDefinitionIndex = 64390;

class FEGAADBPLIG : public ::OLHCEJBBEJF
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* ADCMNGDLGCK; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* GOPNNAHBHHB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEGAADBPLIG__CTOR_OFFSET))(this);
	}

	::MFNPNNPLBAL* GPAGOABIFFP()
	{
		return ((::MFNPNNPLBAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEGAADBPLIG_GPAGOABIFFP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Object*>* HLJHOJKLDPN()
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEGAADBPLIG_HLJHOJKLDPN_OFFSET))(this);
	}
};
