#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGFLBFIKKJG.h"
class HGFLBFIKKJG;

#define ELOMJOIBGMI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1551E030)
#define ELOMJOIBGMI_CTOR_OFFSET UNITYSDK_OFFSET(0x1551E090)

inline static constexpr unsigned int ELOMJOIBGMI_TypeDefinitionIndex = 73516;

	class ELOMJOIBGMI : public ::HGFLBFIKKJG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOMJOIBGMI_CTOR_OFFSET))(this);
		}

		static ::HGFLBFIKKJG* BPLPBPMEODA(::System::Single a1)
		{
			return ((::HGFLBFIKKJG*(*)(::System::Single))((::PBYTE)hIl2Cpp + ELOMJOIBGMI_BPLPBPMEODA_OFFSET))(a1);
		}

	};
