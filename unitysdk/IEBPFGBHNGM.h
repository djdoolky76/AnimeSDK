#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IEIPFBGBBMH;
namespace RPG::Client::NavMap::FiveDim { class CartographyFiveDim; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IEBPFGBHNGM_CPLDCCJBDOH_OFFSET UNITYSDK_OFFSET(0x15EE0EE0)
#define IEBPFGBHNGM_CTOR_OFFSET UNITYSDK_OFFSET(0x15EE0790)
#define IEBPFGBHNGM_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15EE0F30)
#define IEBPFGBHNGM_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15EE0D50)
#define IEBPFGBHNGM_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15EE0F40)

inline static constexpr unsigned int IEBPFGBHNGM_TypeDefinitionIndex = 74656;

	class IEBPFGBHNGM : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::IEIPFBGBBMH*>* LFMPGKONJCH; // 0x10
		::RPG::Client::NavMap::FiveDim::CartographyFiveDim* NJEIIMCMDFN; // 0x18
		::System::Int32 _Current_k__BackingField; // 0x20
		::System::Void _ctor(::RPG::Client::NavMap::FiveDim::CartographyFiveDim* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::CartographyFiveDim*))((::PBYTE)hIl2Cpp + IEBPFGBHNGM_CTOR_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBPFGBHNGM_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Int32 CPLDCCJBDOH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBPFGBHNGM_CPLDCCJBDOH_OFFSET))(this);
		}

		::System::Int32 get_Current()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBPFGBHNGM_GET_CURRENT_OFFSET))(this);
		}

		::System::Void set_Current(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IEBPFGBHNGM_SET_CURRENT_OFFSET))(this, a1);
		}

	};
