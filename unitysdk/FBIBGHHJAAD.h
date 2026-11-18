#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDFPDPBIPCH.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FBIBGHHJAAD_JAPFFPNAJHB_OFFSET UNITYSDK_OFFSET(0x1EFBC720)
#define FBIBGHHJAAD_KMGFINCKGOK_OFFSET UNITYSDK_OFFSET(0x1EFBCB10)
#define FBIBGHHJAAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFBCB00)

inline static constexpr unsigned int FBIBGHHJAAD_TypeDefinitionIndex = 96657;

class FBIBGHHJAAD : public ::BDFPDPBIPCH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBIBGHHJAAD__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Type*>* JAPFFPNAJHB()
	{
		return ((::System::Collections::Generic::List_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBIBGHHJAAD_JAPFFPNAJHB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Type*>* KMGFINCKGOK()
	{
		return ((::System::Collections::Generic::List_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBIBGHHJAAD_KMGFINCKGOK_OFFSET))(this);
	}
};
