#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGGOOHNIBNN.h"
class DADCHPKLKMJ;
class MGHPDOPGJCC;

#define ICKMCFFCOJL_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x15E447A0)
#define ICKMCFFCOJL_CLEAR_OFFSET UNITYSDK_OFFSET(0x15E44910)
#define ICKMCFFCOJL_CTOR_OFFSET UNITYSDK_OFFSET(0x15E449B0)
#define ICKMCFFCOJL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15E44890)
#define ICKMCFFCOJL_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x15E444C0)

inline static constexpr unsigned int ICKMCFFCOJL_TypeDefinitionIndex = 76938;

	class ICKMCFFCOJL : public ::GGGOOHNIBNN
	{
	public:
		::DADCHPKLKMJ* LMEPJILLLHN; // 0x18
		::MGHPDOPGJCC* ALGJGINMBCG; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKMCFFCOJL_CTOR_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKMCFFCOJL_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKMCFFCOJL_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ICKMCFFCOJL_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKMCFFCOJL_CLEAR_OFFSET))(this);
		}

	};
