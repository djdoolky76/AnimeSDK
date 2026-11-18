#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PropertyType.h"
#include "unitysdk/System/Object.h"

class CCLLIEJENHM;
class DCFKHKBLIMA;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KGAADLDPCPH_EKIFPEICBMK_OFFSET UNITYSDK_OFFSET(0x14FD5F10)
#define KGAADLDPCPH_GETPROPERTYFINALVALUE_OFFSET UNITYSDK_OFFSET(0x14FD5DB0)
#define KGAADLDPCPH_GET_ADVANCE_OFFSET UNITYSDK_OFFSET(0x14FD5DA0)
#define KGAADLDPCPH_GET_ID_OFFSET UNITYSDK_OFFSET(0x14FD5D60)
#define KGAADLDPCPH_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x14FD5D80)
#define KGAADLDPCPH_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x14FD5D50)
#define KGAADLDPCPH_GET_STAR_OFFSET UNITYSDK_OFFSET(0x14FD5D90)
#define KGAADLDPCPH_PENDMLPCMKB_OFFSET UNITYSDK_OFFSET(0x14FD5F00)
#define KGAADLDPCPH__CTOR_OFFSET UNITYSDK_OFFSET(0x14FD5EF0)

inline static constexpr unsigned int KGAADLDPCPH_TypeDefinitionIndex = 91597;

class KGAADLDPCPH : public ::System::Object
{
public:
	::DCFKHKBLIMA* _NIIOHJPLBJF_k__BackingField; // 0x10
	::System::Int32 _CPMAOIBBFPE_k__BackingField; // 0x18
	::System::Int32 _HDFAMCDAAGD_k__BackingField; // 0x1C
	::System::Int32 _GEEOENPNKNM_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAADLDPCPH__CTOR_OFFSET))(this);
	}

	::PropertyType get_PropertyType()
	{
		return ((::PropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAADLDPCPH_GET_PROPERTYTYPE_OFFSET))(this);
	}

	::System::Int32 get_ID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAADLDPCPH_GET_ID_OFFSET))(this);
	}

	::System::Int32 get_Level()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAADLDPCPH_GET_LEVEL_OFFSET))(this);
	}

	::System::Int32 get_Star()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAADLDPCPH_GET_STAR_OFFSET))(this);
	}

	::System::Int32 get_Advance()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAADLDPCPH_GET_ADVANCE_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* GetPropertyFinalValue(::CCLLIEJENHM* HMMMOCJAEOA, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* CHFNGHIDFJB, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* GANFDHMLAMO, ::System::Int32 MOBNMDEDJIP, ::System::Int32 MPKKKJFNLIJ, ::System::Int32 ENCIJJONPLE)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*(*)(::PVOID, ::CCLLIEJENHM*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KGAADLDPCPH_GETPROPERTYFINALVALUE_OFFSET))(this, HMMMOCJAEOA, CHFNGHIDFJB, GANFDHMLAMO, MOBNMDEDJIP, MPKKKJFNLIJ, ENCIJJONPLE);
	}

	::DCFKHKBLIMA* PENDMLPCMKB()
	{
		return ((::DCFKHKBLIMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAADLDPCPH_PENDMLPCMKB_OFFSET))(this);
	}

	::System::Void EKIFPEICBMK(::DCFKHKBLIMA* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::DCFKHKBLIMA*))((::PBYTE)hIl2Cpp + KGAADLDPCPH_EKIFPEICBMK_OFFSET))(this, EGEGIMGMJHN);
	}
};
