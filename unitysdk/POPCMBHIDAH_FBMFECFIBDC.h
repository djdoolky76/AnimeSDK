#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KBDGKAJPALP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define POPCMBHIDAH_FBMFECFIBDC_HGFFOLLOBMB_OFFSET UNITYSDK_OFFSET(0x1E7358C0)
#define POPCMBHIDAH_FBMFECFIBDC__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7358B0)

inline static constexpr unsigned int POPCMBHIDAH_FBMFECFIBDC_TypeDefinitionIndex = 93886;

class POPCMBHIDAH_FBMFECFIBDC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* MHMCLPJELKC; // 0x10
	::KBDGKAJPALP* GEEHGDABNJF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPCMBHIDAH_FBMFECFIBDC__CTOR_OFFSET))(this);
	}

	::System::Void HGFFOLLOBMB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPCMBHIDAH_FBMFECFIBDC_HGFFOLLOBMB_OFFSET))(this);
	}
};
