#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMIFBFGDGJK;
class PBGNKMMDBGD;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IEPJNFAPPAE_ADFLIAIGECP_OFFSET UNITYSDK_OFFSET(0x1C693340)
#define IEPJNFAPPAE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C692F90)
#define IEPJNFAPPAE_DCIHBCGGHAN_OFFSET UNITYSDK_OFFSET(0x1C6935E0)
#define IEPJNFAPPAE_DLLEMNMKCAN_OFFSET UNITYSDK_OFFSET(0x1C693100)
#define IEPJNFAPPAE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C692FE0)
#define IEPJNFAPPAE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C692FA0)

inline static constexpr unsigned int IEPJNFAPPAE_TypeDefinitionIndex = 37440;

	class IEPJNFAPPAE : public ::System::Object
	{
	public:
		::PBGNKMMDBGD* PDENFEFCAGN; // 0x10
		::GMIFBFGDGJK* EEFMDEHLLFI; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* DDADENOIDJE; // 0x20
		::System::Single MDPJDNKNEEK; // 0x28
		::System::Single IAJGMHACLHP; // 0x2C
		::System::Void _ctor(::GMIFBFGDGJK* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GMIFBFGDGJK*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + IEPJNFAPPAE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEPJNFAPPAE_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEPJNFAPPAE_EXECUTE_OFFSET))(this);
		}

		::System::Void DLLEMNMKCAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEPJNFAPPAE_DLLEMNMKCAN_OFFSET))(this);
		}

		::System::Void DCIHBCGGHAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEPJNFAPPAE_DCIHBCGGHAN_OFFSET))(this);
		}

		::System::Void ADFLIAIGECP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEPJNFAPPAE_ADFLIAIGECP_OFFSET))(this);
		}

	};
