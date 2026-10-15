#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LKFPICOFNDF;

#define MGOOJPHKFMF___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB92C610)
#define MGOOJPHKFMF___C__DISPLAYCLASS4_0__ADDORSTACKBUFF_B__0_OFFSET UNITYSDK_OFFSET(0xB92CF60)

	class MGOOJPHKFMF___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::LKFPICOFNDF* buffToAdd; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGOOJPHKFMF___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _AddOrStackBuff_b__0(::LKFPICOFNDF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LKFPICOFNDF*))((::PBYTE)hIl2Cpp + MGOOJPHKFMF___C__DISPLAYCLASS4_0__ADDORSTACKBUFF_B__0_OFFSET))(this, a1);
		}

	};
