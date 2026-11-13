#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class KAJJEJMHCGD;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FDHFGKLGEBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA9BA10)
#define FDHFGKLGEBC_KKLHOBPLIOP_OFFSET UNITYSDK_OFFSET(0x1BA9B9B0)
#define FDHFGKLGEBC_OGHACFJMBMC_OFFSET UNITYSDK_OFFSET(0x1BA784B0)
#define FDHFGKLGEBC_PNNBJAGIHKD_OFFSET UNITYSDK_OFFSET(0x1BA77970)

inline static constexpr unsigned int FDHFGKLGEBC_TypeDefinitionIndex = 38171;

	class FDHFGKLGEBC : public ::System::Object
	{
	public:
		::KAJJEJMHCGD* FGBOCEOCCJN; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>* DOAHCFCFKDD; // 0x18
		::System::Int32 GCHLCKLCGNB; // 0x20
		::System::Int32 FLDIHFHMLAM; // 0x24
		::System::Boolean MLLBLJEALGA; // 0x28
		::System::Boolean HGMGLFNFGGN; // 0x29
		::System::Boolean OHAHHCFNLFF; // 0x2A
		::System::Byte _padding0[0x1];
		::RPG::GameCore::CakeRaceMoveState ALHAFOGCGJK; // 0x2C
		::System::UInt32 NMALDHAIMCF; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHFGKLGEBC_CTOR_OFFSET))(this);
		}

		::System::Int32 OGHACFJMBMC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHFGKLGEBC_OGHACFJMBMC_OFFSET))(this);
		}

		::System::Void PNNBJAGIHKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHFGKLGEBC_PNNBJAGIHKD_OFFSET))(this);
		}

		::System::Boolean KKLHOBPLIOP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHFGKLGEBC_KKLHOBPLIOP_OFFSET))(this);
		}

	};
