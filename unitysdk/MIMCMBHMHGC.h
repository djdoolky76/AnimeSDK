#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/PreValidationFailureReason.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class LPHINGPIEAJ;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MIMCMBHMHGC_BNLGKNGELBE_OFFSET UNITYSDK_OFFSET(0x1A3996D0)
#define MIMCMBHMHGC_CKPJMJGIALP_OFFSET UNITYSDK_OFFSET(0x1A398D00)
#define MIMCMBHMHGC_CTOR_OFFSET UNITYSDK_OFFSET(0x1A398CF0)
#define MIMCMBHMHGC_ECLNCAAHNKK_OFFSET UNITYSDK_OFFSET(0x1A399000)
#define MIMCMBHMHGC_OBOHLCENGHN_OFFSET UNITYSDK_OFFSET(0x1A398E30)

inline static constexpr unsigned int MIMCMBHMHGC_TypeDefinitionIndex = 79908;

	class MIMCMBHMHGC : public ::System::Object
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x10
		::System::Void _ctor(::HLJNBBHKKMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + MIMCMBHMHGC_CTOR_OFFSET))(this, a1);
		}

		::System::Void CKPJMJGIALP(::LPHINGPIEAJ* a1, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MIMCMBHMHGC_CKPJMJGIALP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OBOHLCENGHN(::LPHINGPIEAJ* a1, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MIMCMBHMHGC_OBOHLCENGHN_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean ECLNCAAHNKK(::LPHINGPIEAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + MIMCMBHMHGC_ECLNCAAHNKK_OFFSET))(this, a1);
		}

		::System::Void BNLGKNGELBE(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MIMCMBHMHGC_BNLGKNGELBE_OFFSET))(this, a1);
		}

	};
