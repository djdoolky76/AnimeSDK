#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBKNHOHKDJI;
namespace R3 { template <typename T> class Observable_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MDKJNMJFNAD_BNMDGBCKFCG_AGOJJMIIHFP_OFFSET UNITYSDK_OFFSET(0x1EC59660)
#define MDKJNMJFNAD_BNMDGBCKFCG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC595A0)
#define MDKJNMJFNAD_BNMDGBCKFCG_IEGNMOODDAK_OFFSET UNITYSDK_OFFSET(0x1EC59370)
#define MDKJNMJFNAD_BNMDGBCKFCG_IOAEBFCPHCK_OFFSET UNITYSDK_OFFSET(0x1EC59C20)
#define MDKJNMJFNAD_BNMDGBCKFCG_PDIEGHEODHM_OFFSET UNITYSDK_OFFSET(0x1EC59B00)
#define MDKJNMJFNAD_BNMDGBCKFCG_PDKLDMNAJBO_OFFSET UNITYSDK_OFFSET(0x1EC59320)

inline static constexpr unsigned int MDKJNMJFNAD_BNMDGBCKFCG_TypeDefinitionIndex = 44244;

	class MDKJNMJFNAD_BNMDGBCKFCG : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::NBKNHOHKDJI*>* DCBNMAPGKIC; // 0x10
		::System::Int32 JLMMJPKMKKF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKJNMJFNAD_BNMDGBCKFCG_CTOR_OFFSET))(this);
		}

		::NBKNHOHKDJI* AGOJJMIIHFP(::R3::Observable_1<::System::Boolean>* a1)
		{
			return ((::NBKNHOHKDJI*(*)(::PVOID, ::R3::Observable_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MDKJNMJFNAD_BNMDGBCKFCG_AGOJJMIIHFP_OFFSET))(this, a1);
		}

		::System::Void PDKLDMNAJBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKJNMJFNAD_BNMDGBCKFCG_PDKLDMNAJBO_OFFSET))(this);
		}

		::System::Void IEGNMOODDAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKJNMJFNAD_BNMDGBCKFCG_IEGNMOODDAK_OFFSET))(this);
		}

		::System::Void IOAEBFCPHCK(::NBKNHOHKDJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBKNHOHKDJI*))((::PBYTE)hIl2Cpp + MDKJNMJFNAD_BNMDGBCKFCG_IOAEBFCPHCK_OFFSET))(this, a1);
		}

		::System::Void PDIEGHEODHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKJNMJFNAD_BNMDGBCKFCG_PDIEGHEODHM_OFFSET))(this);
		}

	};
