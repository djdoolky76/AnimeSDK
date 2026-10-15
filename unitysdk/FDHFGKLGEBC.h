#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class KAJJEJMHCGD;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FDHFGKLGEBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5E7360)
#define FDHFGKLGEBC_KKLHOBPLIOP_OFFSET UNITYSDK_OFFSET(0x1C5E7300)
#define FDHFGKLGEBC_OGHACFJMBMC_OFFSET UNITYSDK_OFFSET(0x1C5C3B90)
#define FDHFGKLGEBC_PNNBJAGIHKD_OFFSET UNITYSDK_OFFSET(0x1C5C3050)

inline static constexpr unsigned int FDHFGKLGEBC_TypeDefinitionIndex = 37243;

	class FDHFGKLGEBC : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>* DOAHCFCFKDD; // 0x10
		::KAJJEJMHCGD* FGBOCEOCCJN; // 0x18
		::System::Int32 FLDIHFHMLAM; // 0x20
		::System::Boolean OHAHHCFNLFF; // 0x24
		::System::Boolean MLLBLJEALGA; // 0x25
		::System::Boolean HGMGLFNFGGN; // 0x26
		::System::Byte _padding0[0x1];
		::System::Int32 GCHLCKLCGNB; // 0x28
		::System::UInt32 NMALDHAIMCF; // 0x2C
		::RPG::GameCore::CakeRaceMoveState ALHAFOGCGJK; // 0x30
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
