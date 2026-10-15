#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPGIIEPHAPH;
namespace RPG::Client::NavMap::FiveDim { class CartographyFiveDim; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLJLGDILPDF_CPLDCCJBDOH_OFFSET UNITYSDK_OFFSET(0x15836000)
#define FLJLGDILPDF_CTOR_OFFSET UNITYSDK_OFFSET(0x158358B0)
#define FLJLGDILPDF_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15836050)
#define FLJLGDILPDF_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15835E70)
#define FLJLGDILPDF_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15836060)

inline static constexpr unsigned int FLJLGDILPDF_TypeDefinitionIndex = 74659;

	class FLJLGDILPDF : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::BPGIIEPHAPH*>* DDHDBPGFNCC; // 0x10
		::RPG::Client::NavMap::FiveDim::CartographyFiveDim* NJEIIMCMDFN; // 0x18
		::System::Int32 _Current_k__BackingField; // 0x20
		::System::Void _ctor(::RPG::Client::NavMap::FiveDim::CartographyFiveDim* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::CartographyFiveDim*))((::PBYTE)hIl2Cpp + FLJLGDILPDF_CTOR_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLJLGDILPDF_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Int32 CPLDCCJBDOH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLJLGDILPDF_CPLDCCJBDOH_OFFSET))(this);
		}

		::System::Int32 get_Current()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLJLGDILPDF_GET_CURRENT_OFFSET))(this);
		}

		::System::Void set_Current(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLJLGDILPDF_SET_CURRENT_OFFSET))(this, a1);
		}

	};
