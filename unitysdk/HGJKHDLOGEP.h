#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PixAirBasicType.h"
#include "unitysdk/System/Object.h"
class HGNAHHFBMMN;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HGJKHDLOGEP_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0x1C44E220)
#define HGJKHDLOGEP_BJNOAIPNJKB_OFFSET UNITYSDK_OFFSET(0x1C44E940)
#define HGJKHDLOGEP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C44E9E0)
#define HGJKHDLOGEP_ELFCOAEOMMN_OFFSET UNITYSDK_OFFSET(0x1C44E700)
#define HGJKHDLOGEP_GET_CURAREAID_OFFSET UNITYSDK_OFFSET(0x1C44E780)
#define HGJKHDLOGEP_GET_CURNODEID_OFFSET UNITYSDK_OFFSET(0x1C44E7A0)
#define HGJKHDLOGEP_GET_CURPLANEID_OFFSET UNITYSDK_OFFSET(0x1C44E7C0)
#define HGJKHDLOGEP_GET_CURSTAGEID_OFFSET UNITYSDK_OFFSET(0x1C44E760)
#define HGJKHDLOGEP_IAOCONCPMAJ_OFFSET UNITYSDK_OFFSET(0x1C44E8F0)
#define HGJKHDLOGEP_JCGFLBGBIHJ_OFFSET UNITYSDK_OFFSET(0x1C44E830)
#define HGJKHDLOGEP_KLJHCKPDDAL_OFFSET UNITYSDK_OFFSET(0x1C44E690)
#define HGJKHDLOGEP_LJBEAENNBBI_OFFSET UNITYSDK_OFFSET(0x1C44E7E0)
#define HGJKHDLOGEP_LMMJLJJDMGD_OFFSET UNITYSDK_OFFSET(0x1C44E990)
#define HGJKHDLOGEP_SET_CURAREAID_OFFSET UNITYSDK_OFFSET(0x1C44E790)
#define HGJKHDLOGEP_SET_CURNODEID_OFFSET UNITYSDK_OFFSET(0x1C44E7B0)
#define HGJKHDLOGEP_SET_CURPLANEID_OFFSET UNITYSDK_OFFSET(0x1C44E7D0)
#define HGJKHDLOGEP_SET_CURSTAGEID_OFFSET UNITYSDK_OFFSET(0x1C44E770)

inline static constexpr unsigned int HGJKHDLOGEP_TypeDefinitionIndex = 81994;

	class HGJKHDLOGEP : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* PKAPPLBLJCE; // 0x10
		::System::UInt32 _CurAreaID_k__BackingField; // 0x18
		::System::UInt32 _CurNodeID_k__BackingField; // 0x1C
		::System::UInt32 _CurPlaneID_k__BackingField; // 0x20
		::System::UInt32 _CurStageID_k__BackingField; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJKHDLOGEP_CTOR_OFFSET))(this);
		}

		::System::Void ALJIOCDBMKO(::HGNAHHFBMMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGNAHHFBMMN*))((::PBYTE)hIl2Cpp + HGJKHDLOGEP_ALJIOCDBMKO_OFFSET))(this, a1);
		}

		::System::Void ELFCOAEOMMN(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + HGJKHDLOGEP_ELFCOAEOMMN_OFFSET))(this, a1, a2);
		}

		::System::Void KLJHCKPDDAL(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + HGJKHDLOGEP_KLJHCKPDDAL_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_CurStageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJKHDLOGEP_GET_CURSTAGEID_OFFSET))(this);
		}

		::System::Void set_CurStageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HGJKHDLOGEP_SET_CURSTAGEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJKHDLOGEP_GET_CURAREAID_OFFSET))(this);
		}

		::System::Void set_CurAreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HGJKHDLOGEP_SET_CURAREAID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurNodeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJKHDLOGEP_GET_CURNODEID_OFFSET))(this);
		}

		::System::Void set_CurNodeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HGJKHDLOGEP_SET_CURNODEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurPlaneID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJKHDLOGEP_GET_CURPLANEID_OFFSET))(this);
		}

		::System::Void set_CurPlaneID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HGJKHDLOGEP_SET_CURPLANEID_OFFSET))(this, a1);
		}

		::System::UInt32 LJBEAENNBBI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJKHDLOGEP_LJBEAENNBBI_OFFSET))(this);
		}

		::System::UInt32 IAOCONCPMAJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJKHDLOGEP_IAOCONCPMAJ_OFFSET))(this);
		}

		::System::UInt32 BJNOAIPNJKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJKHDLOGEP_BJNOAIPNJKB_OFFSET))(this);
		}

		::System::UInt32 LMMJLJJDMGD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJKHDLOGEP_LMMJLJJDMGD_OFFSET))(this);
		}

		::System::UInt32 JCGFLBGBIHJ(::RPG::GameCore::PixAirBasicType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::PixAirBasicType))((::PBYTE)hIl2Cpp + HGJKHDLOGEP_JCGFLBGBIHJ_OFFSET))(this, a1);
		}

	};
