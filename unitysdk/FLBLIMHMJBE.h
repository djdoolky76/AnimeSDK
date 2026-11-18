#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/GameplayTag.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLBLIMHMJBE_FACIHBMKFPJ_OFFSET UNITYSDK_OFFSET(0x1410BCD0)
#define FLBLIMHMJBE_HCFBNLECGPB_OFFSET UNITYSDK_OFFSET(0x1410B820)
#define FLBLIMHMJBE_HCNNFBJBHDK_1_OFFSET UNITYSDK_OFFSET(0x1410B990)
#define FLBLIMHMJBE_HCNNFBJBHDK_OFFSET UNITYSDK_OFFSET(0x1410B6D0)
#define FLBLIMHMJBE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1410BCE0)
#define FLBLIMHMJBE__CTOR_OFFSET UNITYSDK_OFFSET(0x1410B640)

inline static constexpr unsigned int FLBLIMHMJBE_TypeDefinitionIndex = 71621;

class FLBLIMHMJBE : public ::System::Object
{
public:
	// static const ::System::Int32 DKCJALPOGIE = 0x20; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* MLHCMAOALGC; // 0x10
	::System::Int32 FPKCLGDJEPB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLBLIMHMJBE__CTOR_OFFSET))(this);
	}

	::System::UInt32 HCNNFBJBHDK(::System::Collections::Generic::List_1<::MoleMole::GameplayTag>* JMDOANHOEJG)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*))((::PBYTE)hIl2Cpp + FLBLIMHMJBE_HCNNFBJBHDK_OFFSET))(this, JMDOANHOEJG);
	}

	::System::Int32 HCFBNLECGPB(::System::String* AELLPLBJELA)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLBLIMHMJBE_HCFBNLECGPB_OFFSET))(this, AELLPLBJELA);
	}

	::System::UInt32 HCNNFBJBHDK_1(::System::Collections::Generic::IEnumerable_1<::System::String*>* JMDOANHOEJG)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + FLBLIMHMJBE_HCNNFBJBHDK_1_OFFSET))(this, JMDOANHOEJG);
	}

	::System::Int32 FACIHBMKFPJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLBLIMHMJBE_FACIHBMKFPJ_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLBLIMHMJBE_PHOADBJGFBE_OFFSET))(this);
	}
};
