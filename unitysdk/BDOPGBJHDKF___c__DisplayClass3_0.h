#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKODJIFHIPI;
class KILLLKIAIDO;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BDOPGBJHDKF___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB7BC240)
#define BDOPGBJHDKF___C__DISPLAYCLASS3_0___REFRESHITEMS_B__0_OFFSET UNITYSDK_OFFSET(0xB7BC3E0)

inline static constexpr unsigned int BDOPGBJHDKF___c__DisplayClass3_0_TypeDefinitionIndex = 73793;

	class BDOPGBJHDKF___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::KILLLKIAIDO*>* weaknessList; // 0x10
		::System::Collections::Generic::List_1<::KILLLKIAIDO*>* highlightList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDOPGBJHDKF___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Void __RefreshItems_b__0(::CKODJIFHIPI* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::CKODJIFHIPI*, ::System::Int32))((::PBYTE)hIl2Cpp + BDOPGBJHDKF___C__DISPLAYCLASS3_0___REFRESHITEMS_B__0_OFFSET))(this, a1, a2);
		}

	};
