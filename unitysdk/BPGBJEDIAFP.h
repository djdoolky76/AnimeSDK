#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AHLEKJMMLBA.h"
#include "unitysdk/System/Object.h"
class CAINPBIGHGM;
class ODMIILKBDBA;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BPGBJEDIAFP_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xC1A4D10)
#define BPGBJEDIAFP_CTOR_OFFSET UNITYSDK_OFFSET(0xC1A4E90)
#define BPGBJEDIAFP_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0xC1A4CF0)
#define BPGBJEDIAFP_SET_FACTORY_OFFSET UNITYSDK_OFFSET(0xC1A4D00)

inline static constexpr unsigned int BPGBJEDIAFP_TypeDefinitionIndex = 62706;

	class BPGBJEDIAFP : public ::System::Object
	{
	public:
		::ODMIILKBDBA* _Factory_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::AHLEKJMMLBA, ::CAINPBIGHGM*>* IALLAPIBJJL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGBJEDIAFP_CTOR_OFFSET))(this);
		}

		::ODMIILKBDBA* get_Factory()
		{
			return ((::ODMIILKBDBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGBJEDIAFP_GET_FACTORY_OFFSET))(this);
		}

		::System::Void set_Factory(::ODMIILKBDBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODMIILKBDBA*))((::PBYTE)hIl2Cpp + BPGBJEDIAFP_SET_FACTORY_OFFSET))(this, a1);
		}

		::CAINPBIGHGM* ACMKLFOMPFC(::AHLEKJMMLBA a1)
		{
			return ((::CAINPBIGHGM*(*)(::PVOID, ::AHLEKJMMLBA))((::PBYTE)hIl2Cpp + BPGBJEDIAFP_ACMKLFOMPFC_OFFSET))(this, a1);
		}

	};
