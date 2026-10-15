#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::NavMap::FiveDim { class CartographyFiveDim; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BKEANDAFOHE_CPLDCCJBDOH_OFFSET UNITYSDK_OFFSET(0xB7A9BC0)
#define BKEANDAFOHE_CTOR_OFFSET UNITYSDK_OFFSET(0xB7A9450)
#define BKEANDAFOHE_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB7A9C10)
#define BKEANDAFOHE_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB7A9A20)
#define BKEANDAFOHE_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB7A9C20)

inline static constexpr unsigned int BKEANDAFOHE_TypeDefinitionIndex = 74657;

	class BKEANDAFOHE : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* CJFMILLAOBL; // 0x10
		::RPG::Client::NavMap::FiveDim::CartographyFiveDim* NJEIIMCMDFN; // 0x18
		::System::Int32 _Current_k__BackingField; // 0x20
		::System::Void _ctor(::RPG::Client::NavMap::FiveDim::CartographyFiveDim* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::CartographyFiveDim*))((::PBYTE)hIl2Cpp + BKEANDAFOHE_CTOR_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKEANDAFOHE_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Int32 CPLDCCJBDOH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKEANDAFOHE_CPLDCCJBDOH_OFFSET))(this);
		}

		::System::Int32 get_Current()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKEANDAFOHE_GET_CURRENT_OFFSET))(this);
		}

		::System::Void set_Current(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BKEANDAFOHE_SET_CURRENT_OFFSET))(this, a1);
		}

	};
