#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNFCEJEJINK.h"
class DLECIKAMKEG;
class OJCFBPDOHEF;
class PNKJDAJGIGJ_FHLEGNAGCKD;

#define PNKJDAJGIGJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC33CC00)
#define PNKJDAJGIGJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC33D480)
#define PNKJDAJGIGJ_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xC33CC10)

	class PNKJDAJGIGJ : public ::KNFCEJEJINK
	{
	public:
		::OJCFBPDOHEF* MKKLHFCCCNF; // 0x18
		::PNKJDAJGIGJ_FHLEGNAGCKD* NBHJNGJIIEA; // 0x20
		::DLECIKAMKEG* EEFMDEHLLFI; // 0x28
		::System::Void _ctor(::OJCFBPDOHEF* a1, ::DLECIKAMKEG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OJCFBPDOHEF*, ::DLECIKAMKEG*))((::PBYTE)hIl2Cpp + PNKJDAJGIGJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKJDAJGIGJ_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PNKJDAJGIGJ_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
