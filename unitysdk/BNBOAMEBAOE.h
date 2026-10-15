#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GELIALJDFBL;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define BNBOAMEBAOE_CTOR_OFFSET UNITYSDK_OFFSET(0xBDC38B0)
#define BNBOAMEBAOE_FADEIFNLDDM_OFFSET UNITYSDK_OFFSET(0xBDC38A0)

inline static constexpr unsigned int BNBOAMEBAOE_TypeDefinitionIndex = 54772;

	class BNBOAMEBAOE : public ::GELIALJDFBL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNBOAMEBAOE_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::GELIALJDFBL*>* FADEIFNLDDM()
		{
			return ((::System::Collections::Generic::IList_1<::GELIALJDFBL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNBOAMEBAOE_FADEIFNLDDM_OFFSET))(this);
		}

	};
