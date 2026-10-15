#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLOFHFCGJHA.h"
class FFAHCMHJDAA;
class ICEBONFCKMP;
class IPACFBLJMKF;
class NKOOKDOKLMK;

#define IKHONPONHCH_CTOR_OFFSET UNITYSDK_OFFSET(0x164803E0)
#define IKHONPONHCH_EALKMJDFEEE_OFFSET UNITYSDK_OFFSET(0x16480A00)
#define IKHONPONHCH_EKFCBGOJOPK_OFFSET UNITYSDK_OFFSET(0x164805E0)
#define IKHONPONHCH_GBAKHEBBHNE_OFFSET UNITYSDK_OFFSET(0x16480A50)
#define IKHONPONHCH_OCEKIHINBCO_OFFSET UNITYSDK_OFFSET(0x16480590)

inline static constexpr unsigned int IKHONPONHCH_TypeDefinitionIndex = 72417;

	class IKHONPONHCH : public ::BLOFHFCGJHA
	{
	public:
		::IPACFBLJMKF* KBCEJMFKDOE; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHONPONHCH_CTOR_OFFSET))(this);
		}

		::System::Void OCEKIHINBCO(::NKOOKDOKLMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKOOKDOKLMK*))((::PBYTE)hIl2Cpp + IKHONPONHCH_OCEKIHINBCO_OFFSET))(this, a1);
		}

		::System::Void EALKMJDFEEE(::FFAHCMHJDAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FFAHCMHJDAA*))((::PBYTE)hIl2Cpp + IKHONPONHCH_EALKMJDFEEE_OFFSET))(this, a1);
		}

		::System::Void GBAKHEBBHNE(::ICEBONFCKMP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICEBONFCKMP*))((::PBYTE)hIl2Cpp + IKHONPONHCH_GBAKHEBBHNE_OFFSET))(this, a1);
		}

		::System::Void EKFCBGOJOPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHONPONHCH_EKFCBGOJOPK_OFFSET))(this);
		}

	};
