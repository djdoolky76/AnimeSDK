#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLKKLCIKDDM_EEJINOIJDBP_BFDJDJBHDMC_OFFSET UNITYSDK_OFFSET(0x142A9240)
#define FLKKLCIKDDM_EEJINOIJDBP__CTOR_OFFSET UNITYSDK_OFFSET(0x142A9230)

inline static constexpr unsigned int FLKKLCIKDDM_EEJINOIJDBP_TypeDefinitionIndex = 85027;

class FLKKLCIKDDM_EEJINOIJDBP : public ::System::Object
{
public:
	::System::Action_1<::System::Collections::Generic::List_1<::System::Int32>*>* EJGDHCIBCJH; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* ALIDECPAGPE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKKLCIKDDM_EEJINOIJDBP__CTOR_OFFSET))(this);
	}

	::System::Void BFDJDJBHDMC(::System::Collections::Generic::List_1<::Foundation::AssetPath>* DJLOKMMLFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + FLKKLCIKDDM_EEJINOIJDBP_BFDJDJBHDMC_OFFSET))(this, DJLOKMMLFJC);
	}
};
