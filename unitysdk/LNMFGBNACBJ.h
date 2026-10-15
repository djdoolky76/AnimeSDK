#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNJLACKEDH.h"
class BKHHFIJCHEP;

#define LNMFGBNACBJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB7E8AE0)
#define LNMFGBNACBJ_HCOFMFKFMDK_OFFSET UNITYSDK_OFFSET(0xB7E8BB0)
#define LNMFGBNACBJ_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB7E8AF0)
#define LNMFGBNACBJ__START_B__3_0_OFFSET UNITYSDK_OFFSET(0xB7E8BF0)

inline static constexpr unsigned int LNMFGBNACBJ_TypeDefinitionIndex = 60378;

	class LNMFGBNACBJ : public ::EFNJLACKEDH
	{
	public:
		::System::Single EANMMFONHNC; // 0x18
		::System::Boolean PIPLLENMLIM; // 0x1C
		::System::Void _ctor(::BKHHFIJCHEP* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*, ::System::Single))((::PBYTE)hIl2Cpp + LNMFGBNACBJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNMFGBNACBJ_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Boolean HCOFMFKFMDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LNMFGBNACBJ_HCOFMFKFMDK_OFFSET))(this);
		}

		::System::Void _Start_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNMFGBNACBJ__START_B__3_0_OFFSET))(this);
		}

	};
