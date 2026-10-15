#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FCDLCHGAHFE___C__DISPLAYCLASS28_0_CTOR_OFFSET UNITYSDK_OFFSET(0x156AA380)
#define FCDLCHGAHFE___C__DISPLAYCLASS28_0__GETSORTEDLINEUPINDICES_B__0_OFFSET UNITYSDK_OFFSET(0x156AAF40)

inline static constexpr unsigned int FCDLCHGAHFE___c__DisplayClass28_0_TypeDefinitionIndex = 63921;

	class FCDLCHGAHFE___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* scores; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCDLCHGAHFE___C__DISPLAYCLASS28_0_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetSortedLineupIndices_b__0(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FCDLCHGAHFE___C__DISPLAYCLASS28_0__GETSORTEDLINEUPINDICES_B__0_OFFSET))(this, a1, a2);
		}

	};
