#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KNPKEPDMNFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D637010)
#define KNPKEPDMNFN_FBGJLOIENBI_OFFSET UNITYSDK_OFFSET(0x1D636FC0)

inline static constexpr unsigned int KNPKEPDMNFN_TypeDefinitionIndex = 44785;

	class KNPKEPDMNFN : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* AJPFKOLEMOL; // 0x10
		::System::Single EIBIDIGKJIG; // 0x18
		::System::Int32 AIAMODBPFJI; // 0x1C
		::System::Single KIPAGNCANAJ; // 0x20
		::System::UInt32 PHFMCACHFIJ; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNPKEPDMNFN_CTOR_OFFSET))(this);
		}

		::System::Boolean FBGJLOIENBI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KNPKEPDMNFN_FBGJLOIENBI_OFFSET))(this);
		}

	};
