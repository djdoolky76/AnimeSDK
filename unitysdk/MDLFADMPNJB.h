#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OFCHFMBGNFH;
namespace Foundation { template <typename T1, typename T2> class PriorityQueue_2; }

#define MDLFADMPNJB_DCKMEJEGKJF_OFFSET UNITYSDK_OFFSET(0x1E5F5E90)
#define MDLFADMPNJB_GMCDOIDMDCL_OFFSET UNITYSDK_OFFSET(0x1E5F58F0)
#define MDLFADMPNJB_NIMALELKBOD_OFFSET UNITYSDK_OFFSET(0x1E5F50F0)
#define MDLFADMPNJB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E5F68E0)
#define MDLFADMPNJB__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F4560)

inline static constexpr unsigned int MDLFADMPNJB_TypeDefinitionIndex = 34058;

class MDLFADMPNJB : public ::System::Object
{
public:
	::Foundation::PriorityQueue_2<::OFCHFMBGNFH*, ::OFCHFMBGNFH*>* DINBAAJPJEF; // 0x10
	::System::Boolean EDDACGHLHFL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLFADMPNJB__CTOR_OFFSET))(this);
	}

	::System::Void GMCDOIDMDCL(::OFCHFMBGNFH* IIDKBMFGAOL)
	{
		return ((::System::Void(*)(::PVOID, ::OFCHFMBGNFH*))((::PBYTE)hIl2Cpp + MDLFADMPNJB_GMCDOIDMDCL_OFFSET))(this, IIDKBMFGAOL);
	}

	::System::Boolean DCKMEJEGKJF(::OFCHFMBGNFH*& IIDKBMFGAOL)
	{
		return ((::System::Boolean(*)(::PVOID, ::OFCHFMBGNFH*&))((::PBYTE)hIl2Cpp + MDLFADMPNJB_DCKMEJEGKJF_OFFSET))(this, IIDKBMFGAOL);
	}

	::System::Void NIMALELKBOD(::System::Int64 MNCHKBBDKLP, ::System::Int32 INPIMGKMMON)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + MDLFADMPNJB_NIMALELKBOD_OFFSET))(this, MNCHKBBDKLP, INPIMGKMMON);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLFADMPNJB_PHOADBJGFBE_OFFSET))(this);
	}
};
