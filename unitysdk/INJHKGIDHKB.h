#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define INJHKGIDHKB__CTOR_OFFSET UNITYSDK_OFFSET(0x194382F0)

inline static constexpr unsigned int INJHKGIDHKB_TypeDefinitionIndex = 65222;

class INJHKGIDHKB
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* CHFJGJPDPPJ; // 0x28
	::System::String* FNDDOGHDCDC; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* KGNBMMHJBDG; // 0x38
	::System::Collections::Generic::List_1<::System::String*>* DCDDONIOLEL; // 0x40
	::System::Int32 MKIBAHLCKJN; // 0x48
	::System::Int32 AMPOCPBLGMM; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INJHKGIDHKB__CTOR_OFFSET))(this);
	}
};
