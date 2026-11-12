#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNFCEJEJINK.h"
class DLECIKAMKEG;
class OJCFBPDOHEF;
class PNKJDAJGIGJ_FHLEGNAGCKD;

#define PNKJDAJGIGJ_CTOR_OFFSET UNITYSDK_OFFSET(0xCC6FA70)
#define PNKJDAJGIGJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xCC702F0)
#define PNKJDAJGIGJ_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xCC6FA80)

inline static constexpr unsigned int PNKJDAJGIGJ_TypeDefinitionIndex = 80980;

	class PNKJDAJGIGJ : public ::KNFCEJEJINK
	{
	public:
		::DLECIKAMKEG* EEFMDEHLLFI; // 0x18
		::OJCFBPDOHEF* MKKLHFCCCNF; // 0x20
		::PNKJDAJGIGJ_FHLEGNAGCKD* NBHJNGJIIEA; // 0x28
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
