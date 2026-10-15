#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OCFMCBFNLND.h"
class KAKADGHNMFK;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define BIDINAPIGNA_CTOR_OFFSET UNITYSDK_OFFSET(0xB49F8F0)
#define BIDINAPIGNA_LEEPJIGMNDK_OFFSET UNITYSDK_OFFSET(0xB49FA30)
#define BIDINAPIGNA_NODPBIKOJCF_OFFSET UNITYSDK_OFFSET(0xB49F970)

inline static constexpr unsigned int BIDINAPIGNA_TypeDefinitionIndex = 77623;

	class BIDINAPIGNA : public ::OCFMCBFNLND
	{
	public:
		::KAKADGHNMFK* MMILCIBMANG; // 0x30
		::System::Int32 BJHHAGGONAJ; // 0x38
		::System::Int32 NOMMFKJOBOD; // 0x3C
		::System::Int32 PGPLOHEEHLN; // 0x40
		::System::Int32 DDAHAJMOOMK; // 0x44
		::System::Int32 EGAKBLAGLPJ; // 0x48
		::System::Int32 NDBEJOPFPOC; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDINAPIGNA_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* NODPBIKOJCF(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + BIDINAPIGNA_NODPBIKOJCF_OFFSET))(this, a1);
		}

		::KAKADGHNMFK* LEEPJIGMNDK()
		{
			return ((::KAKADGHNMFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDINAPIGNA_LEEPJIGMNDK_OFFSET))(this);
		}

	};
