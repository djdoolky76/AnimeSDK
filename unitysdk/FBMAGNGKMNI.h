#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OCFMCBFNLND.h"
class KAKADGHNMFK;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define FBMAGNGKMNI_CTOR_OFFSET UNITYSDK_OFFSET(0x156A52D0)
#define FBMAGNGKMNI_LEEPJIGMNDK_OFFSET UNITYSDK_OFFSET(0x156A5410)
#define FBMAGNGKMNI_NODPBIKOJCF_OFFSET UNITYSDK_OFFSET(0x156A5350)

inline static constexpr unsigned int FBMAGNGKMNI_TypeDefinitionIndex = 77633;

	class FBMAGNGKMNI : public ::OCFMCBFNLND
	{
	public:
		::KAKADGHNMFK* PHPDKPJCDOK; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMAGNGKMNI_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* NODPBIKOJCF(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + FBMAGNGKMNI_NODPBIKOJCF_OFFSET))(this, a1);
		}

		::KAKADGHNMFK* LEEPJIGMNDK()
		{
			return ((::KAKADGHNMFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMAGNGKMNI_LEEPJIGMNDK_OFFSET))(this);
		}

	};
