#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LBOIMOHJHAG_ANPBCLAFCJB_OFFSET UNITYSDK_OFFSET(0x16839820)
#define LBOIMOHJHAG_JNBGBKMJGAG_OFFSET UNITYSDK_OFFSET(0x16839940)
#define LBOIMOHJHAG_KJGFHDAMHGO_OFFSET UNITYSDK_OFFSET(0x168398C0)
#define LBOIMOHJHAG__CTOR_OFFSET UNITYSDK_OFFSET(0x168397A0)

inline static constexpr unsigned int LBOIMOHJHAG_TypeDefinitionIndex = 78777;

class LBOIMOHJHAG : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* EFFAONJBCOG; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* IPPLJBJAKBK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBOIMOHJHAG__CTOR_OFFSET))(this);
	}

	::System::Void ANPBCLAFCJB(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LBOIMOHJHAG_ANPBCLAFCJB_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Object* KJGFHDAMHGO()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBOIMOHJHAG_KJGFHDAMHGO_OFFSET))(this);
	}

	::System::Void JNBGBKMJGAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBOIMOHJHAG_JNBGBKMJGAG_OFFSET))(this);
	}
};
